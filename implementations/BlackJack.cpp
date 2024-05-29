#include <iostream>
#include <random>
#include <conio.h>

#include "../headers/blackjack.hpp"
#include "../headers/colores.hpp"
#include "../headers/cursor.hpp"
#include "../headers/cartas.hpp"
#include "../headers/captura.hpp"
#include "../headers/menus.hpp"

using namespace std;

int JugarBlackJack(int dinero)
{
    int seguirJugando = 0;

    int **cartasJugador = new int*[maximoDeCartas];
    for(int i = 0; i < maximoDeCartas; ++i)
    {
        cartasJugador[i] = new int[valores];
    }

    int **cartasDealer = new int*[maximoDeCartas];
    for(int i = 0; i < maximoDeCartas; ++i)
    {
        cartasDealer[i] = new int[valores];
    }

    do
    {
        if(dinero == 0)
        {
            system("cls");
            LogoBlackJack();

            MoverCursor(0, 16);
            for(int i = 0; i < 100; i++) cout << (char)196;

            MoverCursor(0, 18);
            cout << "No hay fondos suficientes para seguir jugando";

            MoverCursor(0, 20);
            cout << ">  Volver";
            getch();

            break;
        }

        // Empezando ronda
        system("cls");
        LogoBlackJack();
        ReiniciarCartas(cartasJugador, cartasDealer);
        int apuesta = 0;
        int manoJugador = 0;
        int manoDealer = 0;
        int cantidadCartasJugador = 2;
        int cantidadCartasDealer = 2;
        int movimientoJugador = 0;

        // Apuesta del jugador
        apuesta = Apostar(dinero);
        dinero = dinero - apuesta;

        system("cls");
        LogoBlackJack();
        MoverCursor(0, 14);
        for(int i = 0; i < 100; i++) cout << (char)196;

        MoverCursor(0, 16);
        cout << "Apuesta actual: " << apuesta;

        GenerarCartas(cartasJugador, cartasDealer);
        int puntosJugador = CalcularPuntos(cantidadCartasJugador, cartasJugador);
        int puntosDealer = CalcularPuntos(cantidadCartasDealer, cartasDealer);

        // Mano del dealer
        MostrarCartasDealer(cantidadCartasDealer, cartasDealer);

        ImprimirCarta(14, 3, 1, 24);

        EstablecerColor(NEGRO, NEGRO);
        MarcoSimple(20, 1, 0, 40);
        EstablecerColor(NEGRO, BLANCO);

        MoverCursor(0, 42);
        for(int i = 0; i < 100; i++) cout << (char)196;

        // Movimientos del jugador
        do
        {
            MostrarCartasJugador(cantidadCartasJugador, cartasJugador);

            movimientoJugador = MovimientoJugador();

            if(movimientoJugador == 0)
            {
                puntosJugador = CalcularPuntos(cantidadCartasJugador + 1, cartasJugador);
                ++cantidadCartasJugador;
            }

            MostrarCartasJugador(cantidadCartasJugador, cartasJugador);

            if(puntosJugador > 21)
            {
                break;
            }

        } while(movimientoJugador == 0);

        // Movimientos del dealer
        if(puntosJugador < 22)
        {
            for(int i = 2; puntosDealer < 17; ++i)
            {
                puntosDealer = CalcularPuntos(i + 1, cartasDealer);
                cantidadCartasDealer++;
            }

            puntosDealer = CalcularPuntos(cantidadCartasDealer, cartasDealer);

            MostrarCartasDealer(cantidadCartasDealer, cartasDealer);
        }
        else
        {
            MostrarCartasDealer(cantidadCartasDealer, cartasDealer);
        }

        MoverCursor(0, 66);
        EstablecerColor(NEGRO, NEGRO);
        MarcoSimple(30, 5, 0, 66);
        EstablecerColor(NEGRO, BLANCO);
        MoverCursor(0, 67);
        for(int i = 0; i < 100; i++) cout << (char)196;

        MoverCursor(0, 68);
        dinero = FinalizarJuego(dinero, apuesta, puntosJugador, puntosDealer);

        MoverCursor(0, 73);
        for(int i = 0; i < 100; i++) cout << (char)196;

        MoverCursor(0, 75);
        seguirJugando = SeguirJugando();


    } while(seguirJugando == 0);
    
    system("cls");
    return dinero;
}

int SeguirJugando()
{
    int tecla = 0;
    int seleccion = 0;

    MenuSeguirJugando(seleccion);

    while(true) 
    {
        tecla = _getch(); // Captura la tecla presionada sin necesidad de presionar Enter

        if(tecla == 224) 
        { // Captura las flechas en Windows
            tecla = _getch();

            switch(tecla) 
            {
                case 72: // Flecha hacia arriba
                    if(seleccion > 0) 
                    {
                        --seleccion;
                    }
                    break;

                case 80: // Flecha hacia abajo
                    if(seleccion < 1)
                    {
                        ++seleccion;
                    }
                    break;
            }
        } 
        else if(tecla == 13) // Enter
        { 
            break;
        }
        
        MenuSeguirJugando(seleccion);
    }

    return seleccion;
}


void ReiniciarCartas(int **cartasJugador, int **cartasDealer)
{
    for(int i = 0; i < maximoDeCartas; i++)
    {
        cartasJugador[i][0] = 0;
        cartasJugador[i][1] = 0;

        cartasDealer[i][0] = 0;
        cartasDealer[i][1] = 0;
    }
}

int Apostar(int dinero)
{
    int apuestaLocal;

    cout << "\n\nDinero actual: $" << dinero << endl;
    cout << "\n\250Cu\240nto te gustar\241a apostar?\n - ";
    apuestaLocal = LongitudSegura(1, dinero);

    return apuestaLocal;
}

void GenerarCartas(int *cartasJugador[], int *cartasDealer[])
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> denominacion(1, 13);
    uniform_int_distribution<int> palo(1, 4);

    for(int i = 0; i < maximoDeCartas; i++)
    {
        cartasJugador[i][0] = denominacion(gen);
        cartasJugador[i][1] = palo(gen);

        cartasDealer[i][0] = denominacion(gen);
        cartasDealer[i][1] = palo(gen);
    }
}

int MovimientoJugador()
{   
    int tecla = 0;
    int seleccion = 0;

    MenuMovimientoJugador(seleccion);

    while(true) 
    {
        tecla = _getch(); // Captura la tecla presionada sin necesidad de presionar Enter

        if(tecla == 224) 
        { // Captura las flechas en Windows
            tecla = _getch();

            switch(tecla) 
            {
                case 72: // Flecha hacia arriba
                    if(seleccion > 0) 
                    {
                        --seleccion;
                    }
                    break;

                case 80: // Flecha hacia abajo
                    if(seleccion < 1)
                    {
                        ++seleccion;
                    }
                    break;
            }
        } 
        else if(tecla == 13) // Enter
        { 
            break;
        }
        
        MenuMovimientoJugador(seleccion);
    }

    return seleccion;
}

int CalcularPuntos(int cartasActuales, int **cartas)
{
    int puntos = 0;

    for(int i = 0; i < cartasActuales; i++)
    {
        if(cartas[i][0] > 10)
        {
            puntos = puntos + 10;
        }
        else
        {
            puntos = puntos + cartas[i][0];
        }
    }

    return puntos;
}

void MostrarCartasJugador(int cartasActuales, int **manoJugador)
{
    MoverCursor(0, 44);
    cout << "Mano actual" << endl;
    for(int i = 0; i < 20; i++) cout << (char)196;
    cout << endl;

    cout << "Has tomado cartas " << cartasActuales - 2 << " veces." << endl;

    for(int i = 0, x = 1; i < cartasActuales; ++i, x += 28)
    {
        ImprimirCarta(manoJugador[i][0], manoJugador[i][1], x, 48);
    }

    MoverCursor(0, 64);
    cout << "Puntos actuales: " << CalcularPuntos(cartasActuales, manoJugador) << endl;
}

void MostrarCartasDealer(int cartasActuales, int **manoDealer)
{
    MoverCursor(0, 19);
    cout << "\nMano del Dealer" << endl;
    for(int i = 0; i < 20; i++) cout << (char)196;
    cout << endl;

    cout << "El Dealer ha tomado cartas " << cartasActuales - 2 << " veces." << endl;
    
    for(int i = 0, x = 1; i < cartasActuales; ++i, x += 28)
    {
        ImprimirCarta(manoDealer[i][0], manoDealer[i][1], x, 24);
    }

    MoverCursor(0, 40);
    cout << "Puntos del Dealer: " << CalcularPuntos(cartasActuales, manoDealer) << endl;
}

void TotalDealer(int manoDealer)
{
    cout << "Las cartas del Dealer suman: " << manoDealer << endl;
}

void TotalJugador(int manoJugador)
{
    cout << "Tus cartas suman: " << manoJugador << endl;
}

int Empate(int dinero, int apuesta, int puntosJugador, int puntosDealer)
{
    if (puntosJugador == 21)
    {
        cout << "Ambos tienen Blackjacks, el dinero se devuelve.";
        dinero = dinero + apuesta;
    }
    else
    {
        cout << "El Dealer gana porque ninguno tiene Blackjacks.";
        dinero = dinero;
    }
    return dinero;
}

int Excedido(int puntosJugador, int puntosDealer, int dinero, int apuesta)
{
    if(puntosJugador > 21)
    {
        cout << "\nJugador excedido." << endl;
        dinero = dinero;
    }
    if(puntosDealer > 21)
    {
        cout << "\nDealer excedido." << endl;
        dinero = dinero + 2 * apuesta;
    }
    return dinero;
}

int FinalizarJuego(int dinero, int apuesta, int puntosJugador, int puntosDealer)
{
    if(puntosJugador > 21 || puntosDealer > 21)
    {
        if(puntosJugador > 21)
        {
            cout << "\nJugador excedido." << endl;
            dinero = dinero;
        }
        else
        {
            cout << "\nDealer excedido." << endl;
            dinero = dinero + 2 * apuesta;
        }
    }
    else
    {
        if(puntosJugador == puntosDealer)
        {
            cout << "\nT\243 y el dealer tienen un empate." << endl;
            dinero = Empate(dinero, apuesta, puntosJugador, puntosDealer);
        }
        else if(puntosJugador < puntosDealer)
        {
            cout << "\nGan\242 el dealer." << endl;
        }
        else if(puntosJugador > puntosDealer)
        {
            cout << "\nHas ganado." << endl;
            dinero = dinero + 2 * apuesta;
        }
    }
    
    cout << "\nAhora tienes $" << dinero << "." << endl;

    return dinero;
}

