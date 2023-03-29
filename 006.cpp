#include <iostream>

using namespace std;

int main()
{	
	float a = 11.1f;
	float b = 3.3f;

	a = a / 10;
	cout << a << endl;
	a /= a;
	cout << a << endl;
	cout << "---------" << endl;

	b = b / 3;
	cout << b << endl;
	b *= b * 3;
	cout << b << endl;
	cout << "---------" << endl;

	//이런 계산은 지양할 것. 어떤 값이 나올지 예측해보기
	float c = 3.3;
	c *= c + 1;
	cout << c << endl;

	float d = 3.3f;
	d *= (d + 1);
	cout << d << endl;
	cout << "---------" << endl;


	return 0;
}