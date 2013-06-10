// FECHA: --------------
// AUTOR: -----------------

#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

//---------------Clase base Carticulo -------------------------
class Carticulo
{
protected:
  long cod_articulo;
  char descripcion[50];
  float precio;
  float iva;
public:
  Carticulo (long id, char *s, float pre, float iv)
  {
    cod_articulo = id;
    strcpy(descripcion,s);
    precio = pre;
    iva = iv;
  }
  virtual void mostrar() {} // función virtual vacia
};

//---------------Clase derivada Clibro-----------------------
class Clibro: public Carticulo
{
  int paginas;
public:
  Clibro (long id, char *s, float a, float iv ,int p) : Carticulo (id,s,a,iv)
  {
    paginas = p;
  }
  virtual void mostrar();
};

//---------------Clase derivada Cvideo---------------------
class Cvideo: public Carticulo
{
  float duracion;
public:
  Cvideo (long id, char *s, float a, float iv,float t) : Carticulo (id,s,a,iv)
  {
    duracion = t;
  }
  virtual void mostrar();
};
void Clibro :: mostrar()
{
  cout << "SE MUESTRA UN LIBRO:\n ";
  cout << "Descripcion: " << descripcion << endl;
  cout << "Paginas: " << paginas << endl;
  cout << "Precio: " << precio << endl;
  //  system("PAUSE");
}
void Cvideo:: mostrar()
{
  cout << "SE MUESTRA UN VIDEO:\n ";
  cout << "Descripcion: " << descripcion << endl;
  cout << "Duracion: " << duracion << " minutos" << endl;
  cout << "Precio: " << precio << endl;
  // system("PAUSE");
}

//------------- PROGRAMA PRINCIPAL--------------------
int main()
{
  char * descripcion = new char[30];
  float precio, duracion;
  int paginas;

  const float iva_libros = 7.0;
  const float iva_cintas = 12.0;



  // CREAR LIBRO
  // cin.ignore();
  cout << "Descripcion: ";
  cin.getline(descripcion,30,'\n');
  cout << "Paginas: "; cin >> paginas ;
  cout << "Precio: "; cin >> precio ;
  Clibro libro1(1,descripcion,precio,iva_libros,paginas);

  // CREAR CINTA
  cin.ignore(); 
  cout << "Descripcion: ";
  cin.getline(descripcion,30,'\n'); 
  cout << "Duracion: "; cin >> duracion ;
  cout << "Precio: "; cin >> precio ;
  Cvideo cvideo1(2,descripcion,precio,iva_cintas,duracion);

  //---------MUESTRA LOS DATOS DE CADA OBJETO-----
  libro1.mostrar();
  cvideo1.mostrar();
  return 0;
}
