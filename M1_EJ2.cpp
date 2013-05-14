// FECHA:
// AUTOR:
// DESCRIPCIÓN:
// Calcula el volumen de un prisma circular (cilindro)
// ENTRADAS: r (radio). h (altura). Deben ser positivas.
// SALIDAS: volumen.

#include <iostream>
#include <cstdlib>

#define PI 3.14159265359

using namespace std;
int main()
{
  float r; // entrada: r, radio de la circunferencia
  float h; // entrada: h, altura del cilindro
  float volumen; // volumen del cilindro
  cout <<"Introduce el valor del radio (valor positivo):";
  cin >> r;
  cout <<"Introduce el valor de la altura (valor positivo):";
  cin >> h;
  volumen = PI * r * r * h;
  cout << "El volumen del cilindro de radio " << r << " y altura " << h << " es " << volumen << endl ;
  // system("PAUSE"); Esto solo funcionara en Windows
  return 0;
}
