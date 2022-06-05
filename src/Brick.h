#include <allegro5/allegro5.h>
#ifndef BRICK_H
#define BRICK_H

class Brick{

    public:

        Brick();
        void createBrick(int matriz[18][15]);
        void destroyBrick();

    private:
        ALLEGRO_BITMAP* Brick_png;

};

#endif

