#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Board2.h"

using namespace std;

int main()
{
	Board2 b;

	while (true) {
		b.board();
		b.x++;
		//system("cls");
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0,0});
	}
}

