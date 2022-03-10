#include<stdio.h>
 int producto (int a, int b);
int main (){

   int numero1;
   int numero2;

     printf ("ingrese el primer numero: ");
     scanf ("%d", &numero1);

     printf ("ingrese el segundo numero: ");
     scanf ("%d", &numero2);

     int productoDeDosNumeros= producto (numero1,numero2);

     printf("el producto de 2 numeros ingresados es de  %d: ", productoDeDosNumeros);
     return 0;
}
  int producto (int a, int b){
     int producto= a*b;
     return producto;
  }
