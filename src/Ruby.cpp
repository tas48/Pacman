#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <allegro5/allegro5.h>
#include "Ruby.h"

using namespace std;

Ruby::Ruby(){

    redRuby_png = NULL;
    redRuby_png = al_load_bitmap("redRuby.png");

    if(!redRuby_png)
        cout << "Error at creation of the ruby" << endl;
    else
        cout << "Sucess! Ruby was already created!" << endl;

}

void Ruby::createRuby(int matriz[18][15]){

    for(int i=0; i<18; i++){
        for(int j=0; j<15; j++){

            if(matriz[i][j] == 0){
                al_draw_bitmap(redRuby_png, (40*j), (40*i), 0);
            }
        }
    }

    al_flip_display();

}

void Ruby::destroyRuby(){
    al_destroy_bitmap(redRuby_png);
}