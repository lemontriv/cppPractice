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

	//�̷� ����� ������ ��. � ���� ������ �����غ���
	float c = 3.3;
	c *= c + 1;
	cout << c << endl;

	float d = 3.3f;
	d *= (d + 1);
	cout << d << endl;
	cout << "---------" << endl;


	return 0;
}