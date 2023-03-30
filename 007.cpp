//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char C = 'C';
//	int i = 7;
//	float f = 3.14;			//float값끼리 연산하는 경우가 적을 때 사용, float + float를 많이 해야 하면 double 사용(오차누적됨)
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
//			//i가 999999999까지 가도 float가 2로 올림되기는 하는데 int(내림)는 계속 1을 유지. 일관성이 있음
//			break;
//		}
//	}
//
//
//	return 0;
//}