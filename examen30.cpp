#include <iostream>
using namespace std;

class Juego{
  private:
    string nombre;
    float descuento;
    Juego(string nombre="nombreJuego"){
      this->nombre=nombre;
    }
  public:
    float precio;
    Juego( float precio=45, float descuento=10){
      this->precio=precio;
      this->descuento=descuento;
    }
    ~Juego(){
        cout << "Adios!" << endl;
    }
    void imprimir(){
        cout << "El nombre del juego es: " << this->nombre << ". Y su precio es: " << this->precio << "." << "Pero su precio con descuento es: "<< this->descuento << endl;
    }
    void setNombre(string nombre){
        this->nombre = nombre;
    }
    void setPrecio(float precio){
        this->precio = precio;
    }
    void setDescuento(float descuento){
      descuento = precio-descuento;
    }
    string getNombre(){
        return this->nombre;
    }
    float getPrecio(){
        return this->precio;
    }
    int getDescuento(){
      return this->descuento;

    }
};

class Videojuego : public Juego{
  private:
    string plataforma;
    float descuento;
  public:
    Videojuego (string plataforma="nombrePlataforma", float descuento=30) : Juego (precio){
      this->plataforma=plataforma;
      this->descuento=descuento;
    }
    void setPlataforma(string plataforma){
        this->plataforma = plataforma;
    }
    void setDescuento(float descuento){
        this->descuento = descuento;
    }
    string getPlataforma(){
        return this->plataforma;
    }
    float getDescuento(){
        return this->descuento;
    }
    void imprimir_videojuego(){
      Juego::imprimir();
      cout << "La plataforma es: " << this->plataforma << "Y su descuento es: " << this->descuento << endl;
    }
};

class JuegoMesa : public Juego{
  private:
    int minimoJugadores;
    int maximoJugadores;
  public:
    JuegoMesa (int minimoJugadores=2, int maximoJugadores=30) : Juego (precio){
      this->minimoJugadores=minimoJugadores;
      this->maximoJugadores=maximoJugadores;
    }
    void setMinimoJugadores(int minimoJugadores){
        this->minimoJugadores = minimoJugadores;
    }
    void setMaximoJugadores(int maximoJugadores){
        this->maximoJugadores = maximoJugadores;
    }
    int getMinimoJugadpres(){
        return this->minimoJugadores;
    }
    int getMaximoJugadores(){
        return this->maximoJugadores;
    }
    void imprimir_juegoMesa(){
      Juego::imprimir();
      cout << "Minimo pueden jugar: " << this->minimoJugadores << "personas. Y maximo: " << this->maximoJugadores << endl;
    }
};


int main(){

  return 0;
}
