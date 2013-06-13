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
  
  Carticulo () {
    leerArticulo();
  }
  virtual void mostrar() {} // función virtual vacia
  virtual void leerArticulo() = 0;
};

//---------------Clase derivada Clibro-----------------------
class Clibro: public Carticulo
{
  int paginas;
public:
  Clibro (long id, char *s, float a, float iv ,int p) : Carticulo ()
  {
    paginas = p;
  }
  
  virtual void mostrar();

  virtual void leerArticulo(){
  cout << "ALTA LIBRO" << endl;
  // cin.ignore();
  cout << "Descripcion: ";
  cin.getline(descripcion,30,'\n');
  cout << "Paginas: "; cin >> paginas ;
  cout << "Precio: "; cin >> precio ;
  Clibro libro1(1,descripcion,precio,iva_libros,paginas);
  }

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

//---------------Clase derivada Ccamiseta---------------------
class Ccamiseta: public Carticulo
{
  int talla;
  char color[15];
public:
  Ccamiseta (long id, char *s, float a, float iv, int t, char *col) : Carticulo (id,s,a,iv)
  {
    talla = t;
    strcpy(color,col);    
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

void Ccamiseta:: mostrar()
{
  cout << "SE MUESTRA UNA CAMISETA:\n ";
  cout << "Descripcion: " << descripcion << endl;
  cout << "Talla: " << talla << endl;
  cout << "Color: " << color << endl;
  cout << "Precio: " << precio << endl;
  // system("PAUSE");
}

//------------- PROGRAMA PRINCIPAL--------------------
int main()
{
  char * descripcion = new char[30];
  char * color = new char[15];
  float precio, duracion;
  int paginas, talla;

  const float iva_libros = 7.0;
  const float iva_cintas = 12.0;
  const float iva_camisetas = 15.0;


  // CREAR LIBRO
  cout << "ALTA LIBRO" << endl;
  // cin.ignore();
  cout << "Descripcion: ";
  cin.getline(descripcion,30,'\n');
  cout << "Paginas: "; cin >> paginas ;
  cout << "Precio: "; cin >> precio ;
  Clibro libro1(1,descripcion,precio,iva_libros,paginas);

  // CREAR CINTA
  cout << "ALTA CINTA" << endl;
  cin.ignore(); 
  cout << "Descripcion: ";
  cin.getline(descripcion,30,'\n'); 
  cout << "Duracion: "; cin >> duracion ;
  cout << "Precio: "; cin >> precio ;
  Cvideo cvideo1(2,descripcion,precio,iva_cintas,duracion);

  // CREAR CAMISETA
  cout << "ALTA CAMISETA" << endl;
  cin.ignore(); 
  cout << "Descripcion: ";
  cin.getline(descripcion,30,'\n'); 
  cout << "Talla: "; cin >> talla ;
  cin.ignore(); 
  cout << "Color: ";
  cin.getline(color,15,'\n'); 
  cout << "Precio: "; cin >> precio ;
  Ccamiseta camiseta1(3,descripcion,precio,iva_camisetas,talla,color);

  //---------MUESTRA LOS DATOS DE CADA OBJETO-----
  libro1.mostrar();
  cvideo1.mostrar();
  camiseta1.mostrar();
  return 0;
}
