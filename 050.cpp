//#include <iostream>
//#include <random>
//#include <ctime>
//#include <bitset>
//
//using namespace std;
//
//int main()
//{
//	srand(static_cast<unsigned int>(time(NULL)));
//	
//
//	string str1 = "Lemontrivia";
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	random_shuffle(str1.begin(), str1.end());
//	random_shuffle(arr, arr + 5);
//
//	cout << str1 << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//
//	int x = 0x00FF;
//	string Y = bitset<16>(x).to_string();
//	random_shuffle(Y.begin(), Y.end());
//	cout << Y << endl;
//
//
//	return 0;
//}