#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <allegro5/allegro5.h>
#include "Score.h"

using namespace std;

Score::Score(){

    score_png = NULL;
    score_png = al_load_bitmap("score/0.png");

    if(!score_png)
        cout << "Error at creation of the game score!!" << endl;
    else  
        cout << "Sucess! The game score was created!" << endl;
}   

Score::~Score(){}

void Score::createScore(int matriz[18][22]){ //cria o placar inicial zerado

    for(int i=0; i<18; i++){ //inicializa as unidade, dezena, centena e milhar do placar com 0
        for(int j=0; j<22; j++){ 

            if(matriz[i][j] == 4 || matriz[i][j] == 5 || matriz[i][j] == 6 || matriz[i][j] == 7){
                al_draw_bitmap(score_png, (40*j), (40*i), 0);
            }
        }
    }
    al_flip_display();
}

void Score::destroyScore(){
    al_destroy_bitmap(score_png);
}
