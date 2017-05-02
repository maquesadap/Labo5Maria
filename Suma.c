/*! \brief  Suma de dos números. 
*    
*  En este código se realizó un programa capaz de sumar dos números, los cuales son ingres*  ados por el usuario y donde la suma es impresa en pantalla.  
*
*/

/* Se definen las librerias que se ocuparán */
#include <stdio.h>
#include <math.h>

/*   */
int main(void){

    /* Se definen las variables */
    int a, b, c;

    /* Se imprimen los valores de las variables ingresadas */
    printf("Introduzca el valor de a: ");
    scanf("%d", &a);
    printf("Introduzca el valor de b: ");
    scanf("%d", &b);

/* Se suman las variables */
 c = a + b;

    /* Se imprime la suma de las variables */
    printf("La suma es: %d \n", c);

return 0;
}
