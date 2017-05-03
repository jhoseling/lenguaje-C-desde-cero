#include <stdio.h>
#include <math.h>

 int main()
 {
 int a, b, i;
 float s;

 /* Pedir l´ýmites inferior y superior. */
 printf ("L´ýmite inferior:");
 scanf ("%d", &a);
 while (a < 0) {
 printf ("No puede ser negativo\n");
 printf ("L´ýmite inferior:");
 scanf ("%d", &a);
 }

 printf ("L´ýmite superior:");
 scanf ("%d", &b);
 while (b < a) {
 printf ("No puede ser menor que %d\n", a);
 printf ("L´ýmite superior:");
 scanf ("%d", &b);
 }

 /* Calcular el sumatorio de la ra´ýz cuadrada de i para i entre a y b. */
 s = 0.0;
 for (i = a; i <= b; i++) {
 s += sqrt(i);
 }
 /* Mostrar el resultado. */
 printf ("Sumatorio de ra´ýces ");
 printf ("de %d a %d: %f\n", a, b, s); 
 
 return 0;
 }
