#include <allegro5/allegro5.h>
#ifndef RUBY_H
#define RUBY_H

class Ruby{

    public:

        Ruby();
        void createRuby(int matriz[18][15]);
        void destroyRuby();

    private:
        ALLEGRO_BITMAP* redRuby_png;
};

#endif