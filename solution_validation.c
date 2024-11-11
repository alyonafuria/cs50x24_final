#include "sudoku_lib.h"

int check_row(int inputs[9][9], int row, int option)
{
    int i;
    
    i = 0;
    while (i < 9)
    {
        if (inputs[row][i] == option)
            return (0);
        i++;       
    }
    return (1);
}

int check_column(int inputs[9][9], int column, int option)
{
    int i;
    
    i = 0;
    while (i < 9)
    {
        if (inputs[i][column] == option)
            return (0);
        i++;
    }
    return (1);
}

int check_box(int inputs[9][9], int row, int column, int option)
{
    int starting_row;
    int starting_column;
    int i;
    int j;

    starting_row = row - row % 3;
    starting_column = column - column % 3;
    i = 0;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            if (inputs[starting_row + i][starting_column + j] == option)
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int is_solution_valid(int inputs[9][9], int row, int column, int option)
{
    return (check_row(inputs, row, option) && check_column(inputs, column, option) && check_box(inputs, row, column, option));
}
