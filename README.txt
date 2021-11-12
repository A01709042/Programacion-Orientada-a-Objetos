//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


Sebastián Soto Ochoa



______ _____  ___ _________  ___ _____ 
| ___ \  ___|/ _ \|  _  \  \/  ||  ___|
| |_/ / |__ / /_\ \ | | | .  . || |__  
|    /|  __||  _  | | | | |\/| ||  __| 
| |\ \| |___| | | | |/ /| |  | || |___ 
\_| \_\____/\_| |_/___/ \_|  |_/\____/

   __      _                          _       _                                        _        
  /__\ __ | |_ _ __ ___  __ _  __ _  / |   __| | ___   _ __  _ __ ___  _   _  ___  ___| |_ ___  
 /_\| '_ \| __| '__/ _ \/ _` |/ _` | | |  / _` |/ _ \ | '_ \| '__/ _ \| | | |/ _ \/ __| __/ _ \ 
//__| | | | |_| | |  __/ (_| | (_| | | | | (_| |  __/ | |_) | | | (_) | |_| |  __/ (__| || (_) |
\__/|_| |_|\__|_|  \___|\__, |\__,_| |_|  \__,_|\___| | .__/|_|  \___/ \__, |\___|\___|\__\___/ 
                        |___/                         |_|              |___/                    


                                                                                                         
                                                                                                         
IIIIIIIIIITTTTTTTTTTTTTTTTTTTTTTTEEEEEEEEEEEEEEEEEEEEEE   SSSSSSSSSSSSSSS MMMMMMMM               MMMMMMMM
I::::::::IT:::::::::::::::::::::TE::::::::::::::::::::E SS:::::::::::::::SM:::::::M             M:::::::M
I::::::::IT:::::::::::::::::::::TE::::::::::::::::::::ES:::::SSSSSS::::::SM::::::::M           M::::::::M
II::::::IIT:::::TT:::::::TT:::::TEE::::::EEEEEEEEE::::ES:::::S     SSSSSSSM:::::::::M         M:::::::::M
  I::::I  TTTTTT  T:::::T  TTTTTT  E:::::E       EEEEEES:::::S            M::::::::::M       M::::::::::M
  I::::I          T:::::T          E:::::E             S:::::S            M:::::::::::M     M:::::::::::M
  I::::I          T:::::T          E::::::EEEEEEEEEE    S::::SSSS         M:::::::M::::M   M::::M:::::::M
  I::::I          T:::::T          E:::::::::::::::E     SS::::::SSSSS    M::::::M M::::M M::::M M::::::M
  I::::I          T:::::T          E:::::::::::::::E       SSS::::::::SS  M::::::M  M::::M::::M  M::::::M
  I::::I          T:::::T          E::::::EEEEEEEEEE          SSSSSS::::S M::::::M   M:::::::M   M::::::M
  I::::I          T:::::T          E:::::E                         S:::::SM::::::M    M:::::M    M::::::M
  I::::I          T:::::T          E:::::E       EEEEEE            S:::::SM::::::M     MMMMM     M::::::M
II::::::II      TT:::::::TT      EE::::::EEEEEEEE:::::ESSSSSSS     S:::::SM::::::M               M::::::M
I::::::::I      T:::::::::T      E::::::::::::::::::::ES::::::SSSSSS:::::SM::::::M               M::::::M
I::::::::I      T:::::::::T      E::::::::::::::::::::ES:::::::::::::::SS M::::::M               M::::::M
IIIIIIIIII      TTTTTTTTTTT      EEEEEEEEEEEEEEEEEEEEEE SSSSSSSSSSSSSSS   MMMMMMMM               MMMMMMMM




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





En esta primera entrega desarrollé 2 clases:

La clase "Synth" que es para guardar datos de sintetizadores (teclados) 

Atributos: 
	Analógico (true) o en caso de ser false es digital
	Polifónico, o en caso de ser false es monofónico
	Modular, que en caso de ser false es un sintetizador "normal"
	numero de filtros, que guarda el número de filtros que tiene (un dispositivo electrónico que filtra bandas de frecuencias específicas)

La clase "Album" que es para guardar álbumes musicales

Atributos:
	Titulo que guarda el título del album
	Artista que guarda el nombre del artista
	Tracks que guarda el número de canciones que tiene
	Synth que guarda el nombre del sintetizador que se utilizó principalmente para este album

La clase "Cancion" que es para guardar canciones 

Atributos:
	songtitle que guarda el nombre de la canción
	songartist que guarda el nombre del artista
	synth1 que guarda un sintetizador usado en la canción
	synth2 que guarda otro sintetizador usado en la canción

Las tres clases tienen sus respectivos métodos getter y setter 


En el main se puede ver cómo se modifican algunos valores para ser corregidos después de que al declarar las instancias estaban mal
Se vuelven a imprimir una vez corregidos para comprobar que cambiaron


