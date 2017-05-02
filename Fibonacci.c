/*! \brief Sucesión de Fibonacci. 
*
*   Con este código se creó un programa capaz de realizar la Sucesión de Fibonacci. 
*
*/

/* Se definen las librerias a utilizar */
#include <stdio.h>
#include <math.h>

/* Se definen las variables */ 
int a, b, c, i, N;

int main(void){

    /* Se introduce por parte del usuario el término N al que quiere que llegue la sucesión */
    printf("Sucesión de Fibonacci\n");
    printf("Introduzca el término N al cual quiere que llegue la sucesión:");
    scanf("%d", &N);

/* Se definen los dos primeros valores de la Sucesión de Fibonacci */
a = 0;
b = 1;

/* Implementación de la Sucesión de Fibonacci de forma iterativa */
for(i=0; i<=N-3; i++){
     c = a + b;
     a = b;
     b = c;
}
     /* Se imprime en pantalla el término N de la Sucesión de Fibonacci */
     printf("El término %d en la sucesión de Fibonacci es: %d\n", N, c);

return 0;
}
