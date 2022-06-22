#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <allegro5/allegro5.h>
#include "Map.h"

using namespace std;

Map::Map(){ //padrão

    screen = NULL;
    if(!screen){

        cout << "Sucess!! Screen was already created!" << endl;
    }
    else   
        cout << "Error! Screen wasn't created!" << endl;
}

Map::~Map(){ }

void Map::setScreen(int height, int width){

    screen = al_create_display(height, width);

    if(screen == NULL)
        cout << "Error at screen's creation" << endl;
 
   al_flip_display();
}

void Map::destroyScreen(){
    al_destroy_display(screen);
}