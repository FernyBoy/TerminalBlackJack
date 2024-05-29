#ifndef BLACKJACK_HPP
#define BLACKJACK_HPP

const int maximoDeCartas = 21;
const int valores = 2;

int JugarBlackJack(int dinero);

int SeguirJugando();

void ReiniciarCartas(int **cartasJugador, int **cartasDealer);

int Apostar(int dinero);

void GenerarCartas(int **cartasJugador, int **cartasDealer);

int MovimientoJugador();

int CalcularPuntos(int cartasActuales, int **cartas);

void MostrarCartasJugador(int cartasActuales, int **manoJugador);

void MostrarCartasDealer(int cartasActuales, int **manoDealer);

void TotalDealer(int manoDealer);

void TotalJugador(int manoJugador);

int Empate(int dinero, int apuesta, int manoJugador, int manoDealer);

int Excedido(int manoJugador, int manoDealer, int dinero, int apuesta);

int FinalizarJuego(int dinero, int apuesta, int manoJugador, int manoDealer);


#endif