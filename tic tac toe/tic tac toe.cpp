# include <iostream>
# include <cstdlib>
# include <time.h>
# include <windows.h>
using namespace std;
struct ticTacToe{
	void coloring(char x)
	{
		
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		switch (x)
		{
		case 'X':
			SetConsoleTextAttribute(h, 9);
			cout << x;
			SetConsoleTextAttribute(h, 6);
			// cout << endl;
			break;
		case 'O':
			SetConsoleTextAttribute(h, 5);
			cout << x;
			SetConsoleTextAttribute(h, 6);
			// cout << endl;
			break;
		default:
			SetConsoleTextAttribute(h, 6);
			cout << x;
		}
	}
void instructions()
{
	cout << "1.Game has two Players:player1 and player2\n" << "2.Player1 will enter O in square and Player2 will enter X in square\n" << "3.Any player who have 3 O's or 3 X's"
		"vertically,\n" << "horizontaly or diagonally first will win the game\n" << "4.If no player get 3 O's or 3 X's game will be draw\n" << "5.Player1 will have symbol O and user2 will have symbol X" << endl;
	cout << "\nEnter b or B to go back to main menu and p or P to play game:";
}
void boardValues(char board[3][3])
{
	int k = 49;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = k;
			k++;
		}
	}
}
void boardShow(char board[3][3])
{
	cout << "     |     |     " << endl << "  "; coloring(board[0][0]); cout << "  |  "; coloring(board[0][1]); cout << "  |  "; coloring(board[0][2]); cout << endl << "_____|_____|_____" << endl << "     |     |     " << endl;
	cout << "  "; coloring(board[1][0]); cout << "  |  "; coloring(board[1][1]); cout << "  |  "; coloring(board[1][2]);cout << endl << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl << "  "; coloring(board[2][0]); cout << "  |  "; coloring(board[2][1]);cout << "  |  "; coloring(board[2][2]); cout << endl;
	cout << "     |     |     " << endl << endl;
}
void valueAssign(char board[3][3], int position, int turn, int& numberOfTurns)
{
	int row, column;
	switch (position)
	{
	case 1:
		row = 0, column = 0;
		if (board[row][column] != 'X' && board[row][column] != 'O')
		{
			if (turn == 0)
			{
				board[row][column] = 'X';
			}
			else if (turn == 1)
			{
				board[row][column] = 'O';
			}
			numberOfTurns++;
		}
		else
		{
			cout << "Entered position is already taken please select another position:";
		}
		break;
	case 2:
		row = 0, column = 1;
		if (board[row][column] != 'X' && board[row][column] != 'O')
		{
			if (turn == 0)
			{
				board[row][column] = 'X';
			}
			else if (turn == 1)
			{
				board[row][column] = 'O';
			}
			numberOfTurns++;
		}
		else
		{
			cout << "Entered position is already taken please select another position:";
		}
		break;
	case 3:
		row = 0, column = 2;
		if (board[row][column] != 'X' && board[row][column] != 'O')
		{
			if (turn == 0)
			{
				board[row][column] = 'X';
			}
			else if (turn == 1)
			{
				board[row][column] = 'O';
			}
			numberOfTurns++;
		}
		else
		{
			cout << "Entered position is already taken please select another position:";
		}
		break;
	case 4:
		row = 1, column = 0;
		if (board[row][column] != 'X' && board[row][column] != 'O')
		{
			if (turn == 0)
			{
				board[row][column] = 'X';
			}
			else if (turn == 1)
			{
				board[row][column] = 'O';
			}
			numberOfTurns++;
		}
		else
		{
			cout << "Entered position is already taken please select another position:";
		}
		break;
	case 5:
		row = 1, column = 1;
		if (board[row][column] != 'X' && board[row][column] != 'O')
		{
			if (turn == 0)
			{
				board[row][column] = 'X';
			}
			else if (turn == 1)
			{
				board[row][column] = 'O';
			}
			numberOfTurns++;
		}
		else
		{
			cout << "Entered position is already taken please select another position:";
		}
		break;
	case 6:
		row = 1, column = 2;
		if (board[row][column] != 'X' && board[row][column] != 'O')
		{
			if (turn == 0)
			{
				board[row][column] = 'X';
			}
			else if (turn == 1)
			{
				board[row][column] = 'O';
			}
			numberOfTurns++;
		}
		else
		{
			cout << "Entered position is already taken please select another position:";
		}
		break;
	case 7:
		row = 2, column = 0;
		if (board[row][column] != 'X' && board[row][column] != 'O')
		{
			if (turn == 0)
			{
				board[row][column] = 'X';
			}
			else if (turn == 1)
			{
				board[row][column] = 'O';
			}
			numberOfTurns++;
		}
		else
		{
			cout << "Entered position is already taken please select another position:";
		}
		break;
	case 8:
		row = 2, column = 1;
		if (board[row][column] != 'X' && board[row][column] != 'O')
		{
			if (turn == 0)
			{
				board[row][column] = 'X';
			}
			else if (turn == 1)
			{
				board[row][column] = 'O';
			}
			numberOfTurns++;
		}
		else
		{
			cout << "Entered position is already taken please select another position:";
		}
		break;
	case 9:
		row = 2, column = 2;
		if (board[row][column] != 'X' && board[row][column] != 'O')
		{
			if (turn == 0)
			{
				board[row][column] = 'X';
			}
			else if (turn == 1)
			{
				board[row][column] = 'O';
			}
			numberOfTurns++;
		}
		else
		{
			cout << "Entered position is already taken please select another position:";
		}
		break;
	default:
		cout << "\nEntered place doesnt exist please select another place\n";
	}
	cout << "bug:"<<numberOfTurns;
}
};
int main() {
	ticTacToe part1;
	system("color 6");
	cout <<"\t\t\t\t\t\tTic Tac Toe Game\n";
	char board[3][3];
	int numberOfTurns = 1,position;
	bool player, guess, guessingNumber, turn, gameStop = 0, draw = 1, anotherPosition = 0;
	srand(time(0));
	guessingNumber = rand() % 2;
	char ch;
	 part1.boardValues(board);
	cout << "Main Menu\n" << "   Instructions/Rules to be played\n" << "   Play_Game" << endl;
	cout << "Enter r or R to see instructions and p or P to play game:";
	cin >> ch;
	if (ch == 'r' || ch == 'R')
	{
		part1.instructions();
		cin >> ch;
		if (ch == 'b' || ch == 'B')
		{
			cout << "Main Menu\n" << "   Instructions/Rules to be played\n" << "   Play_Game" << endl;
			cout << "Enter r or R to see instructions and p or P to play game:";
			cin >> ch;
		}
	}
	if (ch == 'P' || ch == 'p')
	{
		cout << "Enter 0 if you want to be Player1 and 1 if you want to be Player2:";
		cin >> player;
	}
	cout << "Now Player1 guess number from 0 and 1 if user 1 is correct he/she will get 1st turn otherwise player2\nwill get first turn\n";
	cin >> guess;
	if (guess == guessingNumber)
	{
		cout << "Player1 will have first turn" << endl;
		turn = 0;
	}
	else
	{
		cout << "Player2 will have first turn" << endl;
		turn = 1;
	}
	
	while ((numberOfTurns <= 9) && (gameStop != 1))
	{
		part1.boardShow(board);
		cout << "Enter the place where you want to put your symbol:";
		cin >> position;
		part1.valueAssign( board,  position, turn, numberOfTurns);
		 system("cls");
		if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') || (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') || (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') || (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') || (board[1][0] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') || (board[1][0] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'))
		{
			part1.boardShow(board);
			cout << "Congratulations!!!!!!!!!Player1 won the game.\nPlayer2 better luck next time.\n";
			gameStop = 1;
			draw = 0;
		}
		if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') || (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') || (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') || (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') || (board[1][0] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') || (board[1][0] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'))
		{
			part1.boardShow(board);
			cout << "Congratulations!!!!!!!!Player2 won the game.\nPlayer1 better luck next time.\n";
			gameStop = 1;
			draw = 0;
		}
		
		turn=!turn;
	}
	if (draw == 1)
	{
		cout << "Game is draw between player1 and player2\n";
	}
	else
	{
		cout << endl;
	}
	return 0;
}

