#include <iostream>

class Board2
{
	int width = 50;
	int height = 25;
	public: int x = 10, y = 10;

	public: void board() {
		for (int i = 0; i < height; i++)
		{
			std::cout << "\t\t|";
			for (int j = 0; j < width - 2; j++)
			{
				if (i == 0 || i == height - 1) std::cout << '-';
				else if (i == y && j == x) std::cout << "o";
				else {
					std::cout << ' ';
				}
			}
			std::cout << "|\n";
		}
	}
};


