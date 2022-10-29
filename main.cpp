/*
Andres Varela Robles
CSCI 3010: Homework 3
*/


#include "TextUI.h"
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));


    TextUI menu;
    std::string choice;
    while (choice != "0"){
        choice = menu.Menu();
        menu.Route(choice);
    }
    return 0;
}
