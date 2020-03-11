#include "Cucumber.h"

Cucumber::Cucumber(int x1, int y1, int x2, int y2):Ingredient(x1, y1, x2, y2){}

int Cucumber::draw(){

    readimagefile("selected_cucumber.jpg", x1, y1, x2, y2);
    return 1000;

}

int Cucumber::undraw(){

    readimagefile("cucumber.jpg", x1, y1, x2, y2);
    return -1000;

}
