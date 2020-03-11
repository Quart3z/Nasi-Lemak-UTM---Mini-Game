#ifndef GAME_H
#define GAME_H
#include "Order.h"
#include "Kitchen.h"

class Game{

   private:

        // Coordinates of the cursor
        int mx, my;

        // Size of screen
        int width, height;

        // Generated dish from order
        int given_code = 0;

        // Available dishes codes
        int dish_code[5] = {111100, 101110, 110100, 100110, 101010};

        // Score
        int score = 0;
        char* scoreC;

        // The life of the player
        int life = 5;

        // Initial index of the dish input from player
        int dish = 0;

        char* timeC;

        // Order object
        Order orderObj;

        // Kitchen object
        Kitchen *kitchenObj = new Kitchen();

    public:

        // Constructor
        Game(int _width = 0, int _height = 0):width(_width), height(_height){};

        // The game runs at here
        int game_run();

        // Display the game page
        void draw();

        // Check whether the dish is same with the order
        bool check_correct();

        // Scoring system
        int score_system();

        char display_text();


};

#endif // GAME_H
