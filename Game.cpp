#include <iostream>
#include <stdio.h>
#include <graphics.h>
#include <cstdlib>	// for rand and srand
#include <ctime>	// for the time function
#include "Game.h"
#include "Kitchen.h"
#include <iomanip>
#include <future>
#include <chrono>
#include <numeric>

using namespace std;

// Draw the assets
void Game::draw(){

    // Display the game scene and other assets
    readimagefile("stall.jpg", 0, 0, width, height);
    readimagefile("rendang.jpg", 884, 136, 1061, 315);
    readimagefile("egg.jpg", 706, 136, 881, 315);
    readimagefile("cucumber.jpg", 526, 136, 703, 315);
    readimagefile("sambal.jpg", 447, 239, 514, 315);
    readimagefile("rice.jpg", 860, 381, 1069, 575);
    readimagefile("send.jpg", 388, 404, 484, 486);

}

// The shit happens here
int Game::game_run(){

    // Start the clock
    time_t tbegin,tend;
    int texec = 0;
    time(&tbegin);

   // PlaySound("test.wav", NULL, SND_LOOP | SND_ASYNC);

    // Run the game as long as life exists
    while(life > 0){

        chrono::steady_clock co;
        auto start = co.now();

        // Draw the assets
        draw();

        // Get the code of the order from customer
        orderObj.order_system(given_code);

        // This mess used to converting the damn int -> string -> char*
        std::string scoreS = "Score: "+ std::to_string(score);
        scoreC = new char[scoreS.size()+1];
        copy(scoreS.begin(), scoreS.end(), scoreC);
        scoreC[scoreS.size()] = '\0';

        std::string lifeS = "Life: "+ std::to_string(life);
        char* lifeC = new char[lifeS.size()+1];
        copy(lifeS.begin(), lifeS.end(), lifeC);
        lifeC[lifeS.size()] = '\0';

        // Print both score and life
        settextstyle(10, 0, 4);
        outtextxy(408, 13, scoreC);

        settextstyle(10, 0, 4);
        outtextxy(708, 13, lifeC);

        auto end = co.now();
        auto time_span = static_cast<chrono::duration<double>>(end - start);
        cout << time_span.count() << endl;


        // Get the dish from the input of the player
        dish = kitchenObj->selection();

        if(dish == 1){

            // Stop the music
           // PlaySound(NULL, NULL, SND_NODEFAULT);
            return 1;
        }

        check_correct();

    }

    // End the clock
    time(&tend);
    texec = difftime(tend,tbegin);

    std::string timeS = std::to_string(texec);
    timeC = new char[timeS.size()+1];
    copy(timeS.begin(), timeS.end(), timeC);
    timeC[timeS.size()] = '\0';

    while(1){

        // Print the game over page
        readimagefile("game_over.jpg", 0, 0, width, height);
        getmouseclick(WM_LBUTTONDOWN, mx, my);

        std::string scoreS = std::to_string(score);
        scoreC = new char[scoreS.size()+1];
        copy(scoreS.begin(), scoreS.end(), scoreC);
        scoreC[scoreS.size()] = '\0';

        settextstyle(10, 0, 3);
        outtextxy(590, 210, scoreC);

        settextstyle(10, 0, 3);
        outtextxy(590, 265, timeC);

        if ((mx > 321) && (mx < 410) && (my > 453) && (my < 500)){

            // Stop the music
            //PlaySound(NULL, NULL, SND_NODEFAULT);
            return 1;
        }

    }

    delete kitchenObj;

    getch();

}

// Check whether the dish created is same with the order
bool Game::check_correct(){

    if(dish == dish_code[given_code]){

        score++;
        return 1;

    }

    else{

        life--;
        return 0;
    }

}
