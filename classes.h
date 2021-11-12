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
#include<string>

using namespace std;

class Synth{
private:
  bool analogico;
  bool polifonico;
  bool modular;
  int num_de_filtros;

public:
  Synth(): analogico(True), polifonico(True), modular(False), num_de_filtros(2);
  Synth(std::bool analog, bool polif, bool modul, int filt): analogico(analog), polifonico(polif), modular(modul), num_de_filtros(filt){};

  bool get_analogico();
  bool get_polifonico();
  bool get_modular();
  int get_num_de_filtros();

  void set_analogico(bool );
  void set_polifonico(bool );
  void set_modular(bool );
  void set_num_de_filtros(int )


};

class Album{
private:
  str titulo;
  str artista;
  int tracks;
  str synth;


public:
  Album(): titulo(" "), artista(" "), tracks(0), synth(" ");
  Album(str tit, str art, int tra, str sy): titulo(tit), artista(art), tracks(tra), synth(sy){};

  string get_titulo();
  string get_artista();
  int get_tracks();
  str get_synth();

  void set_titulo(tit );
  void set_artista(art);
  void set_tracks(tra);
  void set_synth(sy);

};


class Cancion{
private:
  str songtitle;
  str songartist;
  str synth1;
  str synth2;

public:
  Cancion(): songtitle(" "), songartist(" "), synth1(" "), synth2(" ");
  Cancion(str stit, str sart, str sy1, str sy2): songtitle(stit), songartist(sart), synth1(sy1), synth2(sy2){};

  str get_songtitle();
  str get_songartist();
  str get_synth1();
  str get_synth2();

  void set_songtitle(str );
  void set_songartist(str );
  void set_synth1(str );
  void set_synth2(str );

};



/*clase synth
*/
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
  return num_de_filtros
}

void Synth::set_analogico(std::bool analog){
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

/*clase album
*/

str Album::get_titulo(){
    return titulo;
}

str Album::get_artista(){
  return artista;
}

int Album::get_tracks(){
  return tracks;
}

str Album::get_synth(){
  return synth;
}


void Album::set_titulo(str tit){
  titulo = tit;

}

void Album::set_artista(str art){
  artista = art;
}

void Album::set_tracks(int tr){
  tracks = tra;
}

void Album::set_synth(str sy){
  synth = sy
}


/*
clase Cancion
*/

str Cancion::get_songtitle(){
  return songtitle;
}

str Cancion::get_songartist(){
  return songartist;
}

str Cancion::get_synth1(){
  return synth1;
}

str Cancion::get_synth2(){
  return synth2;
}


void Cancion::set_songtitle(str stit){
  songtitle = stit;
}

void Cancion::set_songartist(str sart){
  songartist = sart;
}

void Cancion::set_synth1(str sy1){
  synth1 = sy1;
}

void Cancion::set_synth1(str sy2){
  synth2 = sy2;
}
