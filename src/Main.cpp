#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <allegro5/allegro_image.h>
#include "Map.h"
#include "Brick.h"
#include "Ruby.h"
#include "Score.h"

using namespace std;

int main(){

    //matriz principal
    int matriz[18][22]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                        {1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,3,3,3,3,3,3,1},
                        {1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,3,3,3,3,3,3,1},
                        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,7,6,5,4,3,1},
                        {1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,3,3,3,3,3,3,1},
                        {1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,3,3,3,3,3,3,1},
                        {1,0,1,1,1,1,0,1,0,1,1,1,1,0,1,3,3,3,3,3,3,1},
                        {1,0,1,0,0,0,0,1,0,0,0,0,1,0,1,3,3,3,3,3,3,1},
                        {1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,3,3,3,3,3,3,1},
                        {1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,3,3,3,3,3,3,1},
                        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,1},
                        {1,0,1,0,1,1,1,0,1,1,1,0,1,0,1,3,3,3,3,3,3,1},
                        {1,0,1,0,1,0,0,0,0,0,1,0,1,0,1,3,3,3,3,3,3,1},
                        {1,0,1,0,1,1,1,1,1,1,1,0,1,0,1,3,3,3,3,3,3,1},
                        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,1},
                        {1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,3,3,3,3,3,3,1},
                        {1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,3,3,3,3,3,3,1},
                        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};


    al_init();
    al_init_image_addon();

    //objetos, construtor padrao
    Map m;
    Brick b;
    Ruby r;
    Score s;

    m.setScreen(880,720); //tela
    
    b.createBrick(matriz); //blocos
    al_flip_display();
    
    r.createRuby(matriz); //pilulas
    al_flip_display();
    
    s.createScore(matriz); //placar

    al_rest(10.0); //duração da tela

    //destruicao allegro
    m.destroyScreen();                              
    b.destroyBrick();
    r.destroyRuby();
    s.destroyScore();

    //destrutores
    m.~Map();
    b.~Brick();
    r.~Ruby();
    s.~Score();
    
    
    return 0;
}