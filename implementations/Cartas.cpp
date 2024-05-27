#include <iostream>

#include "../headers/cartas.hpp"
#include "../headers/cursor.hpp"
#include "../headers/colores.hpp"

using namespace std;

void MarcoSimple(unsigned ancho, unsigned alto, short x, short y)
{
    MoverCursor(x, y);
    cout << " " << (char)ESI;

    for(unsigned i = 2 ; i < ancho ; ++i) cout << (char)BH;
    cout << (char)ESD << " ";

    for(unsigned i = 2 ; i < alto ; ++i){
        MoverCursor(x,++y);
        cout << " " << (char)BV;
        for(unsigned i = 2 ; i < ancho ; ++i) std::cout << (char)ESP;
        cout << (char)BV << " ";
    }

    MoverCursor(x, ++y);
    cout << " " << (char)EII;
 
    for(unsigned i = 2 ; i < ancho ; ++i) std::cout << (char)BH;
    cout << (char)EID << " ";
};

void ImprimirCarta(int denominacion, int palo, int x, int y)
{
    if((palo == 3) || (palo == 4))
    {
        EstablecerColor(BLANCO, ROJO);
    }
    else
    {
        EstablecerColor(BLANCO, NEGRO);
    }
    
    MarcoSimple(ANCHO, ALTO, x, y);

    switch (denominacion)
    {
        case 1:
            CartaA(palo, x, y);
            break;

        case 2:
            CartaDos(palo, x, y);
            break;

        case 3:
            CartaTres(palo, x, y);
            break;

        case 4:
            CartaCuatro(palo, x, y);
            break;

        case 5:
            CartaCinco(palo, x, y);
            break;
            
        case 6:
            CartaSeis(palo, x, y);
            break;

        case 7:
            CartaSiete(palo, x, y);
            break;

        case 8:
            CartaOcho(palo, x, y);
            break;

        case 9:
            CartaNueve(palo, x, y);
            break;

        case 10:
            CartaDiez(palo, x, y);
            break;

        case 11:
            CartaJ(palo, x, y);
            break;

        case 12:
            CartaQ(palo, x, y);
            break;

        case 13:
            CartaK(palo, x, y);
            break;

        case 14:
            CartaTrasera(x, y);
            break;
    }
};

void CartaA(int palo, int x, int y)
{   
    MoverCursor(x + 2, y + 1); cout << "A";
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << "A";
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 10, y + 4); cout << (char)palo;
    MoverCursor(x + 11, y + 4); cout << (char)palo;
    MoverCursor(x + 12, y + 4); cout << (char)palo;
    MoverCursor(x + 9, y + 5); cout << (char)palo;
    MoverCursor(x + 13, y + 5); cout << (char)palo;
    MoverCursor(x + 8, y + 6); cout << (char)palo;
    MoverCursor(x + 14, y + 6); cout << (char)palo;
    MoverCursor(x + 8, y + 7); cout << (char)palo;
    MoverCursor(x + 9, y + 7); cout << (char)palo;
    MoverCursor(x + 10, y + 7); cout << (char)palo;
    MoverCursor(x + 11, y + 7); cout << (char)palo;
    MoverCursor(x + 12, y + 7); cout << (char)palo;
    MoverCursor(x + 13, y + 7); cout << (char)palo;
    MoverCursor(x + 14, y + 7); cout << (char)palo;
    MoverCursor(x + 8, y + 8); cout << (char)palo;
    MoverCursor(x + 14, y + 8); cout << (char)palo;
    MoverCursor(x + 8, y + 9); cout << (char)palo;
    MoverCursor(x + 14, y + 9); cout << (char)palo;
    MoverCursor(x + 8, y + 10); cout << (char)palo;
    MoverCursor(x + 14, y + 10); cout << (char)palo;
}

void CartaDos(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << 2;
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << 2;
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 11, y + 4); cout << (char)palo;
    MoverCursor(x + 11, y + 10); cout << (char)palo;
}

void CartaTres(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << 3;
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << 3;
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 11, y + 4); cout << (char)palo;
    MoverCursor(x + 11, y + 7); cout << (char)palo;
    MoverCursor(x + 11, y + 10); cout << (char)palo;
}

void CartaCuatro(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << 4;
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << 4;
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 6, y + 4); cout << (char)palo;
    MoverCursor(x + 16, y + 4); cout << (char)palo;
    MoverCursor(x + 6, y + 10); cout << (char)palo;
    MoverCursor(x + 16, y + 10); cout << (char)palo;
}

void CartaCinco(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << 5;
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << 5;
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 6, y + 4); cout << (char)palo;
    MoverCursor(x + 16, y + 4); cout << (char)palo;
    MoverCursor(x + 11, y + 7); cout << (char)palo;
    MoverCursor(x + 6, y + 10); cout << (char)palo;
    MoverCursor(x + 16, y + 10); cout << (char)palo;
}

void CartaSeis(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << 6;
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << 6;
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 6, y + 4); cout << (char)palo;
    MoverCursor(x + 16, y + 4); cout << (char)palo;
    MoverCursor(x + 6, y + 7); cout << (char)palo;
    MoverCursor(x + 16, y + 7); cout << (char)palo;
    MoverCursor(x + 6, y + 10); cout << (char)palo;
    MoverCursor(x + 16, y + 10); cout << (char)palo;
}

void CartaSiete(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << 7;
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << 7;
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 6, y + 4); cout << (char)palo;
    MoverCursor(x + 16, y + 4); cout << (char)palo;
    MoverCursor(x + 6, y + 7); cout << (char)palo;
    MoverCursor(x + 11, y + 7); cout << (char)palo;
    MoverCursor(x + 16, y + 7); cout << (char)palo;
    MoverCursor(x + 6, y + 10); cout << (char)palo;
    MoverCursor(x + 16, y + 10); cout << (char)palo;
}

void CartaOcho(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << 8;
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << 8;
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 6, y + 4); cout << (char)palo;
    MoverCursor(x + 16, y + 4); cout << (char)palo;
    MoverCursor(x + 11, y + 6); cout << (char)palo;
    MoverCursor(x + 6, y + 7); cout << (char)palo;
    MoverCursor(x + 16, y + 7); cout << (char)palo;
    MoverCursor(x + 11, y + 8); cout << (char)palo;
    MoverCursor(x + 6, y + 10); cout << (char)palo;
    MoverCursor(x + 16, y + 10); cout << (char)palo;
}

void CartaNueve(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << 9;
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << 9;
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 6, y + 4); cout << (char)palo;
    MoverCursor(x + 11, y + 4); cout << (char)palo;
    MoverCursor(x + 16, y + 4); cout << (char)palo;
    MoverCursor(x + 6, y + 7); cout << (char)palo;
    MoverCursor(x + 11, y + 7); cout << (char)palo;
    MoverCursor(x + 16, y + 7); cout << (char)palo;
    MoverCursor(x + 6, y + 10); cout << (char)palo;
    MoverCursor(x + 11, y + 10); cout << (char)palo;
    MoverCursor(x + 16, y + 10); cout << (char)palo;
}

void CartaDiez(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << 10;
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 19, y + 13); cout << 10;
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 6, y + 4); cout << (char)palo;
    MoverCursor(x + 11, y + 4); cout << (char)palo;
    MoverCursor(x + 16, y + 4); cout << (char)palo;
    MoverCursor(x + 11, y + 6); cout << (char)palo;
    MoverCursor(x + 6, y + 7); cout << (char)palo;
    MoverCursor(x + 16, y + 7); cout << (char)palo;
    MoverCursor(x + 11, y + 8); cout << (char)palo;
    MoverCursor(x + 6, y + 10); cout << (char)palo;
    MoverCursor(x + 11, y + 10); cout << (char)palo;
    MoverCursor(x + 16, y + 10); cout << (char)palo;
}

void CartaJ(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << "J";
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << "J";
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 14, y + 4); cout << (char)palo;
    MoverCursor(x + 14, y + 5); cout << (char)palo;
    MoverCursor(x + 14, y + 6); cout << (char)palo;
    MoverCursor(x + 14, y + 7); cout << (char)palo;
    MoverCursor(x + 14, y + 8); cout << (char)palo;
    MoverCursor(x + 8, y + 9); cout << (char)palo;
    MoverCursor(x + 14, y + 9); cout << (char)palo;
    MoverCursor(x + 8, y + 10); cout << (char)palo;
    MoverCursor(x + 9, y + 10); cout << (char)palo;
    MoverCursor(x + 10, y + 10); cout << (char)palo;
    MoverCursor(x + 11, y + 10); cout << (char)palo;
    MoverCursor(x + 12, y + 10); cout << (char)palo;
    MoverCursor(x + 13, y + 10); cout << (char)palo;
    MoverCursor(x + 14, y + 10); cout << (char)palo;
}

void CartaQ(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << "Q";
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << "Q";
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 7, y + 4); cout << (char)palo;
    MoverCursor(x + 8, y + 4); cout << (char)palo;
    MoverCursor(x + 9, y + 4); cout << (char)palo;
    MoverCursor(x + 10, y + 4); cout << (char)palo;
    MoverCursor(x + 11, y + 4); cout << (char)palo;
    MoverCursor(x + 12, y + 4); cout << (char)palo;
    MoverCursor(x + 13, y + 4); cout << (char)palo;
    MoverCursor(x + 14, y + 4); cout << (char)palo;
    MoverCursor(x + 15, y + 4); cout << (char)palo;
    MoverCursor(x + 7, y + 5); cout << (char)palo;
    MoverCursor(x + 15, y + 5); cout << (char)palo;
    MoverCursor(x + 7, y + 6); cout << (char)palo;
    MoverCursor(x + 15, y + 6); cout << (char)palo;
    MoverCursor(x + 7, y + 7); cout << (char)palo;
    MoverCursor(x + 11, y + 7); cout << (char)palo;
    MoverCursor(x + 15, y + 7); cout << (char)palo;
    MoverCursor(x + 7, y + 8); cout << (char)palo;
    MoverCursor(x + 12, y + 8); cout << (char)palo;
    MoverCursor(x + 15, y + 8); cout << (char)palo;
    MoverCursor(x + 7, y + 9); cout << (char)palo;
    MoverCursor(x + 8, y + 9); cout << (char)palo;
    MoverCursor(x + 9, y + 9); cout << (char)palo;
    MoverCursor(x + 10, y + 9); cout << (char)palo;
    MoverCursor(x + 11, y + 9); cout << (char)palo;
    MoverCursor(x + 12, y + 9); cout << (char)palo;
    MoverCursor(x + 13, y + 9); cout << (char)palo;
    MoverCursor(x + 14, y + 9); cout << (char)palo;
    MoverCursor(x + 15, y + 9); cout << (char)palo;
    MoverCursor(x + 14, y + 10); cout << (char)palo;
}

void CartaK(int palo, int x, int y)
{
    MoverCursor(x + 2, y + 1); cout << "K";
    MoverCursor(x + 2, y + 2); wcout << (char)palo;
    MoverCursor(x + 20, y + 13); cout << "K";
    MoverCursor(x + 20, y + 12); cout << (char)palo;
    MoverCursor(x + 9, y + 4); cout << (char)palo;
    MoverCursor(x + 13, y + 4); cout << (char)palo;
    MoverCursor(x + 9, y + 5); cout << (char)palo;
    MoverCursor(x + 12, y + 5); cout << (char)palo;
    MoverCursor(x + 9, y + 6); cout << (char)palo;
    MoverCursor(x + 11, y + 6); cout << (char)palo;
    MoverCursor(x + 9, y + 7); cout << (char)palo;
    MoverCursor(x + 10, y + 7); cout << (char)palo;
    MoverCursor(x + 9, y + 8); cout << (char)palo;
    MoverCursor(x + 11, y + 8); cout << (char)palo;
    MoverCursor(x + 9, y + 9); cout << (char)palo;
    MoverCursor(x + 12, y + 9); cout << (char)palo;
    MoverCursor(x + 9, y + 10); cout << (char)palo;
    MoverCursor(x + 13, y + 10); cout << (char)palo;
}

void CartaTrasera(int x, int y)
{
    EstablecerColor(ROJO, ROJO);
    
    MarcoSimple(17, 13, x + 2, y + 1);
}