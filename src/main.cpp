#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
  std::cout << "====================BANK MANAGENT SYSTEM====================\n";
  
  int money = 0, user_command; 
  
  char currency;
  std::cout << "Enter your currency (symbol, ex: $ for dollar): ";
  std::cin >> currency;

  std::cout << "Successfully logged in\n";
  std::cout << "Your money is now 0" << currency << "\n";

  do {
    std::cout << "\n1: Deposit\n";
    std::cout << "2: Withdraw\n";
    std::cout << "3: Exit\n";
    std::cin >> user_command;

    switch(user_command) {
      case 1 /*Deposit*/:
        int money_to_deposit;
        std::cout << "How much money do you want to deposit?\n";
        std::cin >> money_to_deposit;

        money += money_to_deposit;
        std::cout << "Deposited " << money_to_deposit << currency << "\n";
        std::cout << "Your money is now " << money << currency << ".\n";

        break;
      case 2 /*Withdraw*/: 
        int money_to_withdraw;
        std::cout << "How much money do you want to withdraw?\n";
        std::cin >> money_to_withdraw;

        money -= money_to_withdraw;
        std::cout << "Withdrawed " << money_to_withdraw << currency << "\n";
        std::cout << "Your money is now " << money << currency << ".\n";

        break;
      case 3 /*Exit*/:
        std::cout << "Exiting...";
        exit(0);
        
        break;
    };
  } while(user_command != 3);

  return 0;
}
