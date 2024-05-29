#include <iostream>
#include <conio.h>

#include "../headers/menus.hpp"
#include "../headers/cursor.hpp"
#include "../headers/colores.hpp"
#include "../headers/cartas.hpp"

using namespace std;

void LogoBlackJack()
{
    EstablecerColor(ROJO);
    cout << "\t$$$$$$$\134  $$\134                     $$\134                                     $$\134       " << endl;
    cout << "\t$$  __$$\134 $$ |                    $$ |                                    $$ |      " << endl;
    cout << "\t$$ |  $$ |$$ | $$$$$$\134   $$$$$$$\134 $$ |  $$\134       $$\134  $$$$$$\134   $$$$$$$\134 $$ |  $$\134 " << endl;
    cout << "\t$$$$$$$\134 |$$ | \134____$$\134 $$  _____|$$ | $$  |      \134__| \134____$$\134 $$  _____|$$ | $$  |" << endl;
    cout << "\t$$  __$$\134 $$ | $$$$$$$ |$$ /      $$$$$$  /       $$\134  $$$$$$$ |$$ /      $$$$$$  / " << endl;
    cout << "\t$$ |  $$ |$$ |$$  __$$ |$$ |      $$  _$$<        $$ |$$  __$$ |$$ |      $$  _$$<  " << endl;
    cout << "\t$$$$$$$  |$$ |\134$$$$$$$ |\134$$$$$$$\134 $$ | \134$$\134       $$ |\134$$$$$$$ |\134$$$$$$$\134 $$ | \134$$\134 " << endl;
    cout << "\t\134_______/ \134__| \134_______| \134_______|\134__|  \134__|      $$ | \134_______| \134_______|\134__|  \134__|" << endl;
    cout << "\t                                            $$\   $$ |                              " << endl;
    cout << "\t                                            \$$$$$$  |                              " << endl;
    cout << "\t                                             \______/                               " << endl;
    EstablecerColor(BLANCO);
}

void MenuPrincipal(int eleccion)
{
    MoverCursor(0, 0);

    cout << (char)218;
    for(int i = 0; i < 100; i++) cout << (char)196;
    cout << (char)191 << endl;

    for(int i = 0; i < 28; ++i)
    {
        cout << (char)179;
        for(int j = 0; j < 100; ++j)
        {
            cout << " ";
        }
        cout << (char)179 << endl;
    }

    cout << (char)192;
    for(int i = 0; i < 100; i++) cout << (char)196;
    cout << (char)217 << endl;


    string opcionesMenu[] = {" Jugar", " Instrucciones", " Creditos", " Salir"};

    EstadoCursor(APAGADO);
    MoverCursor(1,3);
    LogoBlackJack();
    cout << "\n\n";
    EstablecerColor(BLANCO);

    for (int i = 0; i < 4; ++i) {
        if (i == eleccion) 
        {
            cout << "\t\t\t\t\t> " << opcionesMenu[i] << endl;
            cout << '\n';
        } 
        else 
        {
            cout << "\t\t\t\t\t  " << opcionesMenu[i] << endl;
            cout << '\n';
        }
    }
}

void MenuSeguirJugando(int seleccion)
{
    string opcionesMenu[] = {" Seguir Jugando", " Salir"};

    EstadoCursor(APAGADO);
    MoverCursor(0, 75);

    for (int i = 0; i < 2; ++i) 
    {
        if (i == seleccion) 
        {
            cout << "> " << opcionesMenu[i] << endl;
            cout << '\n';
        } 
        else 
        {
            cout << "  " << opcionesMenu[i] << endl;
            cout << '\n';
        }
    }
}

void MenuMovimientoJugador(int seleccion)
{
    string opcionesMenu[] = {" Tomar otra carta", " Jugar mano"};

    EstadoCursor(APAGADO);
    MoverCursor(0, 66);

    for (int i = 0; i < 2; ++i) 
    {
        if (i == seleccion) 
        {
            cout << "> " << opcionesMenu[i] << endl;
            cout << '\n';
        } 
        else 
        {
            cout << "  " << opcionesMenu[i] << endl;
            cout << '\n';
        }
    }
}

void Instrucciones()
{
    MoverCursor(1,1);
    LogoBlackJack();

    cout << (char)218;
    for(int i = 0; i < 15; i++) cout << (char)196;
    cout << (char)191 << endl;
    cout << (char)179 << " Instrucciones " << (char)179 << endl;
    cout << (char)192;
    for(int i = 0; i < 15; i++) cout << (char)196;
    cout << (char)217 << endl;
    cout << endl;

    cout << "El Blackjack es un juego dise\244ado para intelectuales que se origin\242 en Francia." << endl;
    cout << "Durante muchos a\244os ha seguido siendo el m\240s famoso y se considera el juego m\240s popular en cualquier mesa de juego en casino en l\241nea." << endl;
    cout << "El nombre m\240s conocido del blackjack, familiar incluso para los que nunca han estado en un casino de verdad, es '21'. El objetivo es no obtener m\240s de 21 puntos." << endl;
    cout << "Es importante que tu oponente tenga un n\243mero de puntos inferior al tuyo." << endl;

    cout << "\nObjetivo" << endl;
    for(int i = 0; i < 20; i++) cout << (char)196;
    cout << endl;
    cout << "El objetivo principal del Blackjack es obtener una mano cuyo valor total est\202 m\240s cerca de 21 que la mano del Dealer, sin exceder ese valor." << endl;
    cout << "Valor de las cartas\72 Las cartas num\202ricas \50 1-10 \51 tienen el mismo valor que su n\243mero." << endl;
    cout << "Las cartas con figuras \50 J, Q, K \51 valen 10 puntos cada una." << endl;
    cout << "El As puede valer 1 u 11, dependiendo de lo que sea m\240s conveniente para el jugador." << endl;

    cout << "\nDesarrollo" << endl;
    for(int i = 0; i < 20; i++) cout << (char)196;
    cout << endl;
    cout << "El Dealer reparte dos cartas a cada jugador, incluy\202ndose a s\241 mismo." << endl;
    cout << "Todas las cartas del Dealer se reparten boca arriba, excepto una de sus cartas, que se reparte boca abajo \50llamada \42carta boca abajo\42\51." << endl;
    cout << "Cada jugador, en su turno, tiene varias opciones\72" << endl;
    cout << "\42Pedir carta\42: El jugador recibe una carta adicional para intentar mejorar su mano." << endl;
    cout << "\42Plantarse\42: El jugador decide no recibir m\240s cartas y se queda con su mano actual." << endl;
    cout << "\nUna vez que todos los jugadores han completado sus turnos, el Dealer revela su carta boca abajo y juega su mano." << endl;
    cout << "El Dealer debe seguir reglas predefinidas sobre cu\240ndo pedir o plantarse." << endl;
    cout << "El Dealer compara su mano con la del jugador. Si la mano del jugador es m\240s cercana a 21 que la del Dealer y no ha excedido 21, el jugador gana." << endl;
    cout << "Si la mano del jugador excede 21, pierde autom\240ticamente, independientemente de la mano del Dealer." << endl;

    cout << "\nPuntuaci\242n" << endl;
    for(int i = 0; i < 20; i++) cout << (char)196;
    cout << endl;
    cout << "Si la mano del jugador es m\240s cercana a 21 que la del Dealer y no excede 21, el jugador gana y recibe una cantidad igual a su apuesta." << endl;
    cout << "Si la mano del Dealer es m\240s cercana a 21 que la del jugador o si la mano del jugador excede 21, el jugador pierde y la casa se queda con la apuesta del jugador." << endl;
    cout << "Si la mano del jugador tiene el mismo valor que la del Dealer, se considera un \42empate\42 o \42push\42 y el jugador recupera su apuesta sin ganar ni perder." << endl;

    cout << "\n\n>  Volver";
    _getch();
    system("cls");
}

void Creditos()
{
    MoverCursor(1,1);
    LogoBlackJack();

    cout << "\n\n\n";
    cout << (char)218;
    for(int i = 0; i < 10; i++) cout << (char)196;
    cout << (char)191 << endl;
    cout << (char)179 << " Cr\202ditos " << (char)179 << endl;
    cout << (char)192;
    for(int i = 0; i < 10; i++) cout << (char)196;
    cout << (char)217 << endl;
    cout << endl;

    cout << "\120rograma elaborado como proyecto final de \120rogramaci\242n de \103omputadoras de la \114icenciatura en \103iencias de la \103omputaci\242n de la \125niversidad de \123onora." << endl;
    cout << "\n\nPresentado el 29 de mayo del 2024.\n" << endl;

    cout << "\nElaborado por" << endl;
    for(int i = 0; i < 20; i++) cout << (char)196;
    cout << endl;

    cout << " - Ahumada Herrera Jorge Alan (223209096)\n" << endl;
    cout << " - Amaya Soria Angel Alberto (223210350)\n" << endl;
    cout << " - B\242rquez Guerrero Angel Fernando (219208106)\n" << endl;
    cout << " - Ramos Jusaino Joaquin (222206668)\n" << endl;

    cout << "\n\n>  Volver";
    _getch();
    system("cls");
}
