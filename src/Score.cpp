#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <allegro5/allegro5.h>
#include "Score.h"

using namespace std;

Score::Score(){

    //painel score estático
    scorePanel_png = NULL;
    scorePanel_png = al_load_bitmap("score.png");

    if(!scorePanel_png)
        cout << "Error at creation of the score panel!!" << endl;

    else  
        cout << "Sucess! Score panel created!" << endl;


    //pontuação do jogador;
    score_png = NULL;
} 

void Score::createScore(int matriz[18][21]){ //cria a imagem estática score

    for(int i=0; i<18; i++){
        for(int j=0; j<20; j++){ // percorre espaço além do tabuleiro

            if(matriz[i][j] == 5) //desenha o painel score
                al_draw_bitmap(scorePanel_png, (40*j), (40*i), 0);
            
            if(matriz[i][j] == 4){
                score_png = al_load_bitmap("numbers/0.png");
                al_draw_bitmap(score_png, (40*j), (40*i), 0);
            }
        }
    }
}

void Score::destroyScore(){
    al_destroy_bitmap(scorePanel_png);
    al_destroy_bitmap(score_png);
}