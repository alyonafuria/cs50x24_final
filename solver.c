#include "sudoku_lib.h"

int handle_solving(int inputs[9][9], int row, int column)
{
    int option;

    option = 1;
    if (row == 9)
        return (1);
    if (column == 9)
        return handle_solving(inputs, (row + 1), 0);
    if (inputs[row][column] != 0)
        return handle_solving(inputs, row, (column + 1));
    else
        while (option < 10)
        {
            if (is_solution_valid(inputs, row, column, option))
            {
                inputs[row][column] = option;
                if (handle_solving(inputs, row, (column + 1)))
                    return (1);
            }
            option++;
        }
        inputs[row][column] = 0;
        return (0);
}
