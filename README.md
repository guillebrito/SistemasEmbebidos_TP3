# Intrucciones para la compilación del programa
- Para compilar el proyecto implementando memoria **dinámica** se debe ejecutar el comando `make` por consola.
- Para compilar el proyecto implementando memoria **estática** se debe ejecutar el comando `make CFLAGS=-DSTATIC` por consola.
- Para correr el programa se debe ejecutar el comando `./build/bin/app.elf`
- Con el comando `make clean` se elimina la carpeta build.
- Con el comando `make docs` se genera la documentación.

Nota: Se recomienda eliminar la carpeta build con el comando `make clean` en el caso de querer cambiar el tipo de memoria de almacenamiento.

Autor: Brito, Guillermo Nicolás

Asignatura: Sistemas Embebidos

Carrera: Ing. Electrónica