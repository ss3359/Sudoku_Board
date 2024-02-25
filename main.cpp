//
//  main.cpp
//  MorePracticeCPlusPlus
//
//  Created by Owner on 2/19/24.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <thread>
#include <random>
#include "PartTwoWork.hpp"
#include "Sudoku.hpp"

using namespace std;


int main() {
 
    //Variables Involved
    Sudoku s;
    int grid[9][9] = {{1,0,0,0,3,5,0,6},
                    {0,0,0,0,0,0,8,0,7},
                    {0,5,0,6,0,0,0,0,0},
                    {0,0,6,0,0,7,0,0,8},
                    {0,0,8,0,6,0,2,0,0},
        {4,0,0,9,0,0,6,0,0}, {0,0,0,0,0,4,0,2,0}, {2,0,4,0,0,0,0,0,0},{9,0,7,5,0,0,0,0,3}};

    //Start The Game
    s.PrintBoard(grid);
    cout<<"\n\n";
   //Solve The Sudoku Puzzle
   
    if(s.SolveTheBoard(grid)){
        cout<<"Solved Sudoku Board!"<<endl;
    }

    return 0;
}















/*
 Buffon's Needle Code
 int n;
 cout<<"Enter The Number of Trials: "<<endl;
 cin>>n;
 Needle(n);
 
 
 const double PI=3.14159265358;
 //
 ////Monte Carlo Simulation (Buffon's Needle)
 //
 //void Needle(int n){
 //    int count=1;
 //    std::default_random_engine generator;
 //    std::uniform_real_distribution<double> distribution(0.0,1.0);
 //    double yes=0.0, no=0.0, l=0.5,pyes=0.0;
 //    double xcord, ycord, angle, d1=0.0, d2=0.5, d3=1.0,t=0.5;
 //
 //    while(count<=n){
 //
 //        xcord=distribution(generator);
 //        ycord=distribution(generator);
 //        angle=PI*rand()/(RAND_MAX);
 //        double D1=abs(d1-ycord), D2=abs(d2-ycord), D3=abs(d3-ycord);
 //
 //        cout<<"xcord: "<<xcord<<endl;
 //        cout<<"ycord: "<<ycord<<endl;
 //        cout<<"angle: "<<angle<<endl;
 //        cout<<"D1: "<<D1<<endl;
 //        cout<<"D2: "<<D2<<endl;
 //        cout<<"D3: "<<D3<<endl;
 //
 //        cout<<"\n\n";
 //
 //        //Compute Distance of ycord and the markers d1, d2,d3 to see if the
 //        // needles crosses one of the vertical lines.
 //
 //        if(D1<=(l/2)*sin(angle) || D2<=(l/2)*sin(angle)|| D3<=(l/2)*sin(angle)){
 //
 //            yes++;
 //        }
 //        else{
 //            no++;
 //        }
 //
 //
 //        count++;
 //    }
 //
 //    cout<<"Number of Trials: "<<n<<endl;
 //    cout<<"Number of Crosses: "<<yes<<endl;
 //    cout<<"Number of Non-Crosses: "<<no<<endl;
 //
 //    cout<<"\n\n";
 //    pyes=yes/n;
 //    cout<<"Probability Cross: "<<pyes<<endl;
 //    cout<<"PI is Approx: "<<(2*l)/(pyes*t)<<endl;
 //}
 //
 //

 */



// Excess Code


/*
 //Fraction Class (Operator Overloading)
 class Fraction{
     
 public:
     int numerator;
     int denominator;
     Fraction(int a, int b){
         numerator=a;
         denominator=b;
     
     }
   
 };


 int GreatestCommonFactor(int a, int b){
     vector<int> factors1, factors2;
     int count=1, GCF=1;
     
     //Find The Factors of a.
     while(count<=a){
         if(a%count==0)
             factors1.push_back(count);
         count++;
     }
     //Reset The Count And Find The Factors of b.
     count=1;
     while(count<=b){
         if(b%count==0)
             factors2.push_back(count);
         count++;
     }
     
     //Find The GCF of a and b.
     for(int i=0; i<factors1.size(); i++){
         for(int j=0; j<factors2.size(); j++){
             if(factors1[i]==factors2[j])
                 GCF=factors1[i];
         }
     }
     return GCF;
 }

 int LeastCommonMultiple(int a, int b){
     int LCM=(a*b)/GreatestCommonFactor(a, b);
     
     return LCM;
 }


 Fraction operator+(Fraction a, Fraction b){
     Fraction total(0,1);
     int LCM=LeastCommonMultiple(a.denominator, b.denominator);
     
     if(LCM==a.denominator){
         b.numerator*=(LCM/b.numerator);
     }
     else if(LCM==b.denominator){
         a.numerator*=(LCM/a.denominator);
     }
     else{
         a.numerator*=(LCM/b.denominator);
         b.numerator*=(LCM/a.numerator);
     }
     
     total.numerator=a.numerator+b.numerator;
     total.denominator=LCM;

     return total;
 }

 bool IsPalindrome(string word){
     if(word==""){
         return true;
     }
     else{
         word=word.substr(word[0]+1, word[word.length()-1]);
         return IsPalindrome(word);
     }
 }
 */

//class Talent{
//
//public:
//
//    virtual void DoSomething(){
//        cout<<"I can do something"<<endl;
//    }
//};
//
//class Cook:public Talent{
//public:
//    void DoSomething(){
//        cout<<"Wanna See A Magic Trick?"<<endl;
//    }
//};
//class Sing:public Talent{
//
//public:
//    void DoSomething(){
//        cout<<"Let Me Sing A Song For You!"<<endl;
//    }
//};

