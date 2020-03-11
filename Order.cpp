#include <iostream>
#include "Order.h"

// Manage the ordering box system
int Order::order_system(int& given_code){

    // Menu :
    // 1 : nasi lemak biasa            - rice + sambal + egg + cucumber
    // 2 : nasi lemak rendang telur    - rice + rendang + egg + cucumber
    // 3 : nasi lemak telur            - rice + sambal + egg
    // 4 : nasi lemak rendang          - rice + rendang + egg
    // 5 : nasi rendang                - rice + rendang + cucumber

	unsigned seed = time(0);	// get the system time
	srand(seed);				// seed the random number generator

    int i = (rand() % (5));

    draw_order(i);

    given_code = i;

}

// Display the orders in the game
int Order::draw_order(int i){

    readimagefile(menu[i].data(), 85, 151, 252, 229);
    return i;

}


