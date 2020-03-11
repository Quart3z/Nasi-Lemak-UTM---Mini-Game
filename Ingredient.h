#ifndef INGREDIENT_H
#define INGREDIENT_H

class Ingredient{

    protected:
        int x1, y1, x2, y2;

    public:

        Ingredient(int _x1, int _y1, int _x2, int _y2);

        virtual int draw(void) = 0;

        virtual int undraw(void) = 0;

};

#endif
