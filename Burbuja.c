/*! \brief Método de la burbuja. 
*
*   En este código se realizó un programa capaz de implementar el Método de la burbuja, donde se le solicita al usuario ingresar la dimensión del vecto
*   r y los elementos de dicho vector para luego acomodarlos de forma descendente e imprimirlos en pantalla. 
*/


/* Se definen las librerias a utilizar */
#include <stdio.h>

/* Se definen las variables */
int i, j, N, n[100], aux;

int main(){

    /* Se le solicita al usuario ingresar la dimensión del vector */
    printf("Ingrese la dimensión del vector:");
    scanf("%d", &N);

    /* Se le solicita al usuario ingresar los valores de los elementos del vector */
    printf("Introduzca los valores %d de los elementos del vector:\n", N);

/* Se actualiza el vector con los valores de los elementos ingresados */
for(i=0; i<N; i++)
    
    scanf("%d", &n[i]);

/* Realización del método de la burbuja */
for(i=1; i<N; i++){

   for(j=0; j<N-i; j++){

      /* Ordenando en forma descendente */
      if(n[j]<n[j+1]){

         aux = n[j+1];
         n[j+1] = n[j];
         n[j] = aux;
        }
    }
}

   /* Se imprime en pantalla el vector en forma ascendente */
   printf("El vector ordenado en forma descendente es:\n");

for(i=0; i<N; i++){

    printf("%d\n", n[i]);

}

return 0;

}
