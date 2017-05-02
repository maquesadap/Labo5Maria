/*! \brief Solución de una ecuación cuadrática de la forma: a(x^2)+bx+c=0. 
*  
*  En este código se realizó un programa capaz de solucionar una ecuación cuadrática, dond
*  e el usuario ingresa los coeficientes de la ecuación y se imprime el pantalla la soluci
*  ón de la ecuación.
*/


/* Se definen las librerías necesarias */
#include <stdio.h>
#include <math.h>

int main(){
	
        /* Se definen las variables */
	float a, b, c, disc, raiz1, raiz2, real, imag, r, r1;
	
        /* Se le solicita al usuario ingresar los coeficientes */
	printf("Solución de una ecuación cuadrática: a(x^2)+bx+c=0\n");
	printf("Introduzca el coeficiente a: ");
	scanf("%f", &a);
	printf("Introduzca el coeficiente b: ");
	scanf("%f", &b);
	printf("Introduzca el coeficiente c: ");
	scanf("%f", &c);

/* Se calcula el discriminante */
disc = (b*b) - 4*a*c;
/* Se calcula la raíz del discriminante */
r = sqrt(disc);
r1 = sqrt(-disc); 
/* Solución para dos raíces reales distintas */
if (disc>0){
	printf("Existen dos raíces reales diferentes:\n");
	raiz1=((-b-r)/(2*a));
	raiz2=((-b+r)/(2*a));
	printf("Las raíces reales son: \nraiz1=%.2f \nraiz2=%f\n", raiz1, raiz2);
}
else{
/* Solución para dos raíces reales iguales */
if(disc==0){
	printf("Existen dos raíces reales iguales:\n");
	real=(-b/2*a);
	printf("La raíz real es: %.2f\n", real);
}
else{
        /* Solución de dos raíces complejas */
        printf("Existe una solución compleja:\n");
	real=((-b)/(2*a));
	imag=((r1)/(2*a));
	printf("La raíz compleja real es: %f \nLa raíz compleja imaginaria es: %f \n", real, imag);
}
}

return 0;
}
