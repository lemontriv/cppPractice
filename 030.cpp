//#include <iostream>
//#include <bitset>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//	/*명시적 변환.. 이미 계속 하던거...*/
//	cout << (char)65 << endl;
//
//	double d = 9.9999999;
//	int i;
//	i = (int)d;
//	cout << i << endl;
//
//	//double과 float의 정밀도 차이로 인해 차이 발생
//	//각각 배정도, 단정도라고 부름. 이러한 차이는 32비트와 64비트의 정밀도 차이에서 나옴
//	//막연히 더블을 쓰면 좋긴 하겠지만, 메모리 용량이 두배고 나누기 연산!이 매우매우 느리다.
//	//기본적인 할당 속도는 float와 double이 같다. 왜인지는 잘.. 모르겠다..
//	float f = 9.9999999;
//	i = (int)f;//이거 형변환 오류가 아님. f출력해도 10 나옴
//	cout << i << endl;
//
//
//
//	return 0;
//}