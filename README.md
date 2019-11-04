# Tic-tac-toe
A mini game tic-tac-toe implemented in C.
<h3><span lang="EN-US">Problem Statement</span></h3>

<p style=""><span lang="EN-US" style="font-size:11.0pt;">To ask players to input tokens
on the plate using the numeric keys. Since the 9 squares on the plate are
marked with integers from 1 to 9 respectively, players need to input tokens by
tapping numeric keys 1 - 9. The program should judge that player 1 or player 2
have won the game when 3 tokens with the same type are in a line. And the
program should consider it as a draw when the 9 squares are filled with tokens
but without the 3 same type tokens in a line. Besides, illegal inputs should be
detected and reported, which are any inputs other than the integer numbers from
1 to 9. Repeated inputs are also considered as illegal and will be reported if
input.</span><span lang="EN-US" style="font-size:14.0pt;"></span></p>

<h3><span lang="EN-US">Analysis</span></h3>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">(Assume that the user only inputs valid data.)</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">Inputs: </span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">Integer numbers from 1 to 9</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">Outputs: </span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;"><span style="">&nbsp; </span>Two kinds of
tokens “O” and “X” in 9 squares separately</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">Additional requirements or constraints: </span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;"><span style="">&nbsp; </span>The same number
cannot be chosen repeatedly.</span></p>

<h3><span lang="EN-US">Design</span></h3>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">1. Define 2 variables: </span><span lang="EN-US" style="font-size:9.5pt;">row</span><span lang="EN-US" style="font-size:11.0pt;"> and </span><span lang="EN-US" style="font-size:9.5pt;">column</span><span lang="EN-US" style="font-size:11.0pt;"></span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;"><span style="">&nbsp; </span></span><span lang="EN-US" style="font-size:9.5pt;">row</span><span lang="EN-US" style="font-size:11.0pt;"> is assigned as 7 and it
represents the numbers in a single row.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;"><span style="">&nbsp; </span></span><span lang="EN-US" style="font-size:9.5pt;">column</span><span lang="EN-US" style="font-size:11.0pt;"> is assigned as 3 and it
represents the numbers in a single column.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">2. Declare a series of functions and variables:</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;"><span style="">&nbsp; </span></span><span lang="EN-US" style="font-size:&#10;9.5pt;">char</span><span lang="EN-US" style="font-size:9.5pt;"> p[row][column] </span><span lang="EN-US" style="font-size:&#10;11.0pt;">means declaring a 2D array of </span><span lang="EN-US" style="font-size:9.5pt;">row</span><span lang="EN-US" style="font-size:11.0pt;"> * </span><span lang="EN-US" style="font-size:9.5pt;">column</span><span lang="EN-US" style="font-size:11.0pt;">.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:9.5pt;">int</span><span lang="EN-US" style="font-size:9.5pt;"> board(</span><span lang="EN-US" style="font-size:9.5pt;">char</span><span lang="EN-US" style="font-size:9.5pt;"> p[row][column]) </span><span lang="EN-US" style="font-size:11.0pt;">means that the 2D
array should be inserted into an assigned integer as the game board*/</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:9.5pt;">char</span><span lang="EN-US" style="font-size:9.5pt;"> order(</span><span lang="EN-US" style="font-size:9.5pt;">int</span><span lang="EN-US" style="font-size:9.5pt;"> a) </span><span lang="EN-US" style="font-size:11.0pt;">means that an integer a should be inserted into a
character </span><span lang="EN-US" style="font-size:9.5pt;">order</span><span lang="EN-US" style="font-size:11.0pt;">.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:9.5pt;">int</span><span lang="EN-US" style="font-size:9.5pt;"> judge(</span><span lang="EN-US" style="font-size:9.5pt;">char</span><span lang="EN-US" style="font-size:9.5pt;"> p[row][column]) </span><span lang="EN-US" style="font-size:11.0pt;">means that the 2D
array should be inserted into an integer as a judgment basis.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:9.5pt;">int</span><span lang="EN-US" style="font-size:9.5pt;"> sum = 1 </span><span lang="EN-US" style="font-size:11.0pt;">represents an integer </span><span lang="EN-US" style="font-size:9.5pt;">sum</span><span lang="EN-US" style="font-size:11.0pt;"> assigned as 1*/</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:9.5pt;">int</span><span lang="EN-US" style="font-size:9.5pt;"> operate(</span><span lang="EN-US" style="font-size:9.5pt;">char</span><span lang="EN-US" style="font-size:9.5pt;"> p[row][column], </span><span lang="EN-US" style="font-size:9.5pt;">int</span><span lang="EN-US" style="font-size:9.5pt;"> sum) </span><span lang="EN-US" style="font-size:11.0pt;">means declaring a
function operate with elements </span><span lang="EN-US" style="font-size:9.5pt;">char<span style=""> p[row][column]</span></span><span lang="EN-US" style="font-size:11.0pt;"> and int </span><span lang="EN-US" style="font-size:9.5pt;">sum</span><span lang="EN-US" style="font-size:11.0pt;">.</span><span lang="EN-US" style="font-size:9.5pt;"></span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:9.5pt;">int</span><span lang="EN-US" style="font-size:9.5pt;"> x </span><span lang="EN-US" style="font-size:11.0pt;">represents an integer </span><span lang="EN-US" style="font-size:9.5pt;">x</span><span lang="EN-US" style="font-size:11.0pt;">, which refers to a number in a single row, or the
number of columns.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:9.5pt;">int</span><span lang="EN-US" style="font-size:9.5pt;"> y </span><span lang="EN-US" style="font-size:11.0pt;">represents an integer</span><span lang="EN-US" style="font-size:9.5pt;"> y</span><span lang="EN-US" style="font-size:11.0pt;">, which refers to a number in a single column, or
the number of rows.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:9.5pt;">char</span><span lang="EN-US" style="font-size:9.5pt;"> s = 48 </span><span lang="EN-US" style="font-size:11.0pt;">means assigning a character </span><span lang="EN-US" style="font-size:9.5pt;">s</span><span lang="EN-US" style="font-size:11.0pt;"> as 48 according to ASCLL, which equals 0 decimal.</span><span lang="EN-US" style="font-size:9.5pt;"></span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:9.5pt;">int</span><span lang="EN-US" style="font-size:9.5pt;"> ch </span><span lang="EN-US" style="font-size:11.0pt;">represents an integer </span><span lang="EN-US" style="font-size:9.5pt;">ch</span><span lang="EN-US" style="font-size:11.0pt;">.</span><span lang="EN-US" style="font-size:9.5pt;"></span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:9.5pt;">int</span><span lang="EN-US" style="font-size:9.5pt;"> num = 0 </span><span lang="EN-US" style="font-size:11.0pt;">means that an integer </span><span lang="EN-US" style="font-size:9.5pt;">num</span><span lang="EN-US" style="font-size:11.0pt;"> is assigned as 0.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">3. Design an opening
interface of the game.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">4. Build a single
judging loop to guide players to start the game and lead to the main interface
of the game.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">5. Print out the game
board in the main interface using defined 2D array.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">6. Define the game
rules about placing the tokens.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">7. Evaluate the
logical judgments to define whether the game is a win, a lose or a draw.</span></p>

<p align="left" style=""><span lang="EN-US" style="font-size:11.0pt;">8. Detect and report
if there is an illegal input.</span></p>
