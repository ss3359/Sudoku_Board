//
//  Sudoku.cpp
//  MorePracticeCPlusPlus
//
//  Created by Owner on 2/22/24.
//

#include "Sudoku.hpp"
#include <stdio.h>
#include <string>
#include <vector>
#include <random>
#include <iostream>
using namespace std;

bool Sudoku::IsInRow(int number, int grid[9][9], int FixedRowNumber){
    for(int j=0;j<9; j++){
        if(grid[FixedRowNumber][j]==number){
            return true;
        }
    }
    return false;
}

bool Sudoku::IsInColumn(int number, int grid[9][9], int FixedColumnNumber){
    
    for(int i=0;i<9; i++){
        if(grid[i][FixedColumnNumber]==number){
            return true;
        }
        
    }
    return false;
    
}

bool Sudoku::IsInBox(int number, int grid[9][9], int RowNumber, int ColumnNumber){
    int RowMin=RowNumber-(RowNumber%3);
    int ColumnMin=ColumnNumber-(ColumnNumber%3);
    for(int i=RowMin; i<RowMin+3; i++){
        for(int j=ColumnMin; j<ColumnMin+3; j++){
            if(grid[i][j]==number)
                return true;
        }
    }
    return false;
}

bool Sudoku::PrintNumberOnGrid(int number, int grid[9][9], int RowNumber, int ColumnNumber){
    
    bool result1 = IsInRow(number, grid, RowNumber), result2=IsInColumn(number, grid, ColumnNumber), result3= IsInBox(number, grid, RowNumber, ColumnNumber);
    return !(result1)&& !(result2)&&!(result3);
}

void Sudoku::PrintBoard(int grid[9][9]){
   
    //print the board
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<grid[i][j]<<"\t";
        }
        cout<<endl; 
    }
    
}


bool Sudoku::SolveTheBoard(int grid[9][9]){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(grid[i][j]==0){
                for(int m=1; m<=9; m++){
                    if(PrintNumberOnGrid(m, grid, i, j)){
                        grid[i][j]=m;
                        
                        if(SolveTheBoard(grid)==true){
                            return true;
                        }
                        else{
                            grid[i][j]=0; 
                        }
                    }
                }
                
                return false; 
            }
        }
    }
    return true;
}

