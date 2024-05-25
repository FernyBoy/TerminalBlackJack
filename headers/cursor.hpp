#ifndef CURSOR_HPP
#define CURSOR_HPP

//-------------------------------------------------------------------------------------------------------------------------
/** Posibles estados del cursor */
enum EstadoCursor
{
	APAGADO,    /**< Cursor no visible */
	ENCENDIDO   /**< Cursor visible */
};

//-------------------------------------------------------------------------------------------------------------------------
/** Modos o tama&ntilde;os del cursor */
enum ModoCursor
{
	MINI = 1,       /**< Tama&ntilde;o de cursor peque&ntilde;o */
	NORMAL = 40,    /**< Tama&ntilde;o de cursor mediano  */
	SOLIDO = 80     /**< Tama&ntilde;o de cursor grande */
};

//-------------------------------------------------------------------------------------------------------------------------
/**
 * \brief Mueve el cursor en la ventana de despliegue a la posición indicada
 * \details Las posiciones de la ventana de despliegue inician con (0,0) en la esquina superior izquierda. Podría decirse que la posición \b x
 * indica la columna de la ventana y la posición \b y indica el renglón, ambas iniciando en cero.
 *
 * \param x Posición horizontal a donde se moverá el cursor. El cursor se mueve \b x unidades a la derecha a partir del inicio de la ventana.
 * \param y Posición vertical a donde se moverá el cursor. El cursor se mueve \b y unidades hacia abajo a partir del inicio de la ventana.
 *
 * \return Nada
 *
 * \pre Las posiciones (x,y) deben ser no negativas. La posici&oacute;n m&iacute;nima es cero.
 * \warning Si alguna posición se sale de los límites de la ventana de despliegue, el cursor no se moverá.
 */
void MoverCursor(short x, short y);

//-------------------------------------------------------------------------------------------------------------------------
/**
 * \brief Modifica el estado del cursor.
 *
 * \param estado Estado del cursor a establecer. Puede ser un valor de la enumeraci&oacute;n EstadoCursor
 * \param modo Tama&ntilde;o del indicador del cursor. Puede ser un valor de la enumeraci&oacute;n ModoCursor. Si se omite, tomar&aacute; el valor NORMAL.
 **/
void CambiarCursor(EstadoCursor estado, ModoCursor modo = NORMAL);

#endif