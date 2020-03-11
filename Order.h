#ifndef ORDER_H
#define ORDER_H
#include <graphics.h>
#include <cstdlib>	// for rand and srand
#include <ctime>	// for the time function
#include <string>

class Order{

    private:

        // Available nasi lemak sets
        std::string menu[5] = {"menu_1.jpg", "menu_2.jpg", "menu_3.jpg", "menu_4.jpg", "menu_5.jpg"};

    public:

        // Ordering system
        int order_system(int& given_code);

        // Display the orders
        int draw_order(int i);


};

#endif // ORDER_H
