#include <windows.h>

#ifndef COLORES_HPP
#define COLORES_HPP

//-------------------------------------------------------------------------------------------------------------------------
/** Colores de texto y fondo de la ventana de despliegue */
enum Color
{
    NEGRO,          /**< Color negro */
    AZUL,           /**< Color azul fuerte */
    VERDE,          /**< Color verde oscuro */
    AGUAMARINA,     /**< Color azul verde */
    ROJO,           /**< Color rojo oscuro */
    PURPURA,        /**< Color morado */
    AMARILLO,       /**< Color amarillo */
    GRISCLARO,      /**< Color gris claro */
    GRIS,           /**< Color gris oscuro */
    AZULCLARO,      /**< Color azul cielo */
    VERDECLARO,     /**< Color verde claro */
    AGUAMARINACLARO,/**< Color azul verde claro */
    ROJOCLARO,      /**< Color rojo claro */
    MAGENTA,        /**< Color rosa fuerte */
    AMARILLOCLARO,  /**< Color amarillo claro */
    BLANCO          /**< Color blanco */
};

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Establece el color de fondo y texto para impresi&oacute;n. Despu&eacute;s de establecer el color, lo que se imprima aparecer&aacute; con esta combinaci&oacute;n de colores.
 *
 * \param colorEst El color a establecer. Es una combinaci&oacute;n del color de fondo y texto
 *
 * \pre El color a establecer debe ser no negativo y una combinaci&oacute;n del color de fondo y texto que se obtiene con la f&oacute;rmula:
 *		(Color de fondo)(16) + (Color de texto). El color del fondo y texto son valores de la enumeraci&oacute;n tipo Color.
 */
void EstablecerColor(WORD colorEst);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Establece el color de fondo y texto para impresi&oacute;n. Despu&eacute;s de establecer el color, lo que se imprima aparecer&aacute; con esta combinaci&oacute;n de colores.
 *
 * \param colorFondo El color de fondo del texto a imprimir
 * \param colorTexto Color del texto a imprimir
 *
 * \pre Tanto el color del fondo y del texto deben ser no negativos. Son valores de la enumeraci&oacute;n tipo Color.
 */
void EstablecerColor(Color colorFondo, Color colorTexto);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Obtiene el color de fondo y texto actual de la ventana de despliegue.
 *
 * \return Valor que combina el color de fondo y texto establecidos actualmente en la ventana de despliegue. Est&aacute; compuesto por: (Color de fondo)(16) + (Color de texto)
 *		   Para obtener los colores separados se divide en m&oacute;dulo el valor devuelto entre 16, este es el color de texto.
 * 		   Se divide entre 16 (divisi&oacute;n entera), este es el color de fondo.
 */
WORD ObtenerColorOriginal();

//-------------------------------------------------------------------------------------------------------------------------
/**
 * \brief Establece el tama&ntilde;o de la ventana de ejecuci&oacute;n.
 *
 * \param ancho Valor entero para el ancho de la ventana.
 * \param alto Valor entero para el alto de la ventana.
 **/
void EstablecerTamVentana(short ancho, short alto);

#endif