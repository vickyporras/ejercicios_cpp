#include <iostream>
using namespace std;


class Ficha{
private:
  string forma;
  string color;
public:
  Ficha (string forma="circulo", string color="morado"){
    this->forma=forma;
    this->color=color;
  }
};

class Tablero : public Ficha{
private:
  int filas;
  int columnas;
  int **tablero;
public:
  Tablero(){
    this->filas=5;
    this->columnas=5;
    this->tablero = new int*[filas];

    for (int i=0; i<filas; i++){
      tablero[i] = new int[columnas];
    }
  }
};


int main(){


  return 0;
}
