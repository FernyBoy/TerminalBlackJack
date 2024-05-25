#include <iostream>
#include <limits>

using namespace std;

char RespuestaSegura()
{
    int dato;
    cin >> dato;

    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        cout << "Ingresa una cantidad v\240lida.\n - ";
        cin >> dato;
    }

    return dato;
}

int LongitudSegura()
{
    int longitud;
    cin >> longitud;

    while(cin.fail() || longitud < 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        cout << "\nIngresa un valor v\240lido mayor a 0.\n - ";
        cin >> longitud;
    }

    return longitud;
}

int LongitudSegura(int max)
{
    int longitud;
    cin >> longitud;

    while(cin.fail() || longitud < 0 || longitud > max)
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        if(longitud > max)
        {
            cout << "\nLa respuesta no puede ser mayor a " << max << ".";
            cout << "\nIngresa de nuevo tu respuesta.\n - ";
        }
        else
        {
            cout << "\nIngresa un valor v\240lido mayor a 0.\n - ";
        }
        cin >> longitud;
    }

    return longitud;
}

int LongitudSegura(int min, int max)
{
    int longitud;
    cin >> longitud;

    while(cin.fail() || longitud < 0 || longitud < min || longitud > max)
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        if(longitud < min)
        {
            cout << "\nLa respuesta no puede ser menor a " << min << ".";
            cout << "\nIngresa de nuevo tu respuesta.\n - ";
        }
        else if(longitud > max)
        {
            cout << "\nLa respuesta no puede ser mayor a " << max << ".";
            cout << "\nIngresa de nuevo tu respuesta.\n - ";
        }
        else
        {
            cout << "\nIngresa un valor v\240lido mayor a 0.\n - ";
        }
        cin >> longitud;
    }

    return longitud;
}