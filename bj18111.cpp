#include <iostream>

using namespace std;

int main()
{
	int M = 0, N = 0, B = 0;
	cin >> N >> M >> B;
	//B = 인벤토리 초기값


	//2차원 배열 동적할당
	int** array = new int*[M+1];
	for (int i = 0; i < M; i++)
		array[i] = new int[N];

	//배열에 넣으면서 합계 파악
	int buff;
	int sum = 0;
	int max = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> buff;
			sum += buff;
			max < buff ? max = buff : 0;
			array[i][j] = buff;
		}
	}

	int elapsedTimeMin = -1;
	int destinationOptimal = -1;

	for (int destination = 0; destination <= max; destination++)
	{
		volatile int elapsedTime = 0;
		int	currentLevel;
		int diff = 0;
		int totalPlaced = 0;
		int totalDigged = 0;
		int inven = B;

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				currentLevel = array[i][j];

				diff = currentLevel - destination;
				if (diff > 0)
				{
					//현재 높이가 더 높음
					totalDigged += diff;
					inven += diff;
				}
				else if (diff == 0)
				{
					continue;
				}
				else
				{
					totalPlaced -= diff;
					inven += diff;
				}
			}
		}

		if (destination == 255)
		{
			int i = 0;
		}
		if (inven < 0)
		{
			continue;
		}

		elapsedTime = totalDigged * 2 + totalPlaced;
		if (elapsedTimeMin == -1)
		{
			elapsedTimeMin = elapsedTime;
			destinationOptimal = destination;
		}
		else if (elapsedTime < elapsedTimeMin)
		{
			elapsedTimeMin = elapsedTime;
			destinationOptimal = destination;
		}
		else if ((elapsedTime == elapsedTimeMin) && (destinationOptimal < destination))
		{
				destinationOptimal = destination;
		}


	}

	//출력
	std::cout << elapsedTimeMin << " " << destinationOptimal;


	return 0;
}