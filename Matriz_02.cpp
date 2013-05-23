// Matriz_02.cpp
// Modulo 2 Practica 2 
//
// Rellena los elementos de una matriz A de enteros y muestra su contenido.
// SE SUMAN LOS ELEMENTOS DE LA DIAGONAL A DERECHAS
// SE SUMAN LOS ELEMENTOS DE LA DIAGONAL A IZQUIERDAS
// SE SUMAN LOS ELEMENTOS QUE NO ESTAN EN LA DIAGONAL A DERECHAS
// ENTRADAS: elementos de la matriz (enteros).
// SALIDAS: contenido de la matriz, valores de suma de los elementos.
//
#include <iostream>
#include <stdlib.h>
#define filas 3
using namespace std;
// PROGRAMA PRINCIPAL
int main()
{
  int i,j,A[filas][filas];
  int suma_diag_der = 0;
  int suma_diag_izq = 0;
  int suma_no_diag_der = 0;
  // SE LLENA LA MATRIZ
  cout <<"Se deben introducir los elemento de una matriz de enteros de " << filas << " filas y " << filas << " columnas " << endl;
  for (i=0; i<filas;i++)
    {
      for (j=0; j<filas;j++)
	{
	  cout <<"Introduce el valor del elemento fila: " << i << " columna: " << j << " valor:" ;
	  cin >> A[i][j];
	}
    }
  // SE MUESTRA EL CONTENIDO DE LA MATRIZ Y SE CALCULAN LAS SUMAS AL RECORRERLA
  for (i=0; i<filas;i++)
    {
      cout <<"Los elementos de la fila: " << i << " son: ";

      suma_diag_der += A[i][i];
      suma_diag_izq += A[i][filas - i - 1];

      for (j=0; j<filas;j++)
	{
	  cout << A[i][j] << " " ;

	  if (i != j)  suma_no_diag_der += A[i][j];  
        }
      cout << endl;
    }
  //system("PAUSE");

  // Muestra los resultados

  cout << "La suma de la diagonal a derechas es: " << suma_diag_der << endl;
  cout << "La suma de la diagonal a izquierdas es: " << suma_diag_izq << endl;
  cout << "La suma los elementos que no estan en la diagonal derecha es: " << suma_no_diag_der << endl;

  return 0;
}

