#include"stdio.h"
#include"stdlib.h"
#include"windows.h"
#define row 7 /*Define a variable called row and assign it as 7*/
#define column 3 /*Define a variable called column and assign it as 3*/

int main()
{
	char p[row][column]; /*Declare a 2D array of row*column*/
	int board(char p[row][column]); /*Insert the 2D array into an assigned integer as the game board*/
	char order(int a); /*Insert integer a into a character order*/
	int judge(char p[row][column]); /*Insert the 2D array into an integer as a judgment basis*/
	int sum = 1; /*Assign an integer sum as 1*/
	int operate(char p[row][column], int sum); /*Declare a function operate with elements char p[row][column] and int sum*/
	int x; /*Declare an integer x, which refers to a number in a single row, or the number of columns*/
	int y; /*Declare an integer y, which refers to a number in a single column, or the number of rows*/
	char s = 48; /*Assign a character s as 48 according to ASCLL, which equals 0 decimal*/
	int ch; /*Declare an integer ch*/
	int num = 0; /*Assign an integer num as 0*/

loop:printf("Press 1 to start the game\n"); /*Print "Press 1 to start the game" on the screen*/
	printf("Tic-tac-toe\n"); /*Print the name of the game*/
	scanf("%d", &ch); /*Read the value of the integer ch*/
	for (x = 1; x <= 6; x++) /*If the number of columns is no more than 6, the number of columns x plus one*/
	for (y = 0; y<3; y++) /*If the number of rows is less than 3, the number of rows y plus one*/
	{
		if (x % 2 == 0) /*If integer x is an even number*/
			p[x][y] = ' '; /*Assign the number in the 2D array*/
		else
		{
			s = s + 1; /*s plus 1*/
			p[x][y] = s; /*The number in the 2D array will be assigned as s*/
		}
	}
	switch (ch) /*Add a switching module at the beginning of the game*/
	{
	case 1: /*There is only 1 case in this switching module*/
		while (1) /*While input 1 in the module*/
		{
			board(p);
			operate(p, sum); /*Start operating these following functions*/
			sum++;
			judge(p);
		}
		break; /*Stop the loop and progress to next function*/
	}
}
int board(char p[row][column]) /*2D integer array char p[row][column]*/
{
	int x; /*Call a variable x*/
	int y; /*Call a variable y*/
	system("cls"); /*Clear up the interface*/
	printf("Tic-tac-toe\n"); /*Show the game title "Tic-tac-toe"*/
	printf("##########\n"); /*Show split line on the board*/
	for (x = 1; x <= 6; x++) /*Restrict the length of the row to 7*/
	{
		for (y = 0; y<3; y++) /*Restrict the length of the column to 3*/
			printf(" %c ", p[x][y]); /*Show every number on the board*/
		printf("\n"); /*Start a new line*/
	}
	printf("##########\n"); /*Show split line on the board*/
}

char order(int a) /**/
{
	if (a % 2 == 0) /*If integer a is an even number*/
		return 'O'; /*Print 'O' in the square*/
	else
		return 'X'; /*Print 'X' in the square*/
}

int judge(char p[row][column])
{
	int x; /*Call a variable x*/
	int y; /*Call a variable y*/
	for (x = 1; x <= 6; x++) /*State the conditions for x*/
	{
		for (y = 0; y<3; y++) /*State the conditions for y*/
		if (p[2][0] == p[2][1] && p[2][0] == p[2][2] && p[2][0] != ' ') /*Operate logical judgment*/
		{
			printf("%c wins!\n", p[2][0]); /*Show who has won the game*/
			exit(0); /*Exit for another judgment*/
		}
		if (p[2][0] == p[4][0] && p[2][0] == p[6][0] && p[2][0] != ' ') /*Operate logical judgment*/
		{
			printf("%c wins!\n", p[2][0]); /*Show who has won the game*/
			exit(0); /*Exit for another judgment*/
		}
		if (p[2][0] == p[4][1] && p[2][0] == p[6][2] && p[2][0] != ' ') /*Operate logical judgment*/
		{
			printf("%c wins!\n", p[2][0]); /*Show who has won the game*/
			exit(0); /*Exit for another judgment*/
		}
		if (p[2][1] == p[4][1] && p[2][1] == p[6][1] && p[2][1] != ' ') /*Operate logical judgment*/
		{
			printf("%c wins!\n", p[2][1]); /*Show who has won the game*/
			exit(0); /*Exit for another judgment*/
		}
		if (p[2][2] == p[4][1] && p[2][2] == p[6][0] && p[2][2] != ' ') /*Operate logical judgment*/
		{
			printf("%c wins!\n", p[2][2]); /*Show who has won the game*/
			exit(0); /*Exit for another judgment*/
		}
		if (p[4][0] == p[4][1] && p[4][0] == p[4][2] && p[4][0] != ' ') /*Operate logical judgment*/
		{
			printf("%c wins!\n", p[2][1]); /*Show who has won the game*/
			exit(0); /*Exit for another judgment*/
		}
		if (p[6][0] == p[6][1] == p[6][2] && p[6][1] && p[6][0] != ' ') /*Operate logical judgment*/
		{
			printf("%c wins!\n", p[6][1]); /*Show who has won the game*/
			exit(0); /*Exit for another judgment*/
		}
		if (p[2][2] == p[4][2] && p[2][2] == p[6][2] && p[2][2] != ' ') /*Operate logical judgment*/
		{
			printf("%c wins!\n", p[2][2]); /*Show who has won the game*/
			exit(0); /*Exit for another judgment*/
		}
	}
}
int operate(char p[row][column], int sum)
{
	char n; /*Declare a character n*/
	int x; /*Call a variable x*/
	int y; /*Call a variable y*/
	printf("Enter integer 1-9\nto input tokens 'O' or 'X'\n"); /*Print the instruction on the screen*/
loop: scanf("%c", &n); /*Read the values of char n*/
	fflush(stdin); /*Clear the buffer area*/
	for (x = 1; x <= 6; x++) /*Restrict the length of the row to 7*/
	for (y = 0; y < 3; y++) /*Restrict the length of the column to 3*/
	if (p[x][y] == n) /*If the number in the 2D array equals to integer n*/
	{
		if (p[x + 1][y] != ' ') /*If the number on the right doesn¡¯t equal to a number in the 2D array*/
		{
			printf("Illegal input!\nPlease enter in a blank space."); /*Report illegal input*/
			goto loop; /*Back to the loop*/
		}
		p[x + 1][y] = order(sum);
		break; /*Stop the loop and progress to next function*/
	}
	return 0; /*Return the output*/
}