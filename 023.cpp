//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int x = 10;
//
//	//x++은 해당 라인의 코드를 실행 후 ++증가가 이루어짐. 따라서 첫째 줄 출력이 10
//	cout << x++ << endl;
//	cout << x-- << endl;
//
//	//++x는 해당 줄의 코드를 실행하기 전에 증가시키고 해당 줄을 실행함. 따라서 바로 10에서 1이 증가한 11이 출력됨
//	cout << ++x << endl;
//	cout << --x << endl;
//
//	//일반적으로 for문에 i++로 사용. ++x는 특수한 경우 아니면 거의 안씀(min축약할때는 자주 쓰긴함)
//	return 0;
//}