//#include <iostream>
//#include <bitset>
//
//using namespace std;
//
//int main()
//{
//	int x = 0xFF;
//	int y = 0xf0;
//	bitset<8> bit1 = 0;
//	bit1 = 0x00;
//	//bitset�̶��� ��̷ӳ׿�
//
//	bit1 = x & y;
//	cout << bit1 << endl;
//	//1111 0000
//
//	bit1 >>= 2;
//	cout << bit1 << endl;
//
//	bit1 = ~bit1;//�̰� �� ��� �ȴ� �Ф�
//	cout << bit1 << endl;
//
//	bit1.flip();
//	cout << bit1 << endl;
//
//	bit1 = bit1 >> 2 ^ bit1;
//	cout << bit1 << endl;
//
//	bit1 |= y;
//	cout << bit1 << endl;
//
//	
//
//	return 0;
//}