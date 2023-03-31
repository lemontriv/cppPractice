/*피라미드 뽑기*/
#include <iostream>

using namespace std;

int main()
{
	/*
			@
		   @@@
	      @@@@@
		 @@@@@@@
		이런식으로 뽑으라함
		4분시작
	*/

	int k;
	cin >> k;

	for (int i = 1; 2*i-1 <= k; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			if (2*j <= (k - 2*i + 1))
			{
				cout << "_";
			}
			else if (2*j >= (k + 2 * i + 1))
			{
				cout << "_";
			}
			else
			{
				//각 줄에 2i-1만큼 별을 출력
				//한 줄은 총 k개(홀수라고 하자)
				//(k - 2i - 1)/2
				cout << "*";
			}
		}
		cout << endl;
	}

	
	return 0;
}