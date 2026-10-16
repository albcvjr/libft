*Este proyecto ha sido creado como parte del currículo de 42 por acuevas.*

# Libft

## Descripción

Libft es el primer proyecto del cursus de 42. Su objetivo es desarrollar una biblioteca propia de funciones en C, reproduciendo parte de las funcionalidades de la biblioteca estándar y creando herramientas adicionales que puedan reutilizarse en futuros proyectos.

El proyecto consiste en comprender el comportamiento de las funciones originales e implementar versiones propias que respeten las especificaciones y restricciones establecidas en el subject.

Durante su desarrollo se trabajan conceptos fundamentales de C, como la manipulación de cadenas de caracteres, los punteros, la gestión de memoria dinámica y las estructuras de datos enlazadas.

El resultado es una biblioteca estática llamada `libft.a`, que reúne las funciones implementadas y permite utilizarlas en otros programas sin tener que escribirlas de nuevo.

Libft también constituye una base para los siguientes proyectos del cursus, donde comprender el funcionamiento de la memoria y las estructuras de datos resulta especialmente importante.

## Instrucciones

### Requisitos

Para compilar la biblioteca se necesita:

- Un compilador de C compatible con las opciones utilizadas.
- GNU Make.
- El archivo de cabecera `libft.h`, que contiene las declaraciones de las funciones de la biblioteca.

### Compilación

Clona el repositorio y accede al directorio del proyecto:

```bash
git clone git@github.com:albcvjr/libft.git
cd libft
```

Para compilar la biblioteca, ejecuta:

```bash
make
```

Esto genera el archivo estático `libft.a`, que contiene las funciones compiladas.

### Comandos disponibles

El proyecto incluye un Makefile para automatizar la compilación y la limpieza de los archivos generados.

| Comando 	   | Descripción 													  |
|--------------|------------------------------------------------------------------|
| `make`       | Compila la biblioteca y genera `libft.a`. 						  |
| `make clean` | Elimina los archivos objeto (`.o`). 							  |
| `make fclean`| Elimina los archivos objeto y la biblioteca compilada. 		  |
| `make re`    | Limpia los archivos generados y vuelve a compilar la biblioteca. |

### Uso de la biblioteca

Para utilizar Libft en otro programa, hay que incluir su archivo de cabecera y enlazar la biblioteca durante la compilación.

Por ejemplo, para un archivo `main.c`:

```c
#include "libft.h"
#include <stdlib.h>

int main(void)
{
    char *str;

    str = ft_strdup("Hola, 42!");
    if (str == NULL)
        return (1);
    ft_putstr_fd(str, 1);
    ft_putchar_fd('\n', 1);
    free(str);
    return (0);
}
```

En este ejemplo, `ft_strdup` crea una copia de la cadena, mientras que `ft_putstr_fd` y `ft_putchar_fd` permiten mostrarla por pantalla. Finalmente, `free` libera la memoria reservada.

Para compilar el programa desde la raíz del proyecto:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -I. -o test
```

Para ejecutar el programa:

```bash
./test
```

El ejemplo presupone que las funciones utilizadas están implementadas y compiladas en `libft.a`.

## Funciones de la biblioteca

Las funciones se organizan en diferentes categorías según su finalidad.

### 1. Comprobación y conversión de caracteres

Estas funciones permiten comprobar si un carácter pertenece a una categoría determinada o convertirlo a mayúscula o minúscula.

| Función 	   | Descripción 												|
|--------------|------------------------------------------------------------|
| `ft_isalpha` | Comprueba si un carácter es una letra del alfabeto inglés. |
| `ft_isdigit` | Comprueba si un carácter es un dígito decimal.             |
| `ft_isalnum` | Comprueba si un carácter es alfanumérico. 					|
| `ft_isascii` | Comprueba si un valor pertenece al conjunto ASCII. 		|
| `ft_isprint` | Comprueba si un carácter es imprimible. 					|
| `ft_toupper` | Convierte una letra minúscula a mayúscula. 				|
| `ft_tolower` | Convierte una letra mayúscula a minúscula. 				|

### 2. Manipulación de cadenas

Estas funciones permiten calcular longitudes, copiar, concatenar, buscar y comparar cadenas de caracteres.

| Función     | Descripción															 |
|-------------|----------------------------------------------------------------------|
| `ft_strlen` | Calcula la longitud de una cadena, sin contar el terminador nulo. 	 |
| `ft_strlcpy`| Copia una cadena en un destino respetando el tamaño máximo indicado. |
| `ft_strlcat`| Concatena cadenas respetando el tamaño total del destino. 			 |
| `ft_strchr` | Busca la primera aparición de un carácter en una cadena. 			 |
| `ft_strrchr`| Busca la última aparición de un carácter en una cadena. 			 |
| `ft_strncmp`| Compara dos cadenas hasta un número máximo de caracteres. 			 |
| `ft_strnstr`| Busca una subcadena dentro de otra, limitando la búsqueda. 			 |
| `ft_strdup` | Reserva memoria y crea una copia de una cadena. 					 |

### 3. Manipulación de memoria

Estas funciones trabajan directamente con bloques de memoria y bytes, independientemente de que contengan cadenas de caracteres.

| Función     | Descripción 																	  |
|-------------|-----------------------------------------------------------------------------------|
| `ft_memset` | Rellena un bloque de memoria con un valor determinado. 							  |
| `ft_bzero`  | Establece a cero los bytes de un bloque de memoria. 							  |
| `ft_memcpy` | Copia un número determinado de bytes entre regiones de memoria que no se solapan. |
| `ft_memmove`| Copia bloques de memoria incluso cuando las regiones se solapan. 				  |
| `ft_memchr` | Busca la primera aparición de un byte dentro de un bloque de memoria.   		  |
| `ft_memcmp` | Compara dos bloques de memoria byte a byte. 									  |
| `ft_calloc` | Reserva memoria para varios elementos e inicializa sus bytes a cero. 			  |

### 4. Conversión numérica

Estas funciones permiten convertir entre representaciones textuales y valores numéricos.

| Función   | Descripción 																  |
|-----------|-----------------------------------------------------------------------------|
| `ft_atoi` | Convierte la representación textual de un entero en un valor de tipo `int`. |
| `ft_itoa` | Convierte un entero en una cadena de caracteres. 							  |

### 5. Creación y transformación de cadenas

Estas funciones permiten generar nuevas cadenas o aplicar operaciones a los caracteres de una cadena existente.

| Función      | Descripción 																	  |
|--------------|----------------------------------------------------------------------------------|
| `ft_substr`  | Crea una subcadena a partir de una posición y una longitud determinadas. 		  |
| `ft_strjoin` | Crea una nueva cadena concatenando dos cadenas existentes. 					  |
| `ft_strtrim` | Crea una copia de una cadena eliminando determinados caracteres de sus extremos. |
| `ft_split`   | Divide una cadena en varias subcadenas utilizando un separador. 				  |
| `ft_strmapi` | Crea una nueva cadena aplicando una función a cada carácter y su índice. 		  |
| `ft_striteri`| Aplica una función a cada carácter, proporcionando su índice y su dirección. 	  |

### 6. Escritura mediante descriptores de archivo

Estas funciones permiten escribir caracteres, cadenas y números en un descriptor de archivo determinado.

| Función        | Descripción 											 |
|----------------|-------------------------------------------------------|
| `ft_putchar_fd`| Escribe un carácter en un descriptor de archivo. 	 |
| `ft_putstr_fd` | Escribe una cadena en un descriptor de archivo. 		 |
| `ft_putendl_fd`| Escribe una cadena seguida de un salto de línea. 	 |
| `ft_putnbr_fd` | Escribe un número entero en un descriptor de archivo. |

### 7. Listas enlazadas

La biblioteca incluye funciones para crear, recorrer, modificar y liberar listas enlazadas mediante la estructura `t_list`.

Cada nodo contiene un puntero a su contenido y otro al siguiente nodo. Esta estructura permite organizar datos dinámicamente y trabajar con colecciones cuyo tamaño puede variar durante la ejecución.

| Función		   | Descripción																		 |
|------------------|-------------------------------------------------------------------------------------|
| `ft_lstnew`      | Crea un nuevo nodo con el contenido indicado. 										 |
| `ft_lstadd_front`| Añade un nodo al principio de una lista. 											 |
| `ft_lstsize`     | Cuenta los nodos de una lista. 													 |
| `ft_lstlast`     | Devuelve el último nodo de una lista. 												 |
| `ft_lstadd_back` | Añade un nodo al final de una lista. 												 |
| `ft_lstdelone`   | Elimina un nodo y libera su contenido mediante una función de borrado. 			 |
| `ft_lstclear`    | Elimina una lista completa y libera sus contenidos mediante una función de borrado. |
| `ft_lstiter`     | Aplica una función al contenido de cada nodo. 										 |
| `ft_lstmap`      | Crea una nueva lista aplicando una función al contenido de cada nodo. 				 |

La implementación de estas funciones requiere comprender los punteros, la gestión de memoria dinámica y las relaciones entre los nodos de una lista.

## Recursos

### Documentación y referencias

Durante el desarrollo del proyecto se pueden consultar las siguientes fuentes:

- **Subject de Libft de 42:** documento de referencia para conocer los requisitos, las funciones solicitadas y las restricciones del proyecto.
- **Man pages de Linux:** documentación de las funciones de C. Por ejemplo, `man 3 strlen`, `man 3 memcpy` o `man 3 atoi`.
- **cppreference:** referencia del lenguaje C y su biblioteca estándar. [https://en.cppreference.com/w/c](https://en.cppreference.com/w/c)
- **Documentación de GCC:** información sobre el compilador y sus opciones. [https://gcc.gnu.org/onlinedocs/](https://gcc.gnu.org/onlinedocs/)
- **GNU Make Manual:** documentación sobre la automatización de la compilación. [https://www.gnu.org/software/make/manual/](https://www.gnu.org/software/make/manual/)

Estas fuentes permiten consultar las especificaciones de las funciones, comprender sus parámetros y valores de retorno y contrastar las implementaciones propias.

### Uso de inteligencia artificial

Se ha utilizado ChatGPT y Gemini como herramientas de apoyo durante el aprendizaje y desarrollo del proyecto.

Su utilización se ha centrado en:

- Aclarar conceptos de C, especialmente punteros, cadenas, índices y gestión de memoria.
- Comprender el comportamiento esperado de las funciones de la biblioteca estándar.
- Resolver dudas relacionadas con errores de compilación y funcionamiento del código.
- Preparar casos de prueba y pequeños programas `main` para comprobar las implementaciones.
- Comprender el funcionamiento del Makefile y las herramientas de compilación.
- Organizar y revisar la documentación del proyecto.

La IA se ha utilizado como apoyo didáctico para estudiar los conceptos y analizar las implementaciones. El objetivo ha sido comprender el código y desarrollar progresivamente la capacidad de implementar y comprobar las funciones de forma autónoma.

## Autor

**acuevas**

Estudiante del cursus de 42 Madrid.