/*�Ƕ�̵� �̱�*/
#include <iostream>

using namespace std;

int main()
{
	/*
			@
		   @@@
	      @@@@@
		 @@@@@@@
		�̷������� ��������
		4�н���
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
				//�� �ٿ� 2i-1��ŭ ���� ���
				//�� ���� �� k��(Ȧ����� ����)
				//(k - 2i - 1)/2
				cout << "*";
			}
		}
		cout << endl;
	}

	
	return 0;
}