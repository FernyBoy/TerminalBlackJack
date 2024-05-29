/*
Fecha: 29/05/2024
Nombre: main.cpp

Integrantes:
    -   Ahumada Herrera Jorge Alan (223209096)
    -   Amaya Soria Angel Alberto (223210350)
    -   Borquez Guerrero Angel Fernando (219208106)
    -   Ramos Jusaino Joaquin (222206668)

Descripción:
    Este programa se dedica a realizar una simulación del juego de BlackJack.
*/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

// #include "./implementations/BlackJack.cpp"
// #include "./implementations/Captura.cpp"
// #include "./implementations/Cursor.cpp"
// #include "./implementations/Cartas.cpp"
// #include "./implementations/Colores.cpp"
// #include "./implementations/Menus.cpp"

#include "./headers/blackJack.hpp"
#include "./headers/captura.hpp"
#include "./headers/cursor.hpp"
#include "./headers/cartas.hpp"
#include "./headers/colores.hpp"
#include "./headers/menus.hpp"

using namespace std;

int main()
{
    int seleccion = 0;
    int tecla = 0;
    float dinero = 100;

    do
    {
        MenuPrincipal(seleccion);

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
                        if(seleccion < 3)
                        {
                            ++seleccion;
                        }
                        break;
                }
            } 
            else if(tecla == 13) 
            { 
                break;
            }
            
            MenuPrincipal(seleccion);
        }

        switch(seleccion) 
        {
            case 0:
                system("cls");
                dinero = JugarBlackJack(dinero);
                break;
            case 1:
                system("cls");
                Instrucciones();
                break;
            case 2:
                system("cls");
                Creditos();
                break;
            case 3:
                cout << "\tSaliendo del juego..." << endl;
                Sleep(1000);
                break;
        }


    } while(seleccion != 3);

    return 0;
}