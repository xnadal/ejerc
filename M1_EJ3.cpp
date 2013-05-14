// FECHA:
// AUTOR:
// DESCRIPCIÓN:
// Calcula el volumen de un prisma rectangular (ortoedro)
// ENTRADAS: l (largo). w (ancho). h (alto). Deben ser positivas.
// SALIDAS: volumen.

#include <iostream>
#include <cstdlib>

// #define PI 3.14159265359

using namespace std;
int main()
{
  float l; // entrada: l largo
  float w; // entrada: w ancho
  float h; // entrada: h alto
  float volumen; // volumen del ortoedro
  cout <<"Introduce el valor del largo (valor positivo):";
  cin >> l;
  cout <<"Introduce el valor del ancho (valor positivo):";
  cin >> w;
  cout <<"Introduce el valor del alto (valor positivo):";
  cin >> h;
  volumen = l * w * h;
  cout << "El volumen del ortoedro de largo " << l << " ancho " << w << " y alto " << h << " es " << volumen << endl ;
  // system("PAUSE"); Esto solo funcionara en Windows
  return 0;
}
