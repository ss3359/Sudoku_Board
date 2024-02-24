//
//  PartTwoWork.cpp
//  MorePracticeCPlusPlus
//
//  Created by Owner on 2/21/24.
//

#include "PartTwoWork.hpp"
#include <iostream>
#include <fstream>

using namespace std;


void Account::CreateAccount(){
    ofstream BankFile("BankRecords.txt", ios::app);
    int count=1;
    
    while(BankFile.is_open()){
        cout<<"What Type of Account Are You Opening? "<<endl;
        cin>>AccountType;
        cout<<"How Much Money Are You Putting Into The Account?"<<endl;
        cin>>amount;
        cout<<"Back Of Preference?"<<endl;
        cin>>BankName;
        
        BankFile<<"Information For Account" <<count<<endl<<endl;
        BankFile<<"Account Type: "<<AccountType<<endl;
        BankFile<<"Amount: "<<amount<<endl;
        BankFile<<"Bank: "<<BankName<<endl;
        count+=1;
        BankFile.close();
    }
    

}

void Account::DepositMoney(double amount, double interest){
    double MoneyToDeposit,OldAmount;
    double PercentIncrease;
    cout<<"How much money do you want to Deposit?"<<endl;
    cin>>MoneyToDeposit;
    
    OldAmount=amount;
    amount+=MoneyToDeposit;
    PercentIncrease=(amount-OldAmount)/OldAmount;
    
    interest+=PercentIncrease;
    
    cout<<"New Remaining Balance: "<<amount;
    cout<<"New Interest Rate: "<<interest<<endl;
}
