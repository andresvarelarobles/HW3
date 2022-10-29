/*
Andres Varela Robles
CSCI 3010: Homework 3
*/

#include "User.h"
#include "TextUI.h"
#include <iostream>
#include <string>
#include <vector>

TextUI::TextUI(){
    options_.push_back("0");
    options_.push_back("buyer");
    options_.push_back("seller");
}

std::string TextUI::Menu(){
    std::string choice;
    while (choice != options_[0] && choice != options_[1] && choice != options_[2]){
        std::cout << "Welcome to my store would you like to be a buyer, seller or leave"<<std::endl;
        std::cout<<"0: leave store"<<std::endl;
        std::cout<<"1: buyer"<<std::endl;
        std::cout<<"2: seller"<<std::endl;
        std::cin >> choice;
    }
    return choice;
}

void TextUI::Route(std::string choice){
    if (choice == options_[1]){
        Seller seller;
        seller.addProductForSale();
    }
    if (choice == options_[2]){
        Buyer buyer;
        buyer.BuyProductForSale();
    }
}
