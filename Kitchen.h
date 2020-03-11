#ifndef KITCHEN_H
#define KITCHEN_H
#include <string>
#include "Ingredient.h"
#include "Rendang.h"
#include "Egg.h"
#include "Cucumber.h"
#include "Sambal.h"
#include "Rice.h"

class Kitchen{

    private:
        // Coordinates of cursor
        int mx, my;

        // Status of selection, 1: selected, 0: no selected
        bool ing1 = 0;
        bool ing2 = 0;
        bool ing3 = 0;
        bool ing4 = 0;
        bool ing5 = 0;

        int temp;

    public:

        // Make the dish from selected ingredient(s)
        int selection();

        // Get the ingredients selected by the player
        int combination();

};

#endif // KITCHEN_H
