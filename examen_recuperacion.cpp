#include <iostream>
using namespace std;

class ANIMALenGRANJA{
  private:

  public:
    string especie;
    int numAnimales;
    string comidaFavorita;
    int numPatas;
    string queCome;
    ANIMALenGRANJA(string especie="especieAnimal", int numAnimales=25, string comidaFavorita="uvas", int numPatas=4, string queCome="manzanas"){
      this->especie=especie;
      this->numAnimales=numAnimales;
      this->comidaFavorita=comidaFavorita;
      this->numPatas=numPatas;
      this->queCome=queCome;
    }
    ~ANIMALenGRANJA(){
        cout << "Adios!" << endl;
    }
    void imprimir(){
        cout << "Hay " << this->numAnimales << " animales de la especie " << this->especie << "." << "El cual su comida favorita es : "<< this->comidaFavorita << " y tiene " << this->numPatas << " patas."<< endl;
    }
    void setEspecie(string especie){
        this->especie = especie;
    }
    void setNumAnimales(int numAnimales){
        this->numAnimales = numAnimales;
    }
    void setComidaFavorita(string comidaFavorita){
      this->comidaFavorita = comidaFavorita;
    }
    void setNumPatas(int numPatas){
      this->numPatas=numPatas;
    }
    void setQueCome(string queCome){
      this->queCome=queCome;
    }
    string chiste(){
      return "por que cruzo la carretera una gallina, por que si. :)";
    }
    string getEspecie(){
        return this->especie;
    }
    int getNumAnimales(){
        return this->numAnimales;
    }
    string getComidaFavorita(){
      return this->comidaFavorita;
    }
    int getNumPatas(){
      return this->numPatas;
    }
    string getQueCome(){
      return this->queCome;
    }
};

class Zorro : public ANIMALenGRANJA{
  private:
    int diasQueVisitaGranja;
  public:
    Zorro (string especie="especieAnimal", int numAnimales=7, string comidaFavorita="comidaFavorita", int numPatas=4, int diasQueVisitaGranja=2) : ANIMALenGRANJA (especie, numAnimales, comidaFavorita, numPatas){
      this->diasQueVisitaGranja=diasQueVisitaGranja;
    }
    void setDiasQueVisitaGranja(int diasQueVisitaGranja){
        this->diasQueVisitaGranja = diasQueVisitaGranja;
    }
    int otroDiasMas(){
      return diasQueVisitaGranja+1;
    }
    string chiste(){
      return "chiste de zorro ...";
    }
    int getDiasQueVisitaGranja(){
        return this->diasQueVisitaGranja;
    }
    void imprimir(){
      ANIMALenGRANJA::imprimir();
      cout << "El zorro visita la granja : " << this->diasQueVisitaGranja << " dias." << endl;
    }
};

class Gallina : public ANIMALenGRANJA{
  private:

  public:
    int huevosDiarios;
    int numDiasPoniendo;
    Gallina (string especie="especieAnimal", int numAnimales=7, string comidaFavorita="comidaFavorita", int numPatas=4, int huevosDiarios=2, int numDiasPoniendo=13) : ANIMALenGRANJA (especie, numAnimales, comidaFavorita, numPatas){
      this->huevosDiarios=huevosDiarios;
      this->numDiasPoniendo=numDiasPoniendo;
    }
    void setHuevosDiarios(int huevosDiarios){
        this->huevosDiarios = huevosDiarios;
    }
    void setNumDiasPoniendo(int numDiasPoniendo){
        this->numDiasPoniendo=numDiasPoniendo;
    }
    int huevosTotales(){
      return numDiasPoniendo*huevosDiarios;
    }
    string chiste(){
      return "chiste de gallina ...";
    }
    int getHuevosDiarios(){
      return this->huevosDiarios;
    }
    int getNumDiasPoniendo(){
      return this->numDiasPoniendo;
    }
    void imprimir(){
      cout << "La gallina pone  : " << this->huevosDiarios << " huevos diarios, esta " << this->numDiasPoniendo << " dias poniendo y pone un total de " << this->huevosTotales() << " huevos."<< endl;
      ANIMALenGRANJA::imprimir();
    }
};

int numPicos(int gallinas){
  int picos;
  picos = gallinas;
}

int numPatas(int numAnimal, string animal){
  int numPatas;
  if(animal=="animalgallina"){
    numPatas=numAnimal*2;
  }
  else{
    numPatas=numAnimal*4;
  }
}

int totalPatasPicos(int patasZorros, int patasGallinas, int picos){
  int totalPatas;
  int totalPicos;
  totalPatas = patasZorros+patasGallinas;
  totalPicos = picos;
  return  totalPatas + totalPicos;
}

int zorroMataGallinas(){

}

int main(){
  int numGallinas;
  int numZorros;
  string animalzorro;
  string animalgallina;
  int numPatasZorro;
  int numPatasGallina;
  int numPicosTotal;
  int mata;

  cout << "Vicky Porras" << endl;
  cout << endl;

  ANIMALenGRANJA animalUno;
   cout <<"pruebo imprimir ANIMALenGRANJA: " << endl;
   animalUno.imprimir();
  cout << endl;

  Zorro zorrito;
   cout <<"pruebo imprimir zorro: " << endl;
  zorrito.imprimir();
  cout << endl;

  Gallina gallinita;
   cout <<"pruebo imprimir gallina: " << endl;
  gallinita.imprimir();
  cout << endl;

  cout << "pruebo imprimir chiste zorro" << endl;
  cout << zorrito.chiste() << endl;
  cout << endl;

  cout << "pruebo dias q va el zorro a la granja:" << endl;
  cout << zorrito.otroDiasMas() << endl;
  cout << endl;

  cout << "Cuantas gallinas tenemos ??" << endl;
  cin >> numGallinas;
  cout << "Cuantos zorros tenemos ??" << endl;
  cin >> numZorros;
  cout << endl;

  cout << "Hay " << numPicos(numGallinas) << " picos." << endl;
  cout << endl;
  cout << "Los zorros suman un total de " << numPatas(numZorros, animalzorro) << " patas. Y las gallinas " << numPatas(numGallinas, animalgallina) << " patas." << endl;
  cout << endl;

  numPatasZorro=numPatas(numZorros, animalzorro);
  numPatasGallina=numPatas(numGallinas, animalgallina);
  numPicosTotal=numPicos(numGallinas);
  cout << "En total hay " << totalPatasPicos(numPatasZorro, numPatasGallina, numPicosTotal) << " entre picos y patas." << endl;
  cout << endl;

  cout << "Cuantas gallinas ha matado el zorro ??" << endl;
  cin >> mata;
  while(mata<numGallinas){
    numGallinas=numGallinas-mata;
    cout << "Cuantas gallinas ha matado el zorro ??" << endl;
    cin >> mata;
  };

  return 0;
}
