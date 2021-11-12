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

#include <iostream>
#include <string>
#include "classes.h"
using namespace std;


int main(){

  Synth juno106(True, True, False, 1)
  std::cout <<juno106.get_polifonico()<< " "\
            <<juno106.get_analogico()<< " "\
            <<juno106.get_modular()<< " "\
            <<juno106.get_num_de_filtros()<< std::end1;

  juno106.set_num_de_filtros(2);

  std::cout <<juno106.get_num_de_filtros()<< std::end1;




  Album phaedra("Phaedra", "Tangerine Dream", 0, "Desconocido")
  std::cout <<phaedra.get_tracks()<< " "\
            <<phaedra.get_synth()<< " " std::end1;

  phaedra.set_tracks(4);
  phaedra.set_synth("VCS3");

  std::cout <<phaedra.get_tracks()<< " "\
            <<phaedra.get_synth()<< " " std::end1;




  str artista_album1 = phaedra.get_artista();
  Cancion phaedra_song1(" ", artista_album1, "VCS3", "Secuenciador")
  std::cout <<phaedra_song1.get_songtitle()<< " "\
            <<phaedra_song1.get_synth2()<<" " std::end1;

  phaedra_song1.set_songtitle("Phaedra");
  phaedra_song1.set_synth2("Secuenciador Moog");

  std::cout <<phaedra_song1.get_songtitle()<< " "\
            <<phaedra_song1.get_synth2()<<" " std::end1;





}
