#include "sudoku_lib.h"

void    print_grid_row(int inputs[9][9], int row)
{
    int g_col;
    int j;
    char    c;

    g_col = 0;
    j = 0;
    while (g_col < 13)
    {
        if (g_col == 0 || g_col % 4 == 0)
            write(1, "|", 1);
        else
        {
            c = inputs[row][j] + '0';
            write(1, &c, 1);
            j++;
        } 
        g_col++; 
    }
    j = 0;
    write(1, "\n", 1); 
}

void    print_solution(int inputs[9][9], int row)
{
    int g_row;
    
    g_row = 0;
    while (g_row < 13)
    {
        if (g_row == 0 || g_row == 12)
            write(1, "o-----------o\n", 14);  
        else 
            if (g_row == 4 || g_row == 8)
            write (1, "|---+---+---|\n", 14);
        else
        {
            print_grid_row(inputs, row);
            row++;
        } 
        g_row++; 
    }
}
