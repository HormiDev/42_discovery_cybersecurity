/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:13:17 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/04/24 20:24:21 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
	int j;

    if(argc < 3) {
        printf("Por favor, introduce al menos dos argumentos.\n");
        return 1;
    }

	i = 1;
	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
    i = 1;
    while(i < argc)
	{
        j = 1;
        while(j < argc) {
            printf("%s%s\n", argv[i], argv[j]);
            j++;
        }
        i++;
    }
    return 0;
}
/**********************************DESCRIPCION**********************************
Este programa en C realiza las siguientes operaciones:

1. Verifica la cantidad de argumentos: El programa primero verifica si se han 
proporcionado al menos dos argumentos. Si no es así, imprime un mensaje de 
error y termina.

2. Imprime los argumentos: Luego, el programa recorre cada argumento 
proporcionado (excluyendo el nombre del programa en sí) e imprime cada uno en 
una línea separada.

3. Concatena y muestra los argumentos: Finalmente, el programa concatena 
cada par de argumentos y los imprime. Esto se hace para cada argumento con 
todos los demás, incluyéndose a sí mismo.

Por lo tanto, si ejecutas el programa con los argumentos “Hola” y “Mundo”, la 
salida sería:

Hola
Mundo
HolaHola
HolaMundo
MundoHola
MundoMundo

Espero que esto te ayude a entender mejor lo que hace el programa. ¡Déjame 
saber si tienes más preguntas! 😊
*******************************************************************************/