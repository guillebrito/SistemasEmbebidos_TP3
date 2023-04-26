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

#include <stdint.h>

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C"
{
#endif

    /* === Public macros definitions ============================================================*/

    /* === Public data type declarations ========================================================*/

    typedef struct alumno_s * alumno_t;

    /* === Public variable declarations =========================================================*/

    /* === Public function declarations =========================================================*/

    /**
     * @brief Función para crear alumnos.
     *
     * Esta función crea un nuevo alumno y lo almacena segun el tipo de memoria seleccionado al
     * compilar el proyecto.
     *
     * @param apellido Apeliido del nuevo alumno.
     * @param nombre Nombre del nuevo alumno.
     * @param documento Documento del nuevo alumno.
     * @return alumno_t Retorna el puntero al lugar de memoria donde se almacenan los datos.
     */
    alumno_t CrearAlumno(char * apellido, char * nombre, int documento);

    /**
     * @brief Función para serializar los datos de un alumno
     *
     * Esta función toma los datos del alumno y genera una cadena con su nombre, apellido y
     * documento en formato JSON.
     *
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
