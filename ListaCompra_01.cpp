// ListaCompra_01.cpp
// Modulo 3 Practica 1
//
// DESCRIPCIÓN:
//   SE CREA LA CLASE "LISTACOMPRA"
//   ELEMENTOS PRIVADOS: CODIGO ARTÍCULO, PRECIO Y CONTADOR (COMO MAXIMO 10)
//   ELEMENTOS PUBLICOS: FUNCIONES PARA AÑADIR, ELIMNAR, MOSTRAR LOS ARTICULOS Y
//   CALCULAR LA SUMA DE PRECIOS

#include <iostream>
#include <stdlib.h>
#define MAXART 10 // número máximo de artículos por compra
using namespace std;

class LISTACOMPRA
{
  int codigoArticulo[MAXART];
  float precioArticulo[MAXART];
  int ctaArticulo;
public:
  void CNT(void);//inicializa el contador de artículos (ctaArticulo = 0);
  void obtenerArticulo(void);
  void mostrarSuma(void);
  void eliminarArticulo(void);
  void mostrarArticulos(void);
};

// Inicializa el contador de articulos (ctaArticulo = 0);
// =================================================================
void LISTACOMPRA :: CNT(void)
{
  ctaArticulo = 0;
}

// Pide un articulo por pantalla y lo añade a la lista.
// =================================================================
void LISTACOMPRA :: obtenerArticulo(void)
{
  cout << "\nIntroduzca codigo articulo: ";
  cin >> codigoArticulo[ctaArticulo];
  cout << "Introduzca precio articulo: ";
  cin >> precioArticulo[ctaArticulo];
  ctaArticulo ++;
}

// Presenta en pantalla todos los artículos de la lista
// =================================================================
void LISTACOMPRA :: mostrarArticulos(void)
{
  int i = 0;
  cout << "\n";
  for(i=0;i<ctaArticulo;i++)
    {
      cout << "El articulo con codigo: " << codigoArticulo[i];
      cout << " tiene el precio de " << precioArticulo[i] << "\n";
    }
  cout << "\n";
}

// Presenta en pantalla la suma del importe de todos los artículos de la lista
// =================================================================
void LISTACOMPRA :: mostrarSuma(void)
{
  // XND
  int i = 0;
  float suma = 0;
  cout << "\n";
  for(i=0;i<ctaArticulo;i++)
    {
      suma += precioArticulo[i];
    }
  cout << "La suma del importe de todos los articulos de la lista es: " << suma <<"\n";
}

// Elimina de la lista el artículo que coincida con el código introducido por pantalla
// =================================================================

void LISTACOMPRA :: eliminarArticulo(void)
{
  // XND
  int i = 0;  
  int codigoArticulo_eliminar;
  int posicion;
  bool encontrado = false;
  cout << "\nIntroduzca el codigo del articulo a eliminar: ";
  cin >> codigoArticulo_eliminar;
  for(i=0;i<ctaArticulo && encontrado == false;i++)
    {
      if (codigoArticulo_eliminar == codigoArticulo[i])
	{posicion = i;
	  encontrado = true;
	}
    }
  if (encontrado == false)
    cout << "Ese codigo de articulo no existe" << endl;
  else {
    while (posicion < ctaArticulo) {
      codigoArticulo[posicion] = codigoArticulo[posicion+1];
      precioArticulo[posicion] = precioArticulo[posicion+1];
      posicion++; 
    }
    cout << "Ha sido eliminado el articulo con codigo: " << codigoArticulo_eliminar << endl;
    ctaArticulo--;
  } 
}
//=================================================================
int Menu()
{
  int op;
  cout <<"GESTION DE UNA COMPRA" << endl ;
  cout <<"1 INSERTAR ARTICULO" << endl ;
  cout <<"2 CALCULAR SUMA" << endl ;
  cout <<"3 ELIMINAR ARTICULO" << endl ;
  cout <<"4 MOSTRAR ARTICULOS" << endl ;
  cout <<"5 SALIR" << endl;
  cout <<"Introduce el valor de la opcion: ";
  cin >> op;
  return op;
}

//=================================================================
int main()
{
  LISTACOMPRA pedido; // SE INSTANCIA EL OBJETO pedido DE LA CLASE LISTACOMPRA
 
  pedido.CNT(); // INICIALIZA EL CONTADOR DE ARTICULOS
  // XND
  
  int opcion;
  do {
    opcion = Menu();
    switch (opcion)
      {
      case 1:
	pedido.obtenerArticulo();
	break;
      case 2:
	pedido.mostrarSuma(); 
	break;
      case 3:
	pedido.eliminarArticulo();
	break;
      case 4:
	pedido.mostrarArticulos();
	break;
      case 5:
	cout << "Adios" << endl;
	break;
      default:
        cout <<"Opcion no valida" << endl ;
      }
  } while (opcion != 5);
  return 0;
}
