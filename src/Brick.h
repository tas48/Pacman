#include <allegro5/allegro5.h>
#ifndef BRICK_H
#define BRICK_H

class Brick{

    public:

        Brick();
        ~Brick();
        void createBrick(int matriz[18][22]);
        void destroyBrick();

    private:
        ALLEGRO_BITMAP* Brick_png;

};

#endif

