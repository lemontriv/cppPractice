//#include <iostream>
//
//using namespace std;
//
//
//
//void Response();	//함수의 선언(declare)
//void CallMrHoist();	//호이스팅, 함수의 원형이 메인 아래에 있으면 써야함, 다른 함수 원형이 메인 상단에 있으면 그것보다 위에 있어야함
//
//
//함수의 정의 (define)
//string Neighbor(string name)	//함수의 원형이 메인 위
//{
//	cout << "Are You " << name << "?" << endl;
//	if (name == "Stephen")
//	{
//		cout << "YEAH" << endl;
//		Response();
//		return "";
//	}
//	else
//	{
//		cout << "NOPE" << endl;
//		return "He's name isn't " + name;
//	}
//
//	
//}
//
//
//
//int main()
//{
//	string answer = Neighbor("Maria");
//	if (answer != "")
//		cout << answer << endl;
//
//	cout << endl << "what?" << endl << endl;
//	;;;;;;;;;;;;;;;
//
//	answer = Neighbor("Stephen");
//	if (answer != "")
//		cout << answer << endl;
//
//
//
//	return 0;
//}
//
//void Response()		//함수의 원형이 메인의 아래
//{
//	cout << "Who Are You?" << endl;
//	CallMrHoist();
//}
//
//
//void CallMrHoist()
//{
//	cout << "Hoist worker shouted: \"just stay together goddamnit\"" << endl;
//}