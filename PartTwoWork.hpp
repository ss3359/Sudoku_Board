//
//  PartTwoWork.hpp
//  MorePracticeCPlusPlus
//
//  Created by Owner on 2/21/24.
//

#ifndef PartTwoWork_hpp
#define PartTwoWork_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <random>
#include <iostream>
using namespace std;

class Account{

    int id;
    double amount;
    double interest;
    string AccountType;
    string BankName;
    
public:
    void CreateAccount();
    void DepositMoney(double amount, double interest);
    void WithdrawMoney(double amount, double interest);
    
};


#endif /* PartTwoWork_hpp */
