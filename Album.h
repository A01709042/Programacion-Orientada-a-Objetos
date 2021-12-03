#include <string>
using namespace std;
#include <iostream>
#include <cctype>
#include <cstring>

#ifndef ALBUM_H
#define ALBUM_H


class Album{

private:
  string temp1;
  // nuestra lista de canciones, por obvias razones NO se hereda a la clase Cancion
  Cancion canciones[100];

  

//usamos protected para heredar estos a la clase Cancion
protected:
  string titulo;
  string artista;


public:
  //conostructores
  Album(): titulo(" "), artista(" "){};
  Album(string tit, string art){

    titulo = tit;
    artista = art;
  };

  //getters y setters
  string get_titulo();
  string get_artista();

  void set_titulo(string tit);
  void set_artista(string art);

// funcion para agregar una canción 
  void Album::agregaCancion(string titulo_cancion, string art, int numero_de_track){
  }

};

string Album::get_titulo(){
  return titulo;
}

string Album::get_artista(){
  return artista;
}


void Album::set_titulo(string tit){
  titulo = tit;
}

void Album::set_artista(string art){
  artista = art;
}

//queremos que cada canción creada tenga el mismo artista
void Album::agregaCancion(string titulo_cancion, string art, int numero_de_track){
    art = artista;
    canciones[numero_de_track] = Cancion(titulo_cancion, artista);

  }


#endif






