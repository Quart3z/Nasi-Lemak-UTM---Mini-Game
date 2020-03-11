#ifndef SAMBAL_H
#define SAMBAL_H
#include <graphics.h>
#include "Ingredient.h"

class Sambal:public Ingredient{

    public:
        Sambal(int x1, int y1, int x2, int y2);

        int draw();

        int undraw();

};

#endif
