/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutaciones.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:42:30 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/21 11:23:31 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void Permutaciones(char cadena[])
{
 int i=0, contador=1;
 int c[LONGITUD-1] = {0};
 char aux;

 printf("%d: %s\n", contador, cadena);
 while (i < LONGITUD-1)
       {
        if (c[i] < i)
           {
            if (i%2 == 0)
               {
                aux = cadena[0];
                cadena[0] = cadena[i];
                cadena[i] = aux;
               }
            else
                {
                 aux = cadena[c[i]];
                 cadena[c[i]] = cadena[i];
                 cadena[i] = aux;
                }

            ++contador;
            printf("%d: %s\n", contador, cadena);
            c[i] += 1;
            i = 0;
           }
        else
            {
             c[i] = 0;
             ++i;
            }
       }
}

int main()
{
 char texto[LONGITUD] = {"aeiou"};
 texto[LONGITUD-1]='\0';

 Permutaciones(texto);
 printf("\n");

 return 0;
}
