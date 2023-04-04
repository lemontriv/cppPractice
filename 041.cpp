///*피보나치 수열 55분 시작 01분 완료*/
//
//#include <iostream>
//
//using namespace std;
//
//int fibb(int );
//
//int main()
//{
//	//1,1,2,3,5
//	int a = fibb(10);
//	cout << a << endl;
//
//	return 0;
//}
//
//int fibb(int i)
//{
//	if (i == 1 || i == 2)
//		return 1;
//	else
//	{
//		int j = fibb(i - 1) + fibb(i - 2);
//		cout << j << endl;//재귀문쓰면 이렇게 코드가 개작살이 나는데.. 꼭 써야하는걸까
//		return j;
//
//	}
//	/*요즘도 재귀문 많이 쓰나요? 난 모름*/
//}