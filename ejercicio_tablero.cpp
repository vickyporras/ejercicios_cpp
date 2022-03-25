#include <iostream>
using namespace std;

class Tablero{
private:
  int filas;
  int columnas;
  int **tablero;
public:
  Tablero(){
    this->filas=5;
    this->columna=5;
    this->tablero = new int*[filas];

    for (int i=0; i<filas; i++){
      tablero[i] = new int[columnas];
    }
  }
};

int main(){


  return 0;
}
