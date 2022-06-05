#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <allegro5/allegro_image.h>
#include "Map.h"
#include "Brick.h"
#include "Ruby.h"

using namespace std;

int main(){

    //matriz principal
    int matriz[18][15]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                        {1,0,0,0,0,0,0,1,0,0,0,0,0,0,1},
                        {1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
                        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                        {1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
                        {1,0,0,0,0,0,0,1,0,0,0,0,0,0,1},
                        {1,0,1,1,1,1,0,1,0,1,1,1,1,0,1},
                        {1,0,1,0,0,0,0,1,0,0,0,0,1,0,1},
                        {1,0,1,0,1,1,0,1,0,1,1,0,1,0,1},
                        {1,0,1,0,1,1,0,1,0,1,1,0,1,0,1},
                        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                        {1,0,1,0,1,1,1,0,1,1,1,0,1,0,1},
                        {1,0,1,0,1,0,0,0,0,0,1,0,1,0,1},
                        {1,0,1,0,1,1,1,1,1,1,1,0,1,0,1},
                        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                        {1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
                        {1,0,0,0,0,0,0,1,0,0,0,0,0,0,1},
                        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};

    al_init();
    al_init_image_addon();

    Map m;
    Brick b;
    Ruby r;

    //criação
    m.setScreen(800,720);
    b.createBrick(matriz);
    al_flip_display();
    r.createRuby(matriz);

    al_rest(30.0); //duração da tela

    //destruição
    m.destroyScreen();                              
    b.destroyBrick();
    r.destroyRuby();

    return 0;
}