/************************************************************************************************
Copyright (c) 2023, Guillermo Nicolás Brito <Guillermonbrito@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

#ifndef ALUMNO_H
#define ALUMNO_H

/** \brief Declaraciones publicas del módulo de alumnos
 **
 ** \addtogroup alumno Alumnos
 ** \brief Módulo para gestión de alumnos
 ** @{ */

/* === Headers files inclusions ================================================================ */

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C"
{
#endif

    /* === Public macros definitions ============================================================*/

#include <stdint.h>

/**
 * @brief tamaño de los campos de texto
 *
 * Este parametro define el tamaño de los campos de texto de la estructura @ref alumno_s
 */
#define FIELD_SIZE 50

    /* === Public data type declarations ========================================================*/

    /**
     * @brief Declaración de un tipo de datos struct para almacenar los datos de un alumno
     *
     *Esto declara un tipo de dato @b alumno_t con la forma del struct @ref alumno_s
     */
    typedef struct alumno_s
    {
        char apellido[FIELD_SIZE]; //!< Almacena el apellido del alumno en una cadena
        char nombre[FIELD_SIZE];   //!< Almacena el nombre del alumno en una cadena
        uint32_t documento;        //!< Almacena el documento del alumno en una entero de 32 bit
    } const * alumno_t;

    /* === Public variable declarations =========================================================*/

    /* === Public function declarations =========================================================*/

    /**
     * @brief Función para serializar los datos de un alumno
     * @param alumno Puntero a la estructura con los datos del alumno
     * @param cadena Puntero a la cadena generada
     * @param espacio Espacio disponible en la cadena generada
     * @return int Retorna tamaño de la cadena generada, en caso de espacio insuficiente retorna -1
     */
    int Serializar(alumno_t alumno, char cadena[], uint32_t espacio);

    /* === End of documentation =================================================================*/

#ifdef __cplusplus
}
#endif

/** @} End of module definition for doxygen */

#endif /* ALUMNO_H */
