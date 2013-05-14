// FECHA:
// AUTOR:
// DESCRIPCIÓN:
// Calcula el área de una circunferencia
// ENTRADAS: r (radio). Deben ser positivas.
// SALIDAS: área.

#include <iostream>
#include <cstdlib>

#define PI 3.14159265359

using namespace std;
int main()
{
  float r; // entrada: r, radio de la circunferencia
  float area; // área de la circunferencia
  cout <<"Introduce el valor del radio (valor positivo):";
  cin >> r;
  area = PI * r * r;
  cout << "El área de la circunferencia de radio " << r << " es " << area << endl ;
  // system("PAUSE"); Esto solo funcionara en Windows
  return 0;
}
