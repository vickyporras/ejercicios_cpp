#include <iostream>
using namespace std;

class Mueble{
  private:
    string mesa;
    string armario;
  public:
    Mueble(string mesa="nombreMesa", string armario="nombreArmario"){
      this->mesa=mesa;
      this->armario=armario;
    }
    ~Mueble(){
        cout << "Adios!" << endl;
    }
    void imprimir(){
        cout << "Mesa: " << this->mesa << ". Armario: " << this->armario << "." << endl;
    }

    void setMesa(string mesa){
        this->mesa = mesa;
    }
    void setArmario(string armario){
        this->armario = armario;
    }
    string getMesa(){
        return this->mesa;
    }
    string getArmario(){
        return this->armario;
    }
  };


int main(){




  return 0;
}
