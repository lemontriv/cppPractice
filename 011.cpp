//#include <iostream>
//
//using namespace std;
//
//
//
//void Response();	//�Լ��� ����(declare)
//void CallMrHoist();	//ȣ�̽���, �Լ��� ������ ���� �Ʒ��� ������ �����, �ٸ� �Լ� ������ ���� ��ܿ� ������ �װͺ��� ���� �־����
//
//
//�Լ��� ���� (define)
//string Neighbor(string name)	//�Լ��� ������ ���� ��
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
//void Response()		//�Լ��� ������ ������ �Ʒ�
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