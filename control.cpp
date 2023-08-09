#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void field(int arr[][10]) {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j]==0)
			{
			cout << char(219)<< char(219);

			}
			if (arr[i][j] == 1) {
			cout << char(177)<< char(177);

			}
		}
		cout << "\n";
	}
}

enum MyEnum
{
	UP=119 , DOWN=115, RIGHT=100, LEFT=97 

};

int main() {
	int f = 0;
	int arr[10][10] = {};
	int x = 5, y = 5;
	while (1) {
		field(arr);
		switch (_getch())
		{
		case UP: //UP
			if (y==0)
			{
				break;
			}
			else {
				arr[y][x] = 0;
				y--;
				arr[y][x] = 1;
				break;
			}
			
		case DOWN: //DOWN
			if (y == 9)
			{
				break;
			}
			else {
				arr[y][x] = 0;
				y++;
				arr[y][x] = 1;
				break;
			}
		case RIGHT: //RIGHT
			if (x == 9)
			{
				break;
			}
			else {
				arr[y][x] = 0;
				x++;
				arr[y][x] = 1;
				break;
			}
		case LEFT: //LEFT
			if (x == 0)
			{
				break;
			}
			else {
				arr[y][x] = 0;
				x--;
				arr[y][x] = 1;
				break;
			}
		default:
			break;
			}
		system("cls");
	}
}
