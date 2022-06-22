#include <allegro5/allegro5.h>
#ifndef MAP_H
#define MAP_H

class Map{

    public:
        Map();
        ~Map();
        void setScreen(int height, int width);
        void destroyScreen();

    private:
        ALLEGRO_DISPLAY* screen;
};

#endif