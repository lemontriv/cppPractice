//#include <iostream>
//
//using namespace std;
//
//namespace silla
//{
//	int year = 935;
//
//	void CentralArea()
//	{
//		cout << "경상도" << endl;
//	}
//}
//
//namespace baekjae
//{
//	int year = 660;
//
//	void CentralArea()
//	{
//		cout << "충청도" << endl;
//	}
//}
//
//using namespace silla;
//using namespace baekjae;//namespace 같은것끼리 위치 묶어주는 편이 좋음. (위의 std)
//
//int main()
//{
//	cout << "신라 수도: ";
//	silla::CentralArea();
//	cout << "멸망: " << silla::year	<<	endl;
//
//
//	cout << "백제 수도: ";
//	baekjae::CentralArea();
//	cout << "멸망: " << baekjae::year	<<	endl;
//
//	/*편하네*/
//	return 0;
//}