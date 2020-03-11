#ifndef RICE_H
#define RICE_H
#include <graphics.h>
#include "Ingredient.h"

class Rice:public Ingredient{

    public:
        Rice(int x1, int y1, int x2, int y2);

        int draw();

        int undraw();

};

#endif
