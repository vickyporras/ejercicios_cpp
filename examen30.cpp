#include <iostream>
using namespace std;

class Juego{
  private:
    string nombre;
    Juego(string nombre="nombreJuego"){
      this->nombre=nombre;
    }
  public:
    float descuento;
    float precio;
    float precio_con_descuento;
    Juego( float precio=45, float descuento=10, float precio_con_descuento=0){
      this->precio=precio;
      this->descuento=descuento;
      this->precio_con_descuento=precio_con_descuento;
    }
    ~Juego(){
        cout << "Adios!" << endl;
    }
    void imprimir(){
        cout << "El nombre del juego es: " << this->nombre << ". Y su precio es: " << this->precio << "." << "Pero su precio con descuento es: "<< this->precio_con_descuento << endl;
    }
    void setNombre(string nombre){
        this->nombre = nombre;
    }
    void setPrecio(float precio){
        this->precio = precio;
    }
    void setDescuento(float descuento){
      this->descuento = descuento;
    }
    void setPrecio_con_descuento(float precio_con_descuento){
      this->precio_con_descuento = precio - descuento;
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
    float getPrecio_con_descuento(){
      return this->precio_con_descuento;
    }
};

class Videojuego : public Juego{
  private:
    string plataforma;
    float descuento_videojuego;
    float precio_con_descuento_videojuego;
    float precio_final;
  public:
    Videojuego (string plataforma="nombrePlataforma", float descuento_videojuego=0.20, float precio_con_descuento_videojuego=0, float precio_final=0) : Juego (precio, precio_con_descuento){
      this->plataforma=plataforma;
      this->descuento_videojuego=descuento_videojuego;
      this->precio_con_descuento_videojuego=precio_con_descuento_videojuego;
      this->precio_final=precio_final;
    }
    void setPlataforma(string plataforma){
        this->plataforma = plataforma;
    }
    void setDescuento_videojuego(float descuento_videojuego){
      this->descuento_videojuego=descuento_videojuego;
    }
    void setPrecio_con_descuento_videojuego(float precio_con_descuento_videojuego){
        this->precio_con_descuento_videojuego = (precio*descuento_videojuego)-precio;
    }
    void setPrecio_finla(float precio_final){
      if(precio_con_descuento_videojuego<precio){
        this->precio_final=precio_con_descuento_videojuego;
      }
      else{
        this->precio_final=precio;
      }
    }
    string getPlataforma(){
        return this->plataforma;
    }
    float getDescuento_videojuego(){
        return this->descuento_videojuego;
    }
    float getPrecio_con_descuento_videojuego(){
      return this->precio_con_descuento_videojuego;
    }
    float getPrecio_final(){
      return this->precio_final;
    }
    void imprimir_videojuego(){
      Juego::imprimir();
      cout << "La plataforma es: " << this->plataforma << "Y su precio final con descuento es: " << this->precio_final << endl;
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
  cout << "Vicky Porras" << endl;

  Juego juegoUno(5, 10);
  juegoUno.imprimir();

  Videojuego marioCars;
  marioCars.imprimir_videojuego();

// He elegido la herencia publica porque lo que no se  podia modificar lo he puesto en privado.


  return 0;
}
