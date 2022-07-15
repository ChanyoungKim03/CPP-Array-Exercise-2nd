#include <iostream>

int main()
{
	int scores[10]{};
	int highScore, lowScore;
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Input Score : ";
		std::cin >> scores[i];
	}

	highScore = scores[0];
	lowScore = scores[0];

	for (int i = 0; i < 9; i++)
	{
		if (scores[i + 1] > highScore)
		{
			highScore = scores[i + 1];
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (scores[i + 1] < lowScore)
		{
			lowScore = scores[i + 1];
		}
	}
	std::cout << "최고점: " << highScore << std::endl;
	std::cout << "최저점: " << lowScore << std::endl;
}
