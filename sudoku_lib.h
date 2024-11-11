#ifndef SUDOKU_LIB_H
#define SUDOKU_LIB_H

#include <unistd.h>

//input_validation.c
int	is_argc_correct(int argc);
int	is_input_single_chars(int argc, char *argv[]);
int	is_input_digit(int argc, char *argv[]);
int	is_input_valid(int argc, char *argv[]);

//user_input_getter.c
void	get_inputs(int inputs[9][9], char *argv[]);

//solver.c
int	handle_solving(int inputs[9][9], int row, int column);

//solution_validation.c
int	check_row(int inputs[9][9], int row, int option);
int	check_column(int inputs[9][9], int column, int option);
int	check_box(int inputs[9][9], int row, int column, int option);
int	is_solution_valid(int inputs[9][9], int row, int column, int option);

//print_solution.c
void	print_grid_row(int inputs[9][9], int row);
void	print_solution(int inputs[9][9], int row);

#endif
