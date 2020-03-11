#ifndef EGG_H
#define EGG_H
#include <graphics.h>
#include "Ingredient.h"

class Egg:public Ingredient{

    public:
        Egg(int x1, int y1, int x2, int y2);

        int draw();

        int undraw();

};

#endif
