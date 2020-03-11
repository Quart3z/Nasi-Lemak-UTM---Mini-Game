#include "Rice.h"

Rice::Rice(int x1, int y1, int x2, int y2):Ingredient(x1, y1, x2, y2){}

int Rice::draw(){

    readimagefile("selected_rice.jpg", x1, y1, x2, y2);
    return 100000;

}

int Rice::undraw(){

    readimagefile("rice.jpg", x1, y1, x2, y2);
    return -100000;

}
