ALLEGRO_FLAGS=-L/usr/local/lib -lallegro `pkg-config --libs allegro-5 allegro_audio-5 allegro_dialog-5 allegro_image-5 allegro_memfile-5 allegro_primitives-5 allegro_acodec-5 allegro_color-5 allegro_font-5 allegro_main-5 allegro_physfs-5 allegro_ttf-5` 

ALLEGRO_INCLUDE= -I/usr/local/include/allegro5

all: Brick.o Map.o Ruby.o Score.o Main.o
	g++ Main.o Brick.o Map.o Ruby.o Score.o -o Pacman.exe $(ALLEGRO_INCLUDE) $(ALLEGRO_FLAGS)

Objeto.o: Map.cpp Brick.cpp Ruby.cpp Score.cpp Map.h Brick.h Ruby.h Score.h
	g++ -c Map.cpp Brick.cpp Ruby.cpp Score.cpp Map.o Brick.o Ruby.o Score.o $(ALLEGRO_INCLUDEE) $(ALLEGRO_FLAGS)

Main.o: Map.h Brick.h Ruby.h Score.h Main.cpp 
	g++ -c Main.cpp -o Main.o $(ALLEGRO_INCLUDE) $(ALLEGRO_FLAGS)

clean:
	rm *.o *.exe

## Makefile feito pra linux apenas 