#ifndef CAPTURA_HPP
#define CAPTURA_HPP

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Verifica que el tipo de dato ingresado sea el correcto.
 *
 * \return Devuelve el tipo de dato ingresado si este es correcto.
 */
char RespuestaSegura();

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Verifica que la longitud dada sea del tipo correcto y que sea mayor o igual a 0.
 *
 * \return Devuelve la longitud si esta fue del tipo correcto.
 */
int LongitudSegura();

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Cumple con la misma funcion que LongitudSegura() y además tiene un tope máximo.
 *
 * \param max Es el máximo que puede ser ingresado a la longitud.
 * 
 * \return Devuelve la longitud si esta fue del tipo correcto.
 */
int LongitudSegura(int max);

//-------------------------------------------------------------------------------------------------------------------------
/** \brief Cumple con la misma funcion que LongitudSegura() y además tiene un tope mínimo y máximo.
 *
 * \param min Es el mínimo que puede ser ingresado a la longitud.
 * \param max Es el máximo que puede ser ingresado a la longitud.
 * 
 * \return Devuelve la longitud si esta fue del tipo correcto.
 */
int LongitudSegura(int min, int max);

#endif