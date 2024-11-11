# Sudoku Solver in C
#### Video Demo:  <https://youtu.be/mmYQWSOOkXw>
#### Description:

This project is a Sudoku solver written in C. It uses a backtracking algorithm that attempts possible numbers in each empty cell of the puzzle and backtracks to previous choices whenever it encounters an invalid placement. This algorithm is ideal for solving puzzles like Sudoku because it systematically explores potential solutions while discarding choices that lead to dead ends. The code is organized into several files, each handling a specific part of the program. Below is an explanation of what each file does and how it contributes to the overall functionality of the program.


#### File Descriptions
The file **input_validation.c** is responsible for checking that the input provided by the user follows the correct format. Since a Sudoku puzzle requires numbers from 1 to 9 arranged in a 9x9 grid, this file’s job is to confirm that the input includes exactly the right number of values and that each one is a valid digit or a placeholder for an empty space. First, it checks that there are enough arguments for a full 9x9 grid, ensuring that each entry is a single character. Then, by comparing each character to the ASCII table, the program confirms that each one is either a digit from 1 to 9 or a placeholder symbol for an empty cell. If any input is invalid, input_validation.c prints an error message directly to the command line using the write() function. This approach makes it possible to avoid extra libraries by relying on the unistd.h library to handle output in a minimalistic way.


The **user_input_getter.c** file takes the validated input from the command line and converts it into a format that the program can use. This file processes the input by mapping it into a 2d array of integers that represents the Sudoku grid. The 2D array format is especially helpful for a Sudoku solver because it makes it easy to access each cell’s row and column, which is essential for the next steps of the solution.


The **solver.c** file is where the main logic for the Sudoku solver is implemented, specifically the backtracking algorithm. Backtracking works by filling in each empty cell one by one, trying numbers from 1 to 9, and checking if each number placement follows the rules of Sudoku. When the program finds a valid number, it moves on to the next empty cell. If no valid numbers are available, it backtracks to the previous cell and tries a different number there. The file also handles an edge case where the row index is greater than 9, which signals that the grid has been fully processed and that a solution has been found. Backtracking is an ideal solution for this type of problem because it’s efficient and works without unnecessary checks. 


The file **solution_validation.c** contains functions that verify each number placement to ensure it follows Sudoku rules. Each potential number placement must meet the row, column and 3x3 subgrid that are unique to Sudoku. The function checks if the proposed number is already present in the same row, column or 3x3 subgrid, ensuring it doesn’t break the puzzle rules. The validation functions return 1 if the placement is acceptable and 0 if it’s not, and all the functions must return 1 for the correct option placement.


The **print_solution.c** file is dedicated to displaying the solved puzzle in a readable format in the command line. This file formats the grid with ASCII characters, creating a clean, structured display that matches the traditional layout of a Sudoku board. Rows and columns are aligned, with dividers between the 3x3 subgrids to make it easier for the user to check the solution.


The **main.c** file ties all the other files together, managing the overall flow of the program. It starts by calling functions to validate the input, prepares the 2D grid, and then runs the backtracking algorithm to solve the puzzle. Once the puzzle is solved, the result is displayed using the print function to show the solution in an easy-to-read format.


Finally, **sudoku_lib.h** is a header file that organizes function declarations and includes the unistd.h library for handling command-line output. Having this header file keeps the function prototypes and dependencies in one place, making the code easier to manage and compile.


#### Design Choices
This project uses a modular approach, meaning that each part of the program is handled by a specific file. This structure makes the program easier to test, debug, and expand if needed. One design choice was to use only the unistd.h library for output, which allows direct control of command-line output using write() to keep the program lightweight and efficient. This approach keeps the project simple and avoids reliance on unnecessary libraries.


For solving the puzzle, I chose backtracking because it’s a straightforward method that works well for Sudoku. 


Overall, working on this project gave me valuable experience in designing and implementing algorithms for complex problems. By splitting the program into smaller functions, I kept the code organized and easy to work with. Through this project, I improved my skills with backtracking, recursion, and modular programming in C.
