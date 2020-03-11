#include "Egg.h"

Egg::Egg(int x1, int y1, int x2, int y2):Ingredient(x1, y1, x2, y2){}

int Egg::draw(){

    readimagefile("selected_egg.jpg", x1, y1, x2, y2);
    return 100;

}

int Egg::undraw(){

    readimagefile("egg.jpg", x1, y1, x2, y2);
    return -100;

}
