#include <iostream>

#include "../headers/menus.hpp"
#include "../headers/cartas.hpp"
#include "../headers/colores.hpp"
#include "../headers/cursor.hpp"

using namespace std;

void logoBlackJack()
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

void menuPrincipal(int eleccion)
{
    string opcionesMenu[] = {" Jugar", "Opciones", "Creditos", " Salir"};
    EstadoCursor(APAGADO);
    MoverCursor(1,3);
    logoBlackJack();
    cout << "\n\n";
    EstablecerColor(BLANCO);
    for (int i = 0; i < 4; ++i) {
        if (i == eleccion) {
            //el centrado de las opciones es parcial, ya que si abren la consola a pantalla completa, no queda centrado
            cout << "\t\t\t\t\t\t> " << opcionesMenu[i] << endl;
            cout << '\n';
        } else {
            cout << "\t\t\t\t\t\t  " << opcionesMenu[i] << endl;
            cout << '\n';
        }
    }
}

void tomarCarta(int eleccion)
{
    string opcionesMenu[] = {" Tomar Carta", "abstenerse"};
    EstadoCursor(APAGADO);
    EstablecerColor(NEGRO,BLANCO);
    for (int i = 0; i < 2; ++i) {
        if (i == eleccion) {
            //el centrado de las opciones es parcial, ya que si abren la consola a pantalla completa, no queda centrado
            cout << "\t\t\t\t\t\t> " << opcionesMenu[i] << endl;
            cout << '\n';
        } else {
            cout << "\t\t\t\t\t\t  " << opcionesMenu[i] << endl;
            cout << '\n';
        }
    }
}

void instrucciones()
{
    EstablecerTamVentana(110,32);
    MarcoSimple(108,30,0,0);
    MoverCursor(1,1);
    logoBlackJack();
    cout << "\n";
    cout << "\tINSTRUCCIONES: " << endl;
    cout << "\tEl Blackjack es un juego dise\244ado para intelectuales que se origin\242 en Francia." << endl;
    cout << "\tDurante muchos a\244os ha seguido siendo el m\240s famoso y se considera el juego m\240s" << endl;
    cout << "\tpopular en cualquier mesa de juego en casino en l\241nea." << endl;
    cout << "\tEl nombre m\240s conocido del blackjack, familiar incluso para los que nunca han" << endl;
    cout << "\testado en un casino de verdad, es \42 21 \42. El objetivo es no obtener m\240s de 21 puntos." << endl;
    cout << "\tEs importante que tu oponente tenga un n\243mero de puntos inferior al tuyo." << endl;
}

void creditos()
{
    EstablecerTamVentana(110,32);
    MarcoSimple(108,30,0,0);
    MoverCursor(1,1);
    logoBlackJack();
}
