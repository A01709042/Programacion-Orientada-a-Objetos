/*


*/
using namespace std;
#include <string>
//atributos privados 
class Synth{
private:
  string nombre;
  bool analogico;
  bool polifonico;
  bool modular;
  int num_de_filtros;
//constructores
public:
  Synth(): nombre(" "), analogico(true), polifonico(true), modular(false), num_de_filtros(2){};
  Synth(string nom, bool analog, bool polif, bool modul, int filt): nombre(nom), analogico(analog), polifonico(polif), modular(modul), num_de_filtros(filt){};
//getters y setters
  string get_nombre();
  bool get_analogico();
  bool get_polifonico();
  bool get_modular();
  int get_num_de_filtros();

  void set_nombre(string nom);
  void set_analogico(bool analog);
  void set_polifonico(bool polif);
  void set_modular(bool modul);
  void set_num_de_filtros(int filt);


};


//getters y setters 
string Synth::get_nombre(){
  return nombre;
}

bool Synth::get_analogico(){
  return analogico;
}

bool Synth::get_polifonico(){
  return polifonico;
}

bool Synth::get_modular(){
  return modular;
}

int Synth::get_num_de_filtros(){
  return num_de_filtros;
}


void Synth::set_nombre(string nom){
  nombre = nom;
}

void Synth::set_analogico(bool analog){
  analogico = analog;
}

void Synth::set_polifonico(bool polif){
  polifonico = polif;
}

void Synth::set_modular(bool modul){
  modular = modul;
}

void Synth::set_num_de_filtros(int filt){
  num_de_filtros = filt;
}
