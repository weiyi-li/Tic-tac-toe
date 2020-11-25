# Tic-tac-toe
A mini game tic-tac-toe implemented in C.

## Problem statement
To ask players to input tokens on the plate using the numeric keys. Since the 9 squares on the plate are marked with integers from 1 to 9 respectively, players need to input tokens by tapping numeric keys 1 - 9. The program should judge that player 1 or player 2 have won the game when 3 tokens with the same type are in a line. And the program should consider it as a draw when the 9 squares are filled with tokens but without the 3 same type tokens in a line. Besides, illegal inputs should be detected and reported, which are any inputs other than the integer numbers from 1 to 9. Repeated inputs are also considered as illegal and will be reported if input.

## Analysis
(Assume that the user only inputs valid data.)  
### Inputs
Integer numbers from 1 to 9  
### Outputs
Two kinds of tokens **O** and **X** in 9 squares separately  
### Additional requirements or constraints
The same number cannot be chosen repeatedly  

## Design
1. Define 2 variables: _row_ and _column_  
_row_ is assigned as 7 and it represents the numbers in a single row.  
_column_ is assigned as 3 and it represents the numbers in a single column.  

2. Declare a series of functions and variables:  
_char p [row] [column]_ means declaring a 2D array of _row*column_.  
_int board(char p [row] [column])_ means that the 2D array should be inserted into an assigned integer as the game board.  
_char order (int a)_ means that an integer a should be inserted into a character order.  
_int judge(char p [row] [column])_ means that the 2D array should be inserted into an integer as a judgment basis.  
_int sum = 1_ represents an integer assigned as 1.  
_int operate(char p [row] [column], int sum)_ means declaring a function operate with elements _char p row column_ and _int sum_.  
_int x_ represents an integer _x_, which refers to a number in a single row, or the number of columns.  
_int y_ represents an integer _y_, which refers to a number in a single column, or the number of rows.  
_char s = 48_ means assigning a character _s_ as 48 according to ASCLL, which equals to 0 decimal.  
_int ch_ represents an integer _ch_.  
_int num = 0_ means that the integer is assigned as 0.  

3. Design an opening interface of the game.  

4. Build a single judging loop to guide players to start the game and lead to the main interface
of the game.  

5. Print out the game board in the main interface using defined 2D array.  

6. Define the game rules about placing the tokens.  

7. Evaluate the logical judgments to define whether the game is a win, a lose or a draw.  

8. Detect and report if there is an illegal input.  

