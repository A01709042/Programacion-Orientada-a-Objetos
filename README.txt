Sebastián Soto Ochoa


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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




V 2.0

Problema que resuelve: Imagina que tienes una tienda de discos, una página de venta de música o una colección muy extensa y 
quieres catalogarlos. A través de este programa puedes crear una canción, un álbum o una compilación musical que el usuario podría
pasar de la memoria a un archivo de texto (se vende por separado).


Cómo lo resuelve:
La clase Album hereda atributos a la clase canción, para no tener que escribir el nombre del artista una y otra vez,
 y dentro de la clase canción se crea la clase synth, ya que una canción sin instrumentos no tiene sentido, 
 y un instrumento no nos sirve de nada si no está en una canción por lo menos en este contexto.

 Así también la clase album tiene composición con la clase canción, pero la clase canción puede ser creada de manera independiente
 como, por ejemplo, si se tiene un single y no hace falta escribir qué album es. 

 Por último la clase compilación tiene agregación de álbumes ya que se añaden en el main, por si en el futuro se agregue 
 alguna forma de guardar la información en un savefile, así el usuario podría agregar albumes pre-existentes. De igual manera, 
 de la forma en que está hecho, si se elimina la clase Compilacion, sus clases álbum no serían eliminadas.

 Sin embargo si se eliminara una clase album sus canciones sí serían eliminadas ya que no nos servirían. Uno puede crear canciones
 individuales siempre que lo desee y estas son completamente independientes de los álbumes, por lo que si alguien crea un album
 y después lo quiere borrar, pues sería un error mantener tooooodas las canciones, que también deberían ser borradas.


 Archivos:

 Main.cpp : se crea ya sea una canción, album o compilación. (canción es indep, album tiene canciones dep, compilación tiene
albumes independientes).

-Para crear una canción sólo se crea la instancia con su instancia dependiente de clase synth.
-Para crear un album igual sólo se usan los constructores y funciones de album, con su clase cancion que tiene una clase synth
	a través de una función para facilitar el proceso en subsecuentes opciones
-Para crear una compilación se usa un ciclo for y se crean sus albumes independientes, con canciones dependientes y synth dependientes.


 Synth: sólo se puede crear al crear una canción, es 100% dependiente de esta. 

Album: Se crea con canciones dependientes. 

Compilacion: Se crea con una lista vacía de álbumes que puede ser llenada con ellos.
