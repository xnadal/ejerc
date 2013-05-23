// M2_EJ1.cpp
// Aunque en la practica dice que deberia llamarse M1_EJ2.cpp 
// pero ese nombre ya lo utilizamos en el M1
//
#include <iostream>
#include <stdlib.h>
#include "areas.h"
using namespace std;
// PROTOTIPO FUNCION: presenta el menú y retorna la opción
int Menu (void);
// PROGRAMA PRINCIPAL
int main()
{
    float r; // entrada: r, radio de la circunferencia
    float lad1,lad2,bas,alt; // lados, base y altura
    float area; // área
    int opcion;
    do {
    opcion = Menu();
    switch (opcion)
    {
    case 0:
        cout << "Adios" << endl;
        break; 
    case 1:
        cout <<"Introduce el valor del radio (valor positivo):";
        cin >> r;
        area = Area_circulo(r);
        cout << "El área de la circunferencia de radio " << r << " es " << area << endl ;
	// system("PAUSE");
        break;
    case 2:
        cout <<"Introduce el valor del lado1 (valor positivo):";
        cin >> lad1;
        cout <<"Introduce el valor del lado2 (valor positivo):";
        cin >> lad2;
        cout << "El área del rectangulo con lados " << lad1 <<" y " << lad2 << " es " << Area_rectangulo(lad1,lad2) << endl ;
        // system("PAUSE");
        break;
    case 3:
        cout <<"Introduce el valor del base (valor positivo):";
        cin >> bas;
        cout <<"Introduce el valor del altura (valor positivo):";
        cin >> alt;
        Area_triangulo(bas,alt,area);
        cout << "El área del triangulo con base y altura " << bas << " y " << alt << " es " << area << endl ;
        // system("PAUSE");
        break;
    default:
        cout <<"opcion no válida" << endl ;
        // system("PAUSE");
    }
    } while (opcion != 0);
    return 0;
}
// FUNCION:presenta el menú y retorna la opción
int Menu ()
{
    int op;
    cout <<"APLICACION PARA CALCULAR AREAS" << endl ;
    cout <<"1 CALCULAR AREA CIRCULO" << endl ;
    cout <<"2 CALCULAR AREA RECTANGULO" << endl ;
    cout <<"3 CALCULAR AREA TRIANGULO" << endl ;
    cout <<"0 SALIR" << endl ;
    cout <<"Introduce el valor de la opcion:";
    cin >> op;
    return op;
}

