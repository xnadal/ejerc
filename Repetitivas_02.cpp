// FECHA: 10/05/2013
// AUTOR:
// DESCRIPCIÓN:
// Muestra el funcionamiento de las sentencias repetitivas (0-n) y (1-n).
// 
// ENTRADAS: número de repeticiones (enteros).
// SALIDAS: texto indicando el número de la iteración.

#include <iostream>
#include <stdlib.h>
using namespace std;

// PROGRAMA PRINCIPAL
int main()
{
   int repe,i;

// EJEMPLO DE SENTENCIA REPETITIVA 1-N

   i=0;
   cout <<"¿cuántas veces quieres repetir el bucle 1-n ?:";
   cin >> repe;

   do{
      cout <<"ESTAMOS EN LA REPETICION :" << i + 1 << endl ;
      //system("PAUSE");
      i = i + 1;
   } while (i < repe);

// EJEMPLO DE SENTENCIA REPETITIVA 0-N

   i=0;
   cout <<"¿cuántas veces quieres repetir el bucle 0-n ?:";
   cin >> repe;

   while (i < repe) {
      cout <<"ESTAMOS EN LA REPETICION :" << i + 1 << endl ;
      //system("PAUSE");
      i = i + 1;
   }

   cout <<"!! ADIOS !!" << endl ;
   // system("PAUSE");

   return 0;
}

