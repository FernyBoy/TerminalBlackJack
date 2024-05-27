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

#include "./implementations/Blackjack.cpp"
#include "./implementations/Captura.cpp"
#include "./implementations/Menus.cpp"

using namespace std;

int main()
{
    int eleccion = 0;
    int tecla = 0;

    do
    {
        EstablecerTamVentana(110,32);
        MarcoSimple(108,30,0,0);
        menuPrincipal(eleccion);

        while(true) {
            tecla = _getch(); // Captura la tecla presionada sin necesidad de presionar Enter

            if(tecla == 224) 
            { // Captura las flechas en Windows
                tecla = _getch();

                switch(tecla) 
                {
                    case 72: // Flecha hacia arriba
                        if(eleccion > 0) 
                        {
                            --eleccion;
                        }
                        break;

                    case 80: // Flecha hacia abajo
                        if(eleccion < 3)
                        {
                            ++eleccion;
                        }
                        break;
                }
            } 
            else if(tecla == 13) 
            { 
                break;
            }
            
            menuPrincipal(eleccion);
        }

        switch(eleccion) 
        {
            case 0:
                system("cls");
                jugarBlackJack();
                break;
            case 1:
                instrucciones();
                break;
            case 2:
                creditos();
                break;
            case 3:
                cout << "\tSaliendo del juego" << endl;
                break;
        }

        Sleep(2000);

    } while(eleccion != 3);

    return 0;
}