#include <iostream>
#include <graphics.h>
#include <string>
#include "Kitchen.h"

// Return the combination to game_run function
int Kitchen::selection(){

    temp = 0;

    while(1){

        getmouseclick(WM_LBUTTONDOWN, mx, my);
        if((mx > 388) && (mx < 484) && (my > 404) && (my < 486)){
            readimagefile("sent.jpg", 388, 404, 484, 486);

            ing1 = ing2 = ing3 = ing4 = ing5 =0;

            return temp;
        }

        else{

            combination();

            // If the exit button pressed, return 1 to game_run function
            if(temp == 1){
                return 1;
            }
        }

    }

}

// Selection and deselection of the dishes combination
int Kitchen::combination(){

    Ingredient *io1 = new Rendang(884, 136, 1061, 315);
    Ingredient *io2 = new Egg(706, 136, 881, 315);
    Ingredient *io3 = new Cucumber(526, 136, 703, 315);
    Ingredient *io4 = new Sambal(447, 239, 514, 315);
    Ingredient *io5 = new Rice(860, 381, 1069, 575);

    if ((mx > 884) && (mx < 1061) && (my > 136) && (my < 315)){
        // Select rendang
        if(ing1 == 0){
            ing1 = 1;
            temp += io1->draw();
        }
        // Deselect rendang
        else{
            ing1 = 0;
            temp += io1->undraw();
        }
    }

    else if ((mx > 706) && (mx < 881) && (my > 136) && (my < 315)){
        // Select egg
        if(ing2 == 0){
            ing2 = 1;
            temp += io2->draw();
        }
        // Deselect egg
        else{
            ing2 = 0;
            temp += io2->undraw();
        }
    }

    else if ((mx > 526) && (mx < 703) && (my > 136) && (my < 315)){
        // Select cucumber
        if(ing3 == 0){
            ing3 = 1;
            temp += io3->draw();
        }
        // Deselect cucumber
        else{
            ing3 = 0;
            temp += io3->undraw();
        }
    }

    else if ((mx > 447) && (mx < 514) && (my > 239) && (my < 315)){
        // Select sambal
        if(ing4 == 0){
            ing4 = 1;
            temp += io4->draw();
        }
        // Deselect sambal
        else{
            ing4 = 0;
            temp += io4->undraw();
        }
    }

    else if ((mx > 861) && (mx < 1069) && (my > 382) && (my < 575)){
        // Select rice
        if(ing5 == 0){
            ing5 = 1;
            temp += io5->draw();
        }
        // Deselect rice
        else{
            ing5 = 0;
            temp += io5->undraw();
        }
    }

    // Exit button pressed
    else if((mx > 1040) && (mx < 1063) && (my > 9) && (my < 31)){
        temp = 1;
    }

    // Free the memories
    delete io1;
    delete io2;
    delete io3;
    delete io4;
    delete io5;

}
