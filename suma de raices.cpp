#include <stdio.h>
#include <math.h>

 int main()
 {
 int a, b, i;
 float s;

 /* Pedir l��mites inferior y superior. */
 printf ("L��mite inferior:");
 scanf ("%d", &a);
 while (a < 0) {
 printf ("No puede ser negativo\n");
 printf ("L��mite inferior:");
 scanf ("%d", &a);
 }

 printf ("L��mite superior:");
 scanf ("%d", &b);
 while (b < a) {
 printf ("No puede ser menor que %d\n", a);
 printf ("L��mite superior:");
 scanf ("%d", &b);
 }

 /* Calcular el sumatorio de la ra��z cuadrada de i para i entre a y b. */
 s = 0.0;
 for (i = a; i <= b; i++) {
 s += sqrt(i);
 }
 /* Mostrar el resultado. */
 printf ("Sumatorio de ra��ces ");
 printf ("de %d a %d: %f\n", a, b, s); 
 
 return 0;
 }
