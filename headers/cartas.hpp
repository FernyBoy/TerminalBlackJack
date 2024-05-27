#ifndef CARTAS_HPP
#define CARTAS_HPP

//-------------------------------------------------------------------------------------------------------------------------
/** Respectivos palos para las cartas */
enum
{
    CORAZON = 3,
    DIAMANTE = 4,
    TREBOL = 5,
    PICAS = 6
};

//-------------------------------------------------------------------------------------------------------------------------
/** Ancho y alto predeterminados para todas las cartas */
enum
{
    ANCHO = 21,
    ALTO = 15
};

//-------------------------------------------------------------------------------------------------------------------------
/** Símbolos para dibujar un rectángulo o marco */
enum 
{
    ESP = 32,     /**< Espacio en blanco */
	BV = 179,     /**< Barra vertical */
	ESD = 191,    /**< Esquina superior derecha */
	EII,          /**< Esquina inferior izquierda */
	BH = 196,     /**< Barra horizontal */
	EID = 217,    /**< Esquina inferior derecha  */
	ESI           /**< Esquina superior izquierda */
};

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime un marco o rect&aacute;ngulo en pantalla con la dimensi&oacute;n dada y en la posici&oacute;n indicada
 *
 * \param ancho Ancho o base del rect&aacute;ngulo
 * \param alto Alto del rect&aacute;ngulo
 * \param x Posici&oacute;n en x donde se imprimir&aacute; el rect&aacute;ngulo
 * \param y Posici&oacute;n en y donde se imprimir&aacute; el rect&aacute;ngulo
 *
 * \pre El ancho y el alto deben ser por lo menos 2. Los valores para la posici&oacute;n (x,y) deben ser no negativos y corresponden
 *      a la posici&oacute;n de la esquina superior izquierda del rect&aacute;ngulo
*/
void MarcoSimple(unsigned ancho, unsigned alto, short x, short y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta dependiendo la denominaci\242n y de el palo proporcionados.
 *
 * \param denominacion El numero o letra de la carta a imprimir.
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 *
 * \return Nada.
 */
void ImprimirCarta(int denominacion, int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta As.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaA(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta dos.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaDos(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta tres.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaTres(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta cuatro.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaCuatro(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta cinco.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaCinco(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta seis.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaSeis(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta siete.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaSiete(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta ocho.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaOcho(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta nueve.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaNueve(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta diez.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaDiez(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta J.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaJ(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta Q.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaQ(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la carta K.
 *
 * \param palo Proporciona el palo que se le asignar\240 a la carta.
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaK(int palo, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Imprime la parte trasera de una carta.
 *
 * \param x Posici\242n horizontal utilizada para dibujar los palos en la carta.
 * \param y Posici\242n vertical utilizada para dibujar los palos en la carta.
 *
 * \return Nada.
 */
void CartaTrasera(int x, int y);

#endif