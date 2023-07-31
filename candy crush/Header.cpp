# include<Windows.h>
#include "Source1.hpp"
# include <iostream>
using namespace std;
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
int k, l;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
char candyType;
void newCandy()
{
	int candy;
	//char candyType;
	candy = rand() % 5 + 1;
	switch (candy)
	{
	case 1:
		candyType = '#';
		break;
	case 2:
		candyType = '@';
		break;
	case 3:
		candyType = '$';
		break;
	case 4:
		candyType = '%';
		break;
	case 5:
		candyType = '*';
		break;
	}
}
void newCandy2()
{
	int candy;
	// char candyType;
	candy = rand() % 7 + 1;
	switch (candy)
	{
	case 1:
		candyType = '#';
		break;
	case 2:
		candyType = '@';
		break;
	case 3:
		candyType = '$';
		break;
	case 4:
		candyType = '%';
		break;
	case 5:
		candyType = '*';
		break;
	case 6:
		candyType = '?';
		break;
	case 7:
		candyType = '!';
		break;
	}
}
int board1(char array[8][8]) // 8*8 easy mode board
{
	cout << endl;
	cout << "\t\t    0        1       2       3       4       5       6       7" << endl;
	cout << "\t\t   _______________________________________________________________";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 0; l = 0;
	cout << "\n\t       0  |" << "   "; coloring(array); cout << "   " << "|" << "   "; coloring(array);  cout << "   " << "|";
	cout << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "   "; coloring(array);  cout << "   ";
	cout << "|" << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "  "; coloring(array); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 1; l = 0;
	cout << "\n\t       1  |" << "   "; coloring(array); cout << "   " << "|" << "   "; coloring(array);  cout << "   " << "|";
	cout << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "   "; coloring(array);  cout << "   ";
	cout << "|" << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "  "; coloring(array); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 2; l = 0;
	cout << "\n\t       2  |" << "   "; coloring(array); cout << "   " << "|" << "   "; coloring(array);  cout << "   " << "|";
	cout << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "   "; coloring(array);  cout << "   ";
	cout << "|" << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "  "; coloring(array); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 3; l = 0;
	cout << "\n\t       3  |" << "   "; coloring(array); cout << "   " << "|" << "   "; coloring(array);  cout << "   " << "|";
	cout << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "   "; coloring(array);  cout << "   ";
	cout << "|" << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "  "; coloring(array); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 4; l = 0;
	cout << "\n\t       4  |" << "   "; coloring(array); cout << "   " << "|" << "   "; coloring(array);  cout << "   " << "|";
	cout << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "   "; coloring(array);  cout << "   ";
	cout << "|" << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "  "; coloring(array); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 5; l = 0;
	cout << "\n\t       5  |" << "   "; coloring(array); cout << "   " << "|" << "   "; coloring(array);  cout << "   " << "|";
	cout << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "   "; coloring(array);  cout << "   ";
	cout << "|" << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "  "; coloring(array); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 6; l = 0;
	cout << "\n\t       6  |" << "   "; coloring(array); cout << "   " << "|" << "   "; coloring(array);  cout << "   " << "|";
	cout << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "   "; coloring(array);  cout << "   ";
	cout << "|" << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "  "; coloring(array); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 7; l = 0;
	cout << "\n\t       7  |" << "   "; coloring(array); cout << "   " << "|" << "   "; coloring(array);  cout << "   " << "|";
	cout << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "   "; coloring(array);  cout << "   ";
	cout << "|" << "  "; coloring(array); cout << "    " << "|" << "  "; coloring(array);  cout << "    " << "|" << "  "; coloring(array); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|";
	return 0;
}
//coloring of 8*8 board
void coloring(char array[8][8])
{
	switch (array[k][l])
	{
	case '#':
		SetConsoleTextAttribute(h, 1);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	case'@':
		SetConsoleTextAttribute(h, 2);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	case '$':
		SetConsoleTextAttribute(h, 3);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	case '%':
		SetConsoleTextAttribute(h, 4);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	case '*':
		SetConsoleTextAttribute(h, 5);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	}
}
void swap(int& x, int& y)
{
	int z;
	z = x;
	x = y;
	y = z;

}
void candy_crusher1(char array[8][8], int& points)
{
	// char candyType = '%';

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (array[i][j] == array[i][j + 1] && array[i][j] == array[i][j + 2] && array[i][j + 1] == array[i][j + 2]) /*to assign new values
																															  to  horizontal candies*/
			{
				points = points + 10;
				cout << endl << "\t\t\t\t!!!!!!!SWEET!!!!!!!1" << endl;
				cout << "\t\t\t\tPoints:" << points << endl;


				for (int row_saver = i; row_saver >= 0; row_saver--) // row_saver to save value of i of the outermost loop
				{
					if (row_saver > 0)												// assigning values of above rows
					{
						array[row_saver][j] = array[row_saver - 1][j];
						array[row_saver][j + 1] = array[row_saver - 1][j + 1];
						array[row_saver][j + 2] = array[row_saver - 1][j + 2];

					}
					else
					{

						for (int k = j; k <= j + 2; k++)
						{
							newCandy();
							array[row_saver][k] = candyType;

						}
					}
				}
			}
			else if (array[i][j] == array[i + 1][j] && array[i][j] == array[i + 2][j] && array[i + 1][j] == array[i + 2][j]) /* to assign new values
																																   to vertical candies*/
			{
				points = points + 10;
				cout << endl << "\t\t\t\t!!!!!!!SWEET!!!!!!!2" << endl;
				cout << "\t\t\t\tPoints:" << points << endl;
				for (int row_saver = i + 2; row_saver >= 0; row_saver--)
				{
					if (row_saver > 2) // assigning values of above rows
					{
						array[row_saver][j] = array[row_saver - 3][j];
					}
					else if (row_saver >= 0 && row_saver <= 2)// generating new values
					{

						newCandy();
						array[row_saver][j] = candyType;

					}
				}
			}


			else if (array[i][j] == array[i + 1][j + 1] && array[i][j] == array[i + 2][j + 2]) // for primary diagonal candies
			{
				points = points + 20;
				cout << endl << "\t\t\t\t!!!!!!!SWEET!!!!!!!3" << endl;
				cout << "\t\t\t\tPoints:" << points << endl;
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)											// assigning values of above rows
					{
						array[row_saver][j] = array[row_saver - 1][j];
					}
					else                                                        // generating new values
					{

						newCandy();
						array[row_saver][j] = candyType;
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)                                        // assigning candies of above rows
					{
						array[row_saver + 1][j + 1] = array[row_saver][j + 1];
					}
					else                                                      // generating new candies
					{
						newCandy2();
						array[row_saver][j + 1] = candyType;
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)                                          // assigning candies of above rows
					{
						array[row_saver + 2][j + 2] = array[row_saver + 1][j + 2];
					}
					else                                                         // generating new candies
					{
						newCandy();
						array[row_saver][j + 2] = candyType;
					}
				}
			}
			else if (array[i][j] == array[i + 1][j - 1] && array[i][j] == array[i + 2][j - 2]) // for secondary diagonal candies
			{
				points = points + 20;
				cout << endl << "\t\t\t\t!!!!!!!SWEET!!!!!!!4" << endl;
				cout << "\t\t\t\tPoints:" << points << endl;
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)
					{
						array[row_saver][j] = array[row_saver - 1][j];
					}
					else
					{

						newCandy2();

						array[row_saver][j] = candyType;
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)
					{
						array[row_saver + 1][j - 1] = array[row_saver][j - 1];
					}
					else
					{
						newCandy();
						array[row_saver][j - 1] = candyType;
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)
					{
						array[row_saver + 2][j - 2] = array[row_saver + 1][j - 2];
					}
					else
					{
						newCandy();
						array[row_saver][j - 2] = candyType;
					}
				}

			}
			else if (array[i][j] == array[i + 1][j] && array[i][j] == array[i + 2][j] && array[i + 2][j] == array[i + 2][j + 1] && array[i + 2][j + 1] == array[i + 2][j + 2])
			{ // for L shape candies crusher22
				points = points + 25;
				cout << endl << "\t\t\t\t!!!!!!!SWEET!!!!!!!4" << endl;
				cout << "\t\t\t\tPoints:" << points << endl;
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign new values to vertical crushed candies
				{
					if (row_saver > 0)
					{
						array[row_saver + 2][j] = array[row_saver - 1][j];
					}
					else
					{
						for (int k = 0; k <= 2; k++)
						{
							newCandy();
							array[row_saver][j] = candyType;
						}
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign values to horizontal same candies in L shape
				{
					if (row_saver > 0)
					{
						array[row_saver + 2][j + 1] = array[row_saver + 1][j + 1];
						array[row_saver + 2][j + 2] = array[row_saver + 1][j + 2];
					}
					else
					{

						for (int k = j; k <= j + 1; k++)
						{

							newCandy();
							array[row_saver][k] = candyType;
						}
					}
				}
			}
			else if (array[i][j] == array[i + 1][j] && array[i][j] == array[i + 2][j] && array[i][j] == array[i + 2][j - 1] && array[i][j] == array[i + 2][j - 2])
			{
				cout << "sweet";
				points = points + 25;
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign new values to vertical crushed candies
				{
					if (row_saver > 0)
					{
						array[row_saver + 2][j] = array[row_saver - 1][j];
					}
					else
					{
						for (int k = 0; k <= 2; k++)
						{
							newCandy();
						}
						array[row_saver][j] = candyType;
					}
				}

				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign values to horizontal same candies in L shape
				{
					if (row_saver > 0)
					{
						array[row_saver + 2][j + 1] = array[row_saver + 1][j + 1];
						array[row_saver + 2][j + 2] = array[row_saver + 1][j + 2];
					}
					else
					{

						for (int k = j; k <= j + 1; k++)
						{
							newCandy();
							array[row_saver][k] = candyType;
						}
					}
				}

			}
			else if (array[i][j] == array[i][j + 1] && array[i][j] == array[i][j + 2] && array[i][j] == array[i + 1][j] && array[i][j] == array[i + 2][j])
			{
				cout << "sweet";
				points = points + 15;
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign new values to vertical crushed candies
				{
					if (row_saver > 0)
					{
						array[row_saver + 2][j] = array[row_saver - 1][j];
					}
					else
					{
						for (int k = 0; k <= 2; k++)
						{
							newCandy();
							array[row_saver][j] = candyType;
						}
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign values to horizontal same candies in L shape
				{
					if (row_saver > 0)
					{
						array[row_saver + 2][j + 1] = array[row_saver + 1][j + 1];
						array[row_saver + 2][j + 2] = array[row_saver + 1][j + 2];
					}
					else
					{

						for (int k = j; k <= j + 1; k++)
						{

							newCandy();
							array[row_saver][k] = candyType;
						}
					}
				}

			}
			else if (array[i][j] == array[i][j + 1] && array[i][j] == array[i][j + 2] && array[i][j] == array[i + 1][j + 2] && array[i][j] == array[i + 2][j + 2])
			{
				cout << "sweet";
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign new values to vertical crushed candies
				{
					if (row_saver > 0)
					{
						array[row_saver + 2][j + 2] = array[row_saver - 1][j + 2];
					}
					else
					{
						for (int k = 0; k <= 2; k++)
						{
							newCandy();
							array[row_saver][j + 2] = candyType;
						}
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign values to horizontal same candies in L shape
				{
					if (row_saver > 0)
					{
						array[row_saver + 2][j] = array[row_saver + 1][j];
						array[row_saver + 2][j + 1] = array[row_saver + 1][j + 1];
					}
					else
					{

						for (int k = j; k <= j + 1; k++)
						{

							newCandy();
							array[row_saver][k] = candyType;
						}
					}
				}

			}

		}
	}

}

void candy_crusher2(char array2[10][10], int& points)
{
	// char candyType = '#';

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (array2[i][j] == array2[i][j + 1] && array2[i][j] == array2[i][j + 2] && array2[i][j + 1] == array2[i][j + 2]) /*to assign new values
																														to  horizontal candies*/
			{
				points = points + 10;
				cout << endl << "\t\t\t\t!!!!!!!SWEET!!!!!!!1" << endl;
				cout << "\t\t\t\tPoints:" << points << endl;


				for (int row_saver = i; row_saver >= 0; row_saver--) // row_saver to save value of i of the outermost loop
				{
					if (row_saver > 0)												// assigning values of above rows
					{
						array2[row_saver][j] = array2[row_saver - 1][j];
						array2[row_saver][j + 1] = array2[row_saver - 1][j + 1];
						array2[row_saver][j + 2] = array2[row_saver - 1][j + 2];

					}
					else
					{

						for (int k = j; k <= j + 2; k++)
						{
							newCandy2();
							array2[row_saver][k] = candyType;

						}
					}
				}
			}
			else if (array2[i][j] == array2[i + 1][j] && array2[i][j] == array2[i + 2][j] && array2[i + 1][j] == array2[i + 2][j]) /* to assign new values
																															 to vertical candies*/
			{
				points = points + 10;
				cout << endl << "\t\t\t\t!!!!!!!SWEET!!!!!!!2" << endl;
				cout << "\t\t\t\tPoints:" << points << endl;
				for (int row_saver = i + 2; row_saver >= 0; row_saver--)
				{
					if (row_saver > 2) // assigning values of above rows
					{
						array2[row_saver][j] = array2[row_saver - 3][j];
					}
					else if (row_saver >= 0 && row_saver <= 2)// generating new values
					{

						newCandy2();
						array2[row_saver][j] = candyType;

					}
				}
			}


			else if (array2[i][j] == array2[i + 1][j + 1] && array2[i][j] == array2[i + 2][j + 2]) // for primary diagonal candies
			{
				points = points + 20;
				cout << endl << "\t\t\t\t!!!!!!!SWEET!!!!!!!3" << endl;
				cout << "\t\t\t\tPoints:" << points << endl;
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)											// assigning values of above rows
					{
						array2[row_saver][j] = array2[row_saver - 1][j];
					}
					else                                                        // generating new values
					{

						newCandy2();
						array2[row_saver][j] = candyType;
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)                                        // assigning candies of above rows
					{
						array2[row_saver + 1][j + 1] = array2[row_saver][j + 1];
					}
					else                                                      // generating new candies
					{
						newCandy2();
						array2[row_saver][j + 1] = candyType;
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)                                          // assigning candies of above rows
					{
						array2[row_saver + 2][j + 2] = array2[row_saver + 1][j + 2];
					}
					else                                                         // generating new candies
					{
						newCandy2();
						array2[row_saver][j + 2] = candyType;
					}
				}
			}
			else if (array2[i][j] == array2[i + 1][j - 1] && array2[i][j] == array2[i + 2][j - 2]) // for secondary diagonal candies
			{
				points = points + 20;
				cout << endl << "\t\t\t\t!!!!!!!SWEET!!!!!!!4" << endl;
				cout << "\t\t\t\tPoints:" << points << endl;
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)
					{
						array2[row_saver][j] = array2[row_saver - 1][j];
					}
					else
					{

						newCandy2();

						array2[row_saver][j] = candyType;
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)
					{
						array2[row_saver + 1][j - 1] = array2[row_saver][j - 1];
					}
					else
					{
						newCandy2();
						array2[row_saver][j - 1] = candyType;
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--)
				{
					if (row_saver > 0)
					{
						array2[row_saver + 2][j - 2] = array2[row_saver + 1][j - 2];
					}
					else
					{
						newCandy2();
						array2[row_saver][j - 2] = candyType;
					}
				}

			}
			else if (array2[i][j] == array2[i + 1][j] && array2[i][j] == array2[i + 2][j] && array2[i + 2][j] == array2[i + 2][j + 1] && array2[i + 2][j + 1] == array2[i + 2][j + 2])
			{ // for L shape candies crusher22
				points = points + 25;
				cout << endl << "\t\t\t\t!!!!!!!SWEET!!!!!!!4" << endl;
				cout << "\t\t\t\tPoints:" << points << endl;
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign new values to vertical crushed candies
				{
					if (row_saver > 0)
					{
						array2[row_saver + 2][j] = array2[row_saver - 1][j];
					}
					else
					{
						for (int k = 0; k <= 2; k++)
						{
							newCandy2();
							array2[row_saver][j] = candyType;
						}
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign values to horizontal same candies in L shape
				{
					if (row_saver > 0)
					{
						array2[row_saver + 2][j + 1] = array2[row_saver + 1][j + 1];
						array2[row_saver + 2][j + 2] = array2[row_saver + 1][j + 2];
					}
					else
					{

						for (int k = j; k <= j + 1; k++)
						{

							newCandy2();
							array2[row_saver][k] = candyType;
						}
					}
				}
			}
			else if (array2[i][j] == array2[i + 1][j] && array2[i][j] == array2[i + 2][j] && array2[i][j] == array2[i + 2][j - 1] && array2[i][j] == array2[i + 2][j - 2])
			{
				cout << "sweet";
				points = points + 25;
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign new values to vertical crushed candies
				{
					if (row_saver > 0)
					{
						array2[row_saver + 2][j] = array2[row_saver - 1][j];
					}
					else
					{
						for (int k = 0; k <= 2; k++)
						{
							newCandy2();
						}
						array2[row_saver][j] = candyType;
					}
				}

				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign values to horizontal same candies in L shape
				{
					if (row_saver > 0)
					{
						array2[row_saver + 2][j + 1] = array2[row_saver + 1][j + 1];
						array2[row_saver + 2][j + 2] = array2[row_saver + 1][j + 2];
					}
					else
					{

						for (int k = j; k <= j + 1; k++)
						{
							newCandy2();
							array2[row_saver][k] = candyType;
						}
					}
				}

			}
			else if (array2[i][j] == array2[i][j + 1] && array2[i][j] == array2[i][j + 2] && array2[i][j] == array2[i + 1][j] && array2[i][j] == array2[i + 2][j])
			{
				cout << "sweet";
				points = points + 15;
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign new values to vertical crushed candies
				{
					if (row_saver > 0)
					{
						array2[row_saver + 2][j] = array2[row_saver - 1][j];
					}
					else
					{
						for (int k = 0; k <= 2; k++)
						{
							newCandy2();
							array2[row_saver][j] = candyType;
						}
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign values to horizontal same candies in L shape
				{
					if (row_saver > 0)
					{
						array2[row_saver + 2][j + 1] = array2[row_saver + 1][j + 1];
						array2[row_saver + 2][j + 2] = array2[row_saver + 1][j + 2];
					}
					else
					{

						for (int k = j; k <= j + 1; k++)
						{

							newCandy2();
							array2[row_saver][k] = candyType;
						}
					}
				}

			}
			else if (array2[i][j] == array2[i][j + 1] && array2[i][j] == array2[i][j + 2] && array2[i][j] == array2[i + 1][j + 2] && array2[i][j] == array2[i + 2][j + 2])
			{
				cout << "sweet";
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign new values to vertical crushed candies
				{
					if (row_saver > 0)
					{
						array2[row_saver + 2][j + 2] = array2[row_saver - 1][j + 2];
					}
					else
					{
						for (int k = 0; k <= 2; k++)
						{
							newCandy2();
							array2[row_saver][j + 2] = candyType;
						}
					}
				}
				for (int row_saver = i; row_saver >= 0; row_saver--) // to assign values to horizontal same candies in L shape
				{
					if (row_saver > 0)
					{
						array2[row_saver + 2][j] = array2[row_saver + 1][j];
						array2[row_saver + 2][j + 1] = array2[row_saver + 1][j + 1];
					}
					else
					{

						for (int k = j; k <= j + 1; k++)
						{

							newCandy2();
							array2[row_saver][k] = candyType;
						}
					}
				}

			}

		}
	}
}



void board2(char array2[10][10]) { // 10*10 hard mode board

	cout << "\t\t    0        1       2       3       4       5       6       7       8       9" << endl;
	cout << "\t\t   _______________________________________________________________________________";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 0; l = 0;
	cout << "\n\t       0  |" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|";
	cout << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "   "; coloring1(array2); cout << "   ";
	cout << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 1; l = 0;
	cout << "\n\t       1  |" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|";
	cout << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "   "; coloring1(array2); cout << "   ";
	cout << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 2; l = 0;
	cout << "\n\t       2  |" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|";
	cout << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "   "; coloring1(array2); cout << "   ";
	cout << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 3; l = 0;
	cout << "\n\t       3  |" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|";
	cout << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "   "; coloring1(array2); cout << "   ";
	cout << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 4; l = 0;
	cout << "\n\t       4  |" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|";
	cout << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "   "; coloring1(array2); cout << "   ";
	cout << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 5; l = 0;
	cout << "\n\t       5  |" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|";
	cout << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "   "; coloring1(array2); cout << "   ";
	cout << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 6; l = 0;
	cout << "\n\t       6  |" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|";
	cout << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "   "; coloring1(array2); cout << "   ";
	cout << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 7; l = 0;
	cout << "\n\t       7  |" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|";
	cout << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "   "; coloring1(array2); cout << "   ";
	cout << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 8; l = 0;
	cout << "\n\t       8  |" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|";
	cout << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "   "; coloring1(array2); cout << "   ";
	cout << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|";
	cout << "\n\t          |" << "       " << "|" << "       " << "|";
	cout << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|" << "       " << "|";
	k = 9; l = 0;
	cout << "\n\t       9  |" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|" << "   "; coloring1(array2); cout << "   " << "|";
	cout << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "   "; coloring1(array2); cout << "   ";
	cout << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|" << "  "; coloring1(array2); cout << "    " << "|";
	cout << endl << "\t          |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|";
}
//coloring of 10*10 board
void coloring1(char array[10][10])
{
	switch (array[k][l])
	{
	case '#':
		SetConsoleTextAttribute(h, 1);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	case'@':
		SetConsoleTextAttribute(h, 2);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	case '$':
		SetConsoleTextAttribute(h, 3);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	case '%':
		SetConsoleTextAttribute(h, 4);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	case '*':
		SetConsoleTextAttribute(h, 5);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	case'!':
		SetConsoleTextAttribute(h, 7);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;
	case'?':
		SetConsoleTextAttribute(h, 8);
		cout << array[k][l];
		SetConsoleTextAttribute(h, 6);
		l++;
		break;

	}
}
void value_assign1(char array[8][8]) // to assign values to 8*8 board
{
	// HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	int candy;
	char candyType;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			candy = rand() % 5 + 1;
			switch (candy)
			{
			case 1:
				candyType = '#';
				break;
			case 2:
				candyType = '@';
				break;
			case 3:
				candyType = '$';
				break;
			case 4:
				candyType = '%';
				break;
			case 5:
				candyType = '*';
				break;
			}
			if (j >= 2)
			{
				if ((candyType == array[i][j - 1] && candyType == array[i][j - 2]) || (candyType == array[i - 1][j] && candyType == array[i - 2][j]) || (candyType == array[i - 1][j - 1] && candyType == array[i - 2][j - 2]) || (candyType == array[i - 1][j + 1] && candyType == array[i - 2][j + 2]))
				{
					j--;

				}
				else
				{
					array[i][j] = candyType;
				}
			}
			else
			{
				array[i][j] = candyType;
			}
		}
	}
}
void value_assign2(char array2[10][10]) // to assign values to 10*10 board
{
	int candy;
	char candyType;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			candy = rand() % 7 + 1;
			switch (candy)
			{
			case 1:
				candyType = '#';
				break;
			case 2:
				candyType = '@';
				break;
			case 3:
				candyType = '$';
				break;
			case 4:
				candyType = '%';
				break;
			case 5:
				candyType = '*';
				break;
			case 6:
				candyType = '?';
				break;
			case 7:
				candyType = '!';
				break;
			}
			if (i >= 2 || j >= 2)
			{
				if ((candyType == array2[i][j - 1] && candyType == array2[i][j - 2]) || (candyType == array2[i - 1][j] &&
					candyType == array2[i - 2][j]) || (candyType == array2[i - 1][j - 1] && candyType == array2[i - 2][j - 2])
					|| (candyType == array2[i - 1][j + 1] && candyType == array2[i - 2][j + 2]) || (candyType == array2[i - 1][j] && candyType == array2[i - 2][j]))
				{
					j--;

				}
				else
				{
					array2[i][j] = candyType;
				}
			}
			else
			{
				array2[i][j] = candyType;
			}
		}

	}
}
// inputs for 8*8
void inputs(int& row, int& column, int& gameMoves)
{
	cout << endl;
	gameMoves++;
	cout << "\n\t\t\t\t\t\tMoves Left:" << 16 - gameMoves << endl;
	cout << "Enter row number = ";
	cin >> row;
	cout << "Enter colom number =  ";
	cin >> column;

}
