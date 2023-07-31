# include <Windows.h>
# include<iostream>
# include <fstream>
# include "Source1.hpp"
# include <cstdlib>
# include <time.h>
# include <string>
# include <conio.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
using namespace std;
int main() {
	cout << "\n\t\t\t\t\t\t!!!!!!!!!!!!!!!!CANDY CRUSH GAME!!!!!!!!!!!!!!!!!!!!!";
	srand(time(0));
	char arr[100];
	ofstream data("score.txt", ios::app);
	ifstream data2("score.txt");
	data2.getline(arr, 100);
	system("color 6");
	int c = 0, points = 50, select_option;
	int  candy, gameMode, gameMoves = 0, row, column;
	char array[8][8], array2[10][10], candyType;
	string playerName;
	cout << endl;

	cout << "\t1.Play game" << endl;
	cout << "\t2.Credits" << endl;
	cout << "\t3.Instructions/Rules" << endl;
	cout << "\t4.Score\n";
	cout << "\t5.Exit\n";
	cout << "Enter the corresponding number to select option:";
	cin >> select_option;
	while (select_option != 1 && select_option != 5)
	{

		if (select_option == 2)
		{
			cout << "\tCandy Crush created by Hafsa Zia and Ayesha Naseer\n";
		}
		else if (select_option == 3)
		{
			cout << "\tFollowing are the rules of the game:" << endl;
			cout << "\t1.Player has to choose the row and column of the candu he or she wants to swap." << endl;
			cout << "\t2.Then he or she has to enter the keyboard arrow key where she or he want to swap the candy." << endl;
			cout << "\t3.If by swapping candy a combination of three or more candies  make the player" << endl << "\twill get ponits otherwise move will be wasted.\n";
			cout << "\t4.There are total of 15 moves and a timer will also be there\n";
		}
		else if (select_option == 4)
		{

			cout << arr;
			data2.close();
			cout << endl;
		}
		cout << "Enter the corresponding number to select option:";
		cin >> select_option;
	}
	if (select_option == 1)
	{
		cout << "\t  Enter your name:";
		cin >> playerName;
		cout << "\tThere are two modes for the game:\n\t    1.Easy mode\n\t    2.Hard mode";
		cout << "\n\t  Enter 1 if you want to play easy mode and 2 if you want to play hard mode:";
		cin >> gameMode;
		cout << endl;


		if (gameMode == 1)
		{
			//int counter = 60; //amount of seconds
			//Sleep(1000);
			//while (counter >= 1)
			//{
			//	cout << "\rTime remaining: " << counter << flush;
			//	Sleep(1000);
			//	counter--;
			//}
			value_assign1(array); // function to assign values
			board1(array);
			inputs(row, column, gameMoves);
			while (gameMoves >= 0)
			{
				c = 0;
				switch (c = _getch())
				{
				case KEY_UP:
					system("cls");
					cout << endl << "Up" << endl;  //key up
					swap(array[row][column], array[row - 1][column]);
					candy_crusher1(array, points);// function to crush same candies and assign new values
					system("cls");
					board1(array);
					cout << endl << "\t\t\t\t\t\tPoints:" << points;
					inputs(row, column, gameMoves);
					break;
				case KEY_DOWN:
					system("cls");
					cout << endl << "Down" << endl;  // key down
					swap(array[row][column], array[row + 1][column]);
					candy_crusher1(array, points);// function to crush same candies and assign new values
					system("cls");
					board1(array);
					cout << endl << "\t\t\t\t\t\tPoints:" << points;
					inputs(row, column, gameMoves);

					break;
				case KEY_LEFT:
					system("cls");
					cout << endl << "Left" << endl;  // key left
					swap(array[row][column], array[row][column - 1]);
					candy_crusher1(array, points);// function to crush same candies and assign new values
					system("cls");
					board1(array);
					cout << endl << "\t\t\t\t\t\tPoints:" << points;
					inputs(row, column, gameMoves);
					break;
				case KEY_RIGHT:
					system("cls");
					cout << endl << "Right" << endl;  // key right
					swap(array[row][column], array[row][column + 1]);
					candy_crusher1(array, points);// function to crush same candies and assign new values
					system("cls");
					board1(array);
					cout << endl << "\t\t\t\t\t\tPoints:" << points;
					inputs(row, column, gameMoves);
					break;
				}

			}

		}

		else if (gameMode == 2)
		{
			value_assign2(array2);
			board2(array2);
			inputs(row, column, gameMoves);
			while (gameMoves >= 0)
			{

				c = 0;
				switch (c = _getch())
				{
				case KEY_UP:
					system("cls");
					cout << endl << "Up" << endl;  //key up
					swap(array2[row][column], array2[row - 1][column]);
					candy_crusher2(array2, points);// function to crush same candies and assign new values
					system("cls");
					board2(array2);
					cout << endl << "\t\t\t\t\t\tPoints:" << points;
					inputs(row, column, gameMoves);
					break;
				case KEY_DOWN:
					system("cls");
					cout << endl << "Down" << endl;  // key down
					swap(array2[row][column], array2[row + 1][column]);
					candy_crusher2(array2, points);			// function to crush same candies and assign new values
					system("cls");
					board2(array2);
					cout << endl << "\t\t\t\t\t\tpoints:" << points;
					inputs(row, column, gameMoves);

					break;
				case KEY_LEFT:
					system("cls");
					cout << endl << "Left" << endl;  // key left
					swap(array2[row][column], array2[row][column - 1]);
					candy_crusher2(array2, points);					// function to crush same candies and assign new values
					system("cls");
					board2(array2);
					cout << endl << "\t\t\t\t\t\tPoints:" << points;
					inputs(row, column, gameMoves);
					break;
				case KEY_RIGHT:
					system("cls");
					cout << endl << "Right" << endl;  // key right
					swap(array2[row][column], array2[row][column + 1]);
					candy_crusher2(array2, points);                  // function to crush same candies and assign new values
					system("cls");
					board2(array2);
					cout << endl << "\t\t\t\t\t\tPoints:" << points;
					inputs(row, column, gameMoves);
					break;
				}
			}
		}

	}
	data << "\nName:" << playerName << "\tTotal points are:" << points;
	data.close();
	system("pause");
	return 0;

}