//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char C = 'C';
//	int i = 7;
//	float f = 3.14;			//float������ �����ϴ� ��찡 ���� �� ���, float + float�� ���� �ؾ� �ϸ� double ���(����������)
//	double d = 9.9999;
//	bool Flag = 1;
//	string word = "Anacondas\n";
//
//	cout << C <<endl;
//	cout << i <<endl;
//	cout << f <<endl;
//	cout << d <<endl;
//	cout << Flag <<endl;
//	cout << word;
//
//	cout << "------------" << endl;
//
//	float j = 1;
//	float k = 9;
//	for (size_t i = 0; i < 10; i++)
//	{
//		k *= 0.1;
//		j += k;
//		cout << "float " << j << " = int " << (int)j << endl;
//	}
//
//	cout << "------------" << endl;
//
//	double l = 1;
//	double m = 9;
//	for (long i = 0; i < 10; i++)
//	{
//		m *= 0.1;
//		l += m;
//		cout << "float " << l << " = int " << (int)l << endl;
//		if ((int)l != 1)
//		{
//			cout << "Current i is " << i << endl;
//			//i�� 999999999���� ���� float�� 2�� �ø��Ǳ�� �ϴµ� int(����)�� ��� 1�� ����. �ϰ����� ����
//			break;
//		}
//	}
//
//
//	return 0;
//}