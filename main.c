#include "sudoku_lib.h"

int main(int argc, char *argv[])
{
    int inputs[9][9];

    if (is_input_valid(argc, argv))
    {
        get_inputs(inputs, argv);
        if (handle_solving(inputs, 0, 0))
        {
            print_solution(inputs, 0);
            return (0);
        }
        else
        {
            write(1, "no solution found\n", 18);
            return (0);
        }
    }
}
