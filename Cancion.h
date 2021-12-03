using namespace std;
#include <string>
#include "synth.h"

class Cancion: public Album{
private:
  string titulo_cancion;
//variables privadas para guardar información sobre el sintetizador que será creado en cada canción

  Synth sintetizador;
  string nombresynth;
  string temp1;
  int temp2;
  bool analog;
  bool polif;
  bool modul;
  int filt;

public:
//getter para el sintetizador contenido dentro de la canción
  Synth get_synth();
//función para crear un sintetizador
  void crea_synth();
//constructores que contienen la función que crea el sintetizador, así al crear una canción se crea un synth 
  Cancion():Album(titulo, artista){
    crea_synth();
  };
  Cancion(string titulo_cancion, string artista):Album(titulo, artista){
    crea_synth();
  };
  


};


Synth Cancion::get_synth(){
  return sintetizador;
}

//se crea un sintetizador con todos sus atributos para que sea completamente dependiente de la clase cancion (composición)
void Cancion::crea_synth(){

  cout<<"Cuál es el sintetizador principal utilizado?" << "\n";
      cin >> nombresynth;


    cout<<"El sintetizador es analógico? (s/n) " << "\n";

        cin >> temp1;
        int opcion = 0;
        //validamos que el usuario deba realizar una entrada correcta sí o sí
        while (opcion == 0){

          if (temp1 == "s" || temp1 == "S"){ //si el usuario dice que sí
            analog = true;
            opcion = 1;
          }

          else if (temp1 == "n" || temp1 == "N"){ // si dice que no
            analog = false;
            opcion = 1;
          }

          else{
            cout<<"Entrada inválida"; //si no dice ninguna
            opcion = 0;
          }
        }
//repetimos esto con los otros
    cout<<"Es polifónico? (s/n)" << "\n";
        //IDEM
        cin >> temp1;
        opcion = 0;

        while (opcion == 0){
          if (temp1 == "s" || temp1 == "S"){
            polif = true;
            opcion = 1;
          }

          else if (temp1 == "n" || temp1 == "N"){
            polif = false;
            opcion = 1;
          }

          else{
            cout<<"Entrada inválida";
            opcion = 0;
          }
        }

    cout<<"Es modular? (s/n)" << "\n";
        cin >> temp1;
        while (opcion == 0){
        if (temp1 == "s" || temp1 == "S"){
          modul = true;
          opcion = 1;
        }

        else if (temp1 == "n" || temp1 == "N"){
          modul = false;
          opcion = 1;
        }

        else{
          cout<<"Entrada inválida";
          opcion = 0;
        }
      }

//finalmente este paso es un poco más sencillo, sólo se requiere cambiar directamente el valor del atributo
    cout<<"Cuántos filtros tiene? " << "\n";

      cin >> temp2;
      filt = temp2;
// se crea una instancia de objeto de la clase sintetizador con los atributos que se pidieron al usuario, así está contenido dentro
//de la variable sintetizador y depende de nuestra instancia de canción
    Synth sintetizador(nombresynth, analog, polif, modul, filt);


}







