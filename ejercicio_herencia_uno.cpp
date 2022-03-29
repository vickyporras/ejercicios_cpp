#include <iostream>
using namespace std;

class Mueble{
  private:
    string material;
    string dimensiones;
  public:
    Mueble(string material="madera", string dimensiones="12x20x30"){
      this->material=material;
      this->dimensiones=dimensiones;
    }
    ~Mueble(){
        cout << "Adios!" << endl;
    }
    void imprimir(){
        cout << "Material: " << this->material << ". Dimensiones: " << this->dimensiones << "." << endl;
    }
    void setMaterial(string material){
        this->material = material;
    }
    void setDimensiones(string dimensiones){
        this->dimensiones = dimensiones;
    }
    string getMaterial(){
        return this->material;
    }
    string getDimensiones(){
        return this->dimensiones;
    }
  };

  class Mesa : public Mueble{
    private:
      int numPatas;
      string forma;
    public:
      Mesa (string material="nombreMaterial", string dimensiones="dimensiones", int numPatas=4, string forma="redonda") : Mueble (material, dimensiones){
        this->numPatas=numPatas;
        this->forma=forma;
      }
      void setNumPatas(int numPatas){
          this->numPatas = numPatas;
      }
      void setForma(string forma){
          this->forma = forma;
      }
      int getNumPatas(){
          return this->numPatas;
      }
      string getForma(){
          return this->forma;
      }
      void imprimir_mesa(){
        Mueble::imprimir();
        cout << "Numero de patas: " << this->numPatas << "Forma: " << this->forma << endl;
      }
      class Armario : protectec Mueble{
        private:
          string tipo;
          int numBaldas;
        public:
          Mesa (string material="nombreMaterial", string dimensiones="dimensiones", string tipo="tipoArmario", int numBaldas=5) : Mueble (material, dimensiones){
            this->tipo=tipo;
            this->numBaldas=numBaldas;
          }
          void setTipo(string tipo){
              this->tipo = tipo;
          }
          void setNumBaldas(int numBaldas){
              this->numBaldas = numBaldas;
          }
          string getTipo(){
              return this->tipo;
          }
          int getNumBaldas(){
              return this->numBaldas;
          }
          void imprimir_armario(){
            Mueble::imprimir();
            cout << "Tipo de armario: " << this->tipo << "Numero de baldas: " << this->numBaldas << endl;
          }
  };


int main(){




  return 0;
}
