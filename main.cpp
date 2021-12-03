/*
_____        _                  _    _    __
/ ____|      | |                | |  (_)  /_/
| (___    ___ | |__    __ _  ___ | |_  _   __ _  _ __
\___ \  / _ \| '_ \  / _` |/ __|| __|| | / _` || '_ \
____) ||  __/| |_) || (_| |\__ \| |_ | || (_| || | | |
|_____/  \___||_.__/  \__,_||___/ \__||_| \__,_||_| |_|

_____         _
/ ____|       | |
| (___    ___  | |_  ___
\___ \  / _ \ | __|/ _ \
____) || (_) || |_| (_) |
|_____/  \___/ _\__|\___/

/ __ \       | |
| |  | |  ___ | |__    ___    __ _
| |  | | / __|| '_ \  / _ \  / _` |
| |__| || (__ | | | || (_) || (_| |
\____/  \___||_| |_| \___/  \__,_|

*/


#include <string>
#include <iostream>
#include "Synth.h"
#include "Album.h"
#include "Cancion.h"
#include "Compilacion.h"
using namespace std;

//funcion que imprime el menu

void print_menu(){

  cout << "Bienvenido a mi programa. " << "\n";
  cout << "Presiona 1 para crear un album \n";
  cout << "Presiona 2 para crear una canción \n";
  cout << "Presiona 3 para crear una discografía/compilación de álbumes \n";
  cout << "Presiona 4 para salir \n";

}

//funcion que crea albumes con canciones adentro
Album crea_album(){

  cout << "Cuál es el nombre del artista? \n";
      string artista_input_album;
      cin >> artista_input_album;
    
  cout << "Cuál es el título del álbum? \n";
    string titulo_input_album;
    cin >> titulo_input_album;

//llamamos una instancia de album
  Album album(titulo_input_album, artista_input_album);

  cout << "Cuántas canciones tiene? \n";

    int n;
    cin >> n;

//ciclo for desde 0 hasta nuestro número de canciones
  for (int i = 0; i>= n; i++){
    cout << "Cuál es el nombre de la canción? \n";
    string cancion_input;
    cin >> cancion_input;
    //se usa la función agrega canción en cada uno de los steps 

    album.agregaCancion(cancion_input, artista_input_album, n){

        return album;
    }

  }
}

int main(){

  int opcion = 0;

  while (opcion != 4){

    print_menu();

    cin >> opcion;

    if (opcion == 1){

//objeto album vacío que llenamos con nuestra función
    Album album_holder = crea_album();


        }


    }



    if (opcion == 2){

      cout << "Cuál es el nombre de la canción? \n";
      string titulo_input_cancion;
      cin >> titulo_input_cancion;

      cout << "Cuál es el nombre del artista? \n";
      string artista_input_cancion;
      cin >> artista_input_cancion;

//llamamos una instancia del objeto canción
      Cancion cancion(titulo_input_cancion, artista_input_cancion);

    }



    if (opcion == 3){

      cout << "Cuántos álbumes quieres crear?";
      int num_albumes;
      cin >> num_albumes;
// llamamos una instancia con un arreglo de albumes vacíos desde 1 hasta el número que nos indicaron
      Album albumes[num_albumes];
// creamos un objeto de compilación de álbumes
      Compilacion comp(albumes, num_albumes);
// creamos un arreglo para guardar los valores que usaremos en la función
      Album alb[num_albumes];

      for (int i; i >= num_albumes; i = i+1){
//en cada posición de album vamos a guardar un álbum nuevo
        alb[i] = crea_album();

      }
//mandamos los albumes para meterlos dentro de la discografía/compilación
      for (int i; i >= num_albumes; i = i + 1){
        comp.set_album(alb, i);

      


  }


  }


}
