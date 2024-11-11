#include "sudoku_lib.h"

void get_inputs(int inputs[9][9], char *argv[])
{
    int i;
    int inputs_i;
    int inputs_j;

    i = 1;
    inputs_i = 0;
    while (inputs_i < 9)
    {
        inputs_j = 0;
        while (inputs_j < 9)
        {
            inputs[inputs_i][inputs_j] = argv[i][0] - '0';
            i++;
            inputs_j++;
        }
        inputs_i++;
    }
}
