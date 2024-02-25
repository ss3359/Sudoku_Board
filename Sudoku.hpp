//
//  Sudoku.hpp
//  MorePracticeCPlusPlus
//
//  Created by Owner on 2/22/24.
//

#ifndef Sudoku_hpp
#define Sudoku_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <random>
#include <iostream>
using namespace std;


class Sudoku{
    
//    int rows;
//    int columns;
//    int numbers[9]={1,2,3,4,5,6,7,8,9};
//    int grid[9][9];
    
public:
    bool IsInRow(int number, int grid[9][9], int FixedRowNumber);
    bool IsInColumn(int number, int grid[9][9], int FixedColumnNumber);
    bool IsInBox(int number, int grid[9][9], int RowNumber, int ColumnNumber);
    bool PrintNumberOnGrid(int number, int grid[9][9], int RowNumber, int ColumnNumber);
    void PrintBoard(int grid[9][9]);
    bool SolveTheBoard(int grid[9][9]);
};

#endif /* Sudoku_hpp */
