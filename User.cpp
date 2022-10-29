/*
Andres Varela Robles
CSCI 3010: Homework 3
*/
#include "User.h"
#include "TextUI.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>
#include <algorithm>
#include <cfloat>
#include <cmath>
#include <fstream>

User::User(){
 // used https://www.geeksforgeeks.org/csv-file-management-using-c/ to work on my csv files
  // file pointer
    std::fstream fout;
    // opens an existing csv file or creates a new file.
    fout.open("user.csv", std::ios::out | std::ios::app);
    std::string answer;
    std::cout << "would you like to make an account and sign in?((yes) or (no)?)"<< std::endl;
    std::cin>>answer;
    if(answer!= "yes" || answer!= "no" || answer!= "y" || answer!= "n"){
        std::cout<<"please type in yes, no, y, or n";
        std::cin>>answer;
    }
    if(answer=="yes" || answer =="y"){
         // Read the input
    for (int i = 0; i < 3; i++) {
  
        std::cin >> phone_no_
            >> username_
            >> address_
            >> account_balance_;
           
        // Insert the data to file
        fout << phone_no_ << ", "
             << username_ << ", "
             << address_ << ", "
             << account_balance_ 
             << "\n";
    }
        
    }

}

void Seller::addProductForSale(){
std::fstream fout;
    // opens an existing csv file or creates a new file.
    fout.open("item.csv", std::ios::out | std::ios::app);
    int answer;
    std::cout << "would you like to put an item for sale 0: yes, 1: check sell history, 2: exit"<< std::endl;
    std::cin>>answer;
    switch(answer){
    
    case 0:
        std::cout<<"What would you like to list to sell and it's price?(one at a time though)"<<std::endl;

        for (int i = 0; i < 1; i++) {

        std::cin >> item_name_
            >> item_cost_;
            
        // Insert the data to file
        fout << item_name_ << ", "
             << item_cost_ 
             << "\n";
    }
    std::cout<<"This item has been listed to sell"<<std::endl;

    case 1:

    case 2:
        
        break;
}
}

void Buyer::BuyProductForSale(){


}