#ifndef CUCUMBER_H
#define CUCUMBER_H
#include <graphics.h>
#include "Ingredient.h"

class Cucumber:public Ingredient{

    public:
        Cucumber(int x1, int y1, int x2, int y2);

        int draw();

        int undraw();

};

#endif
