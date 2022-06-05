#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <allegro5/allegro5.h>
#include "Brick.h"


using namespace std;

Brick::Brick(){

    Brick_png = NULL;
    Brick_png = al_load_bitmap("lava.png");
    if(!Brick_png)
        cout << "Error at creation of the brick!!" << endl;

    else
        cout << "Sucess! Brick was already creted!" << endl;
}

void Brick::createBrick(int matriz[18][15]){ //Cria o bloco
                    
    for(int i=0; i<18; i++){
        for(int j=0;j<15;j++){

            if (matriz[i][j] == 1)
                al_draw_bitmap(Brick_png, (40*j), (40*i), 0);
        }
    } 
    al_flip_display();
}

void Brick::destroyBrick(){
    al_destroy_bitmap(Brick_png);
}