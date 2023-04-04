#include <iostream>

using namespace std;

int main()
{
	int M = 0, N = 0, B = 0;
	cin >> N >> M >> B;
	//B = �κ��丮 �ʱⰪ


	//2���� �迭 �����Ҵ�
	int** array = new int*[M+1];
	for (int i = 0; i < M; i++)
		array[i] = new int[N];

	//�迭�� �����鼭 �հ� �ľ�
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
					//���� ���̰� �� ����
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

	//���
	std::cout << elapsedTimeMin << " " << destinationOptimal;


	return 0;
}