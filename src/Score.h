#include <allegro5/allegro5.h>
#ifndef SCORE_H
#define SCORE_H

class Score{

    public:
        Score(); //construtor
        void createScore(int matriz[18][21]);
        void destroyScore();

    private:
        ALLEGRO_BITMAP* scorePanel_png;
        ALLEGRO_BITMAP* score_png; 
};


#endif