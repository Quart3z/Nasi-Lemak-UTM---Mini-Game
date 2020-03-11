#include <iostream>
#include <graphics.h>
#include <string>
#include <cstdlib>
#include <windows.h>
#include "Game.h"

using namespace std;

int const screenWidth = 1072;
int const screenHeight = 576;

string const main_menu = "main_menu.jpg";
string const help = "help.jpg";

// Coordinates of cursor
int mx, my;

// Display the main menu page
int draw_menu(){

    // Display the image based on the location of the 4 corners
    readimagefile(main_menu.data(), 0, 0, screenWidth, screenHeight);

    while(1){

        // Detect mouse click
        getmouseclick(WM_LBUTTONDOWN, mx, my);

        // Display Game page
        if((mx > 132) && (mx < 954) && (my > 218) && (my < 274)){
            return 0;
        }

        // Display Help page
        else if ((mx > 218) && (mx < 865) && (my > 301) && (my < 352)){
            return 1;
        }

        // Exit the program
        else if ((mx > 362) && (mx < 738) && (my > 381) && (my < 429)){
            return 2;
        }

        else if((mx > 881) && (mx < 893) && (my > 123) && (my < 129)){
             readimagefile("ee.jpg", 0, 355, 250, 555);
        }

    }

}

// Display the help page
int draw_help(){

    // Function for display
    readimagefile(help.data(), 0, 0, screenWidth, screenHeight);

    // Cursor finding
    while(1){

        // Get the coordination of cursor
        getmouseclick(WM_LBUTTONDOWN, mx, my);

        // Back to main menu as the the exit button is pressed
        if((mx > 1040) && (mx < 1063) && (my > 9) && (my < 31)){

            return 1;

        }
    }
}

// The main shit happens here
int main(){

    // Create the window for the game
    initwindow(screenWidth, screenHeight, "Nasi Lemak Stall");

    PlaySound("bgm_main.wav", NULL, SND_ASYNC | SND_LOOP);

    // Cursor finding
    while(1){

        // Display based on the return value of "draw_menu" function
        switch(draw_menu()){

            // Draw game
            case 0:{

                // The game run at this shit
                Game gameObj(screenWidth, screenHeight);

                if(gameObj.game_run() == 1){
                    break;
                }

            }

            // Draw help page
            case 1:{

                if(draw_help() == 1){
                    break;
                }

            }

            // Exit the game
            case 2:{
                return 0;
            }

        }
    }

    getch();
}



