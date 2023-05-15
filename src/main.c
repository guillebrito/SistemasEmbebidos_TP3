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

/** \brief Tercer trabajo práctico
 ** \addtogroup tp3 TPN3
 ** \brief Este programa toma los datos de un alumno y los muestra por consola en un formato Json
 ** @{ */

/* === Headers files inclusions =============================================================== */

#include "alumno.h"
#include <stdio.h>

/* === Macros definitions ===================================================================== */

/* === Private data type declarations ========================================================= */

/* === Private variable declarations ========================================================== */

/* === Private function declarations ========================================================== */

/* === Public variable definitions ============================================================ */

/* === Private variable definitions =========================================================== */

/* === Private function implementation ======================================================== */

/* === Public function implementation ========================================================= */

/**
 * @brief Función principal del programa.
 *
 * Crea un nuevo alumno, luego implementa la funcion @ref Serializar y muestra la cadena generada,
 * muestra un mensaje de error en caso de haberlo.
 */
int main(void)
{
    char cadena[128];
    alumno_t yo = CrearAlumno("Brito", "Guillermo Nicolás", 39141889);

    if (Serializar(yo, cadena, sizeof(cadena)) >= 0)
    {
        printf("%s\n", cadena);
    }
    else
    {
        printf("Error al serializar\n");
    }
    return 0;
}
/* === End of documentation =================================================================== */
// sasd
/** @} End of module definition for doxygen */