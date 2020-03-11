#include "Sambal.h"

Sambal::Sambal(int x1, int y1, int x2, int y2):Ingredient(x1, y1, x2, y2){}

int Sambal::draw(){

    readimagefile("selected_sambal.jpg", x1, y1, x2, y2);
    return 10000;

}

int Sambal::undraw(){

    readimagefile("sambal.jpg", x1, y1, x2, y2);
    return -10000;

}
