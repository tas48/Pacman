#include <allegro5/allegro5.h>
#ifndef SCORE_H
#define SCORE_H

class Score{   

    public:
        Score(); //construtor
        ~Score();//destrutor

        void createScore(int[18][22]);
        void destroyScore();
        //void changeScore(int, int[18][22]);

    private:
        ALLEGRO_BITMAP* score_png;
};
#endif
