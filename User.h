  /*
Andres Varela Robles
CSCI 3010: Homework 3
*/

#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <vector>

struct bot {
      long phone_;//use as the other users
      std::string user_;
      std::string addy_;
      double account_;
    
    friend std::ostream& operator<<(std::ostream& os, const bot &b){
        os << "phone mumber: " << b.phone_ << std::endl;
        os << "Name: " << b.user_ << std::endl;
        os << "address: " << b.addy_ << std::endl;
        os << "money in account: " << b.account_ << std::endl;
        os << std::endl;
        return os;
    }
};



  class User{
  public:
    User();
      // getter and setters for all fields
      // add applicable methods and use dynamic dispatch as needed
  private:
      long phone_no_;
      std::string username_;
      std::string address_;
      double account_balance_;
      // Add more fields as applicable
};
#endif // TEXTUI_H
  class Seller:public User{
  public:
      void addProductForSale();
  private:
      std::string item_name_;
      double item_cost_;
      // add more fields as applicable
};

  class Buyer:public User{
  public:
      void BuyProductForSale();
  private:
      // add more fields as applicable
};


 