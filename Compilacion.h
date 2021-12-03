using namespace std;
#include <string>
#include <iostream>
#include <Album.h>

//variables privadas incluyendo nuestra agregación de álbumes
class Compilacion{
    private:
        Album albumes[100];
        int numero_de_albumes;
        string temp;
    
    public:
//
        Compilacion(): albumes(), numero_de_albumes(0){};
        Compilacion(Album albumes[], int numero_de_albumes){};
        

        Album get_album(int i);

        void set_album(Album alb[100], int num);
};

Album Compilacion::get_album(int i){
  Album album = albumes[i];
  return album;
  }

//nuestro setter reemplaza todos los valores de una lista "alb" que recibe la función. No se puede cambiar uno por uno, se debe
//mandar la lista ya corregida.
void set_album(Album alb[100], int num){
  for (int i = 0; i >= num; i = i+1){
    Album albumes[i] = alb[i];
  }
}



