/*
Andres Varela Robles
CSCI 3010: Homework 3
*/
#ifndef TEXTUI_H
#define TEXTUI_H
#include <iostream>
#include <string>
#include <vector>



class TextUI {
public:
    TextUI();
    std::string Menu();
    void Route(std::string choice);

private:
    std::vector<std::string> options_;
};

#endif // TEXTUI_H
