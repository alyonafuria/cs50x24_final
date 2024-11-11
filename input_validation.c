#include "sudoku_lib.h"

int is_argc_correct(int argc)
{
    if (argc != 82)
    {
        write (1, "should contain 81 digit\n", 24);
        return (0);
    }
    return (1);
}

int is_input_single_chars(int argc, char *argv[])
{
    int i;

    i = 1;
    while (i < argc)
    {
        if (!argv[i][1])
            i++;
        else
        {
            write(1, "inputs should be single digits\n", 31);
            return (0);
        }
    }
    return (1);
}

int is_input_digit(int argc, char *argv[])
{
    int i;

    i = 1;
    while (i < argc)
    {
        if (argv[i][0] > 47 && argv[i][0] < 58)
            i++;
        else
        {
            write(2, "Input should be numbers\n", 24);
            return (0);
        }
    }
    return (1);
}

int is_input_valid(int argc, char *argv[])
{
    if (is_argc_correct(argc) && is_input_single_chars(argc, argv) && is_input_digit(argc, argv))
        return (1);
    else
        return (0);
}
