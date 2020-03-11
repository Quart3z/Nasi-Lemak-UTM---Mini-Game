#ifndef RENDANG_H
#define RENDANG_H
#include <graphics.h>
#include "Ingredient.h"

class Rendang:public Ingredient{

    public:
        Rendang(int x1, int y1, int x2, int y2);

        int draw();

        int undraw();

};

#endif

