// FECHA: 10/05/2013
// AUTOR:
// DESCRIPCIÓN:
// Muestra el funcionamiento de las sentencias repetitivas (0-n) y (1-n).
// y suma los contadores de las iteraciones (punto 2 de la practica)
// pide un numero en cada iteracion y lo va sumando al acumulado (punto 3) 
//
// ENTRADAS: número de repeticiones (enteros). Numeros introducidos (enteros).
// SALIDAS: texto indicando el número de la iteración. Suma de contadores. 
// Suma de los numeros introducidos.

#include <iostream>
#include <stdlib.h>
using namespace std;

// PROGRAMA PRINCIPAL
int main()
{
  int repe,i,contador,numero,acumulado;

// EJEMPLO DE SENTENCIA REPETITIVA 1-N

  i=0;
  contador=0;
  acumulado=0;

   cout <<"¿cuántas veces quieres repetir el bucle 1-n ?:";
   cin >> repe;

   do{
      cout <<"ESTAMOS EN LA REPETICION :" << i + 1 << endl ;
      contador += i + 1; 
      cout <<"LA SUMA DE LOS CONTADORES ES :" << contador << endl ;
      cout << "Introduce un numero entero: " << endl;
      cin >> numero;
      acumulado += numero;
      //system("PAUSE");
      i++;
 
   } while (i < repe);
   cout << "La suma de los numeros introducidos es: " << acumulado << endl;

// EJEMPLO DE SENTENCIA REPETITIVA 0-N

   i=0;
   contador=0;
   acumulado=0;   

   cout <<"¿cuántas veces quieres repetir el bucle 0-n ?:";
   cin >> repe;

   while (i < repe) {
      cout <<"ESTAMOS EN LA REPETICION :" << i + 1 << endl ;
      //system("PAUSE");
      contador += i + 1; 
      cout <<"LA SUMA DE LOS CONTADORES ES :" << contador << endl ;
      cout << "Introduce un numero entero: " << endl;
      cin >> numero;
      acumulado += numero;
      i++;
   }

   cout << "La suma de los numeros introducidos es: " << acumulado << endl; 
   

// FIN
   cout <<"!! ADIOS !!" << endl ;
   // system("PAUSE");

   return 0;
}

