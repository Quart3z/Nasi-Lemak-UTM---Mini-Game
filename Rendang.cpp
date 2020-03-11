#include "Rendang.h"

Rendang::Rendang(int x1, int y1, int x2, int y2):Ingredient(x1, y1, x2, y2){}

int Rendang::draw(){

    readimagefile("selected_rendang.jpg", x1, y1, x2, y2);
    return 10;

}

int Rendang::undraw(){

    readimagefile("rendang.jpg", x1, y1, x2, y2);
    return -10;

}
