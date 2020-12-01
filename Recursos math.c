#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
   
   //raiz cuadrada
   double a = 13.0;
   double b = 30;
   double c = 4.0;
    
   printf ("%.5f\n", sqrt(sqrt(a)+b)+ sqrt(c)) ;
   
   //función exponencial e* 
   double d = 1.0;
   double e = 6.0;
   double f = 7.8;
   printf("%.4f\n", exp(d+e+f));
   
   //logaritmo natural de x(de base e) 
   double g = 40.1;
   double h = 50.2;
   double i = 75.9;
   printf("%.7f\n", log(log(g)+i)*log(h));
   
   //logaritmo de x (de base 10)
   double j = 19.80;
   double k = 19.85;
   double l = 19.90;
   printf("%.9f\n", log10(j+k)+log10(l));
   
   //valor absoluto de x
   double m = 20.1;
   double n = 22.1;
   double ñ = 2.3;
   printf("%.2f\n", fabs(m+n)*ñ);
   
   //redondea a x al entero más pequeño que no sea menor que x
   double o = 52.3;
   double p = 89.9;
   double q = 75.3;
   printf("%.3f\n", ceil((o+p)/q));
   //redondea a x al entero más grande no mayor que x
   double r = 37.1;
   double s = 82.1;     
   double t = 51.9;
   printf("%.4f\n",floor((r+s)*t));
   //x elevado a la potencia y (x^)
   int u = 2.0;
   int v = 4.0;
   printf("%.1f\n",pow(u,v));
   
   //residuo de xfy como un número de punto flotante
   double w = 13.657;
   double x = 2.333;
   printf("%.3f\n",fmod(w,x));
   
   //seno trigonométrico de x( x en radianes)
    int y = 90;
    printf("%.9f\n",sin(y));
   
   //coseno trigonométrico de x( x en radianes)
    int z = 0;
    printf("%.9f\n",cos(z));         
   //tangente trigonométrica de x( x en radianes)        
    int rko = 45;
    printf("%.9f\n",tan(rko));
   
    
   
   
   
   
   
   
   
   
            
   
    return(0);
}


