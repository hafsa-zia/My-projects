# include <iostream>
# include <windows.h>
# include <cstdlib>
# include <time.h>
# include <fstream>
# include <string>
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
class snake_ladder
{
public:
	int array[10][10];
	string player_1_name, player_2_name, name;
	const int highest_score = 100;
	int choice, player_1 = 0, player_2 = 0, player_num, num1, num2;
	bool found;

	ofstream data;
	ifstream data2;
	snake_ladder()
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				array[i][j] = 0;
			}
		}
	}
	void board_assign()
	{
		int value = 1;
		for (int i = 9; i >= 0; i--)
		{
			for (int k = 9; k >= 0; k--)
			{
				if (i == 0 && k == 0)
				{
					array[i][k] = 100;
				}
				else
				{
					array[i][k] = value;
				}

				value++;
			}
		}
	}
	void board()
	{
		
		cout << "\t";
		for (int j = 0; j < 10; j++)
		{
			cout << "-------";
		}
		cout << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << "\t";
			for (int j = 0; j < 10; j++)
			{
				cout << "|      ";
			}
			cout << "|";
			cout << endl;
			cout << "\t";
			for (int j = 0; j < 10; j++)
			{
				
				if (array[i][j] == player_1 && array[i][j] == player_2)
				{
					cout << "|  ";
					SetConsoleTextAttribute(h, 6);
					cout << "AB" << "  ";
					SetConsoleTextAttribute(h, 9);
				}
				else if (array[i][j] == player_1)
				{
					cout << "|  ";
					SetConsoleTextAttribute(h, 6);
					cout << "A" << "   ";
					SetConsoleTextAttribute(h, 9);
				}
				else if (array[i][j] == player_2)
				{
					cout << "|  ";
					SetConsoleTextAttribute(h, 6);
					cout << "B" << "   ";
					SetConsoleTextAttribute(h, 9);
				}
				
				else if (array[i][j] <= 9)
				{
					
						cout << "|  ";
					cout<<array[i][j] << "   ";
				}
				else if(array[i][j]>9)
				{
					if (array[i][j] == 19 || array[i][j] == 48 || array[i][j] == 57 || array[i][j] == 68 || array[i][j] == 83 || array[i][j] == 98 || array[i][j] == 87)
					{
						cout << "|  ";
						SetConsoleTextAttribute(h, 12);
						cout << array[i][j] << "  ";
						SetConsoleTextAttribute(h, 9);
					}
					else if (array[i][j] == 20 || array[i][j] == 40 || array[i][j] == 72 || array[i][j] == 86 || array[i][j] == 45 || array[i][j] == 76)
					{
						cout << "|  ";
						SetConsoleTextAttribute(h, 10);
						cout << array[i][j] << "  ";
						SetConsoleTextAttribute(h, 9);
					}
					else if (array[i][j] == 100)
					{
						cout << "|  ";
						cout << array[i][j] << " ";
					}
					else
					{
						cout << "|  ";
						cout << array[i][j] << "  ";
					}
				}
			}
			cout << "|";
			cout << endl;
			cout << "\t";
			for (int j = 0; j < 10; j++)
			{
				cout << "-------";
			}
			cout << endl;

		}
	}
	void play_game()
	{
		data.open("winnernames.txt", ios::app);
		cout << "Enter which player you want to be other person will be other player:";
		cin >> player_num;
		cout << "player_1 enter your name please:";
		cin >> player_1_name;
		cout << "player_2 enter your name please:";
		cin >> player_2_name;
		board();
		SetConsoleTextAttribute(h, 5);
		cout << "\nGreen box indicate LADDERS\nRed box indicates SNAKES\n";
		SetConsoleTextAttribute(h, 9);
		while (player_1 != 100 && player_2 != 100)
		{
			
			cout << "\t\t\t\t\tplayer_1 turn\nPress 0 to roll the dice:";
			cin >> found;
			if (found == 0)
			{
				num1 = rand() % 6 + 1;
				cout << "Dice value is:" << num1 << endl;
			}
			player_1 += num1;
			if (player_1 > 100)
			{
				player_1 = 100;
			}
			cout << "you are on square  " << player_1 << endl;
			SetConsoleTextAttribute(h, 4);
			switch (player_1)
			{
				// cases for snakes
			case 19:
				player_1 = 4;
				cout << "You stepped on a snake now you are on square:" << player_1;
				break;
			case 48:
				player_1 = 14;
				cout << "You stepped on a snake now you are on square:" << player_1;
				break;
			case 57:
				player_1 = 36;
				cout << "You stepped on a snake now you are on square:" << player_1;
				break;
			case 68:
				player_1 = 49;
				cout << "You stepped on a snake now you are on square:" << player_1;
				break;
			case 83:
				player_1 = 61;
				cout << "You stepped on a snake now you are on square:" << player_1;
				break;
			case 98:
				player_1 = 84;
				cout << "You stepped on a snake now you are on square:" << player_1;
				break;
			case 87:
				player_1 = 66;
				cout << "You stepped on a snake now you are on square:" << player_1;
				break;
				// cases for ladder
			case 20:
				player_1 = 38;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_1;
				break;
			case 40:
				player_1 = 59;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_1;
				break;
			case 72:
				player_1 = 91;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_1;
				break;
			case 86:
				player_1 = 96;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_1;
				break;
			case 45:
				player_1 = 54;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_1;
				break;
			case 76:
				player_1 = 99;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_1;
				break;
				cout << endl;



			}
			SetConsoleTextAttribute(h, 9);
			cout << "\t\t\t\t\tplayer_2 turn\nPress 0 to roll the dice:";
			cin >> found;
			if (found == 0)
			{
				num2 = rand() % 6 + 1;
				cout << "Dice value is:" << num2 << endl;
			}
			player_2 += num2;
			if (player_2 > 100)
			{
				player_2 = 100;
			}
			cout << "you are on square " << player_2 << endl;
			SetConsoleTextAttribute(h, 4);
			switch (player_2)
			{
				// cases for snakes
			case 19:
				player_2 = 4;
				cout << "You stepped on a snake now you are on square:" << player_2;
				break;
			case 48:
				player_2 = 14;
				cout << "You stepped on a snake now you are on square:" << player_2;
				break;
			case 57:
				player_2 = 36;
				cout << "You stepped on a snake now you are on square:" << player_2;
				break;
			case 68:
				player_2 = 49;
				cout << "You stepped on a snake now you are on square:" << player_2;
				break;
			case 83:
				player_2 = 61;
				cout << "You stepped on a snake now you are on square:" << player_2;
				break;
			case 98:
				player_2 = 84;
				cout << "You stepped on a snake now you are on square:" << player_2;
				break;
			case 87:
				player_2 = 66;
				cout << "You stepped on a snake now you are on square:" << player_2;
				break;
				// cases for ladder
			case 20:
				player_2 = 38;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_2;
				break;
			case 40:
				player_2 = 59;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_2;
				break;
			case 72:
				player_2 = 91;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_2;
				break;
			case 86:
				player_2 = 96;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_2;
				break;
			case 45:
				player_2 = 54;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_2;
				break;
			case 76:
				player_2 = 99;
				cout << "congratulations!You stepped on a ladder now you are in square" << player_2;
				break;
				cout << endl;
			}
			SetConsoleTextAttribute(h, 9);
			
			
			if (player_1 == 100 )
			{
				SetConsoleTextAttribute(h, 2);
				cout << "Congratulatiuons player_1 won the game.Player_2 better luck next time\n";
				data <<endl<< player_1_name;
			}
			else if (player_2 == 100)
			{
				SetConsoleTextAttribute(h, 2);
				cout << "Congratulatiuons player_2 won the game.Player_1 better luck next time\n";
				data << endl<<player_2_name;
			}
			else if (player_1 == 100 && player_2 == 100)
			{
				SetConsoleTextAttribute(h, 2);
				cout << "Match Draw\n";
			}
			else
			{
				system("cls");
				cout << "\n\t\t\t\t\t\t!!!!!!!SNAKE AND LADDER GAME BY HAFSA!!!!!!!\n";
				board();
				cout << "\t\t\t\t\tNEXT TURN\n";
			}
			

		}
	}
	void read_winner()
	{
		cout << "Game created by Hafsa Zia";
		cout << endl;
		data2.open("winnernames.txt");
		data2 >> name;
		cout << name;
		data2.close();
	}
};

int main()
{
	int a;
	int *choice=&a;
	SetConsoleTextAttribute(h, 9);
	srand(time(0));
	cout << "\t\t\t\t\t\t!!!!!!!SNAKE AND LADDER GAME!!!!!!!\n";
	cout << endl;
	snake_ladder game;
	game.board_assign();
	cout << endl;
	cout << "1.Play game\n";
	cout << "2.Instructions\n";
	cout << "3.Credits and Prevoius Scores\n";
	cout << "Enter which choice you want to choose\n";
	cin >> *choice;
	if (*choice == 2)
	{
		SetConsoleTextAttribute(h, 5);
		cout << "1.There are two players in this game\n2.both players will compete to reach 100 point.\n3.whichever player reached first will win the game\n4.Green box indicate ladders\n5.Red box indicates snake";
		SetConsoleTextAttribute(h, 9);
	}

	else if (*choice == 3)
	{
		game.read_winner();
	}
	else if (*choice == 1)
	{
		game.play_game();
	}
	system("pause");
	return 0;
}
