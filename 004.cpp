//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//����
//	const int MrOne = 1;
//	
//	////�ʱ�ȭ ���ϸ� ����
//	//const int MsTwo;
//
//	////const ���� �Ҵ� ����
//	//const int MkThree = 0;
//	//MkThree = 0;
//
//	cout << "Value: " << MrOne << endl;
//	cout << "Address: " << &MrOne << endl;
//
//
//	////�����Ͷ��?
//	//*&MrOne = 10;
//	////� x
//
//
//
//	//��ȸ�Ѵٸ�?
//	int DocFour = 4;
//	//������ �ʴ� �ּҰ��� ����
//	const int* NurFive = &DocFour;
//	cout << "Value: " << *NurFive << endl;
//	cout << "Address: " << NurFive << endl;
//
//	//�޸� ��� ���̷� ���� int <> float�� ��ȯ�� �������� ���ϴ�. �׷��� ����Ʈ ������ �����
//	float* NTRSix = reinterpret_cast<float*>(&DocFour);
//	*NTRSix = 3.1;
//	cout << "Value: " << *NurFive << endl;
//	cout << "Address: " << NurFive << endl;
//
//	//��� ��� : 3.1, �ּҰ�
//	//���� ��� : 1078355558, �ּҰ�
//
//
//
//	/*
//	�� �ڵ�� ����غ������� ��û�� ���İ�Ƽ�̴�.
//	int������ ������ DocFour�� �ּҸ� ������ �ִ� int* NurFive����.
//	DocFour�� float������ �ٽ� typecast������ NurFive�� ������ int*�̴�
//
//	��ǥ�� �����غ��ڸ�,
//
//	*NTRSix				 DocFour	       *NurFive
//	   ^				    |				   ^
//	   |				    v				   |
//	 NTRSix		<-		&DocFour	->		NurFive		
//
//
//
//
//	 *NTRSix = 3.1 ����
//	 
//	 �� ������ �ڷ���
//	  DocFour : int
//	 &DocFour : int*
//
//	 *NurFive : int
//	  NurFive : int*
//
//	 *NTRSix : float
//	  NTRSix : float*
//
//	 �� ������ ����
//
//	 &DocFour == NurFive == NTRSix
//	 DocFour == *NTRSix
//
//	 ���� ��
//
//	 DocFour = 1078355558	(3.09999990463�� float ������ int�� ������)
//	&DocFour = �ּҰ�A
//
//	*Nurfive = 1078355558	(&3.09999990463�� float* ������ int*�� ������)
//	 NurFive = �ּҰ�A
//	
//	*NTRSix  = 3.09999990
//	 NTRSix  = �ּҰ�A
//	&NTRSix  = �ּҰ�B(�ǹ̾���)
//
//	
//	�����մϴ�! �Ϻ��� ���İ�Ƽ�� �����Ǿ����ϴ�!
//	
//	�� �������� ������ ���� ������� ������ ó���� �� �ִ�.
//	*/
//
//	//war crime
//	*NTRSix = 3.14;
//	cout << "Value: " << *reinterpret_cast<float*>(const_cast<int*>(NurFive)) << endl;
//	cout << "Address: " << NurFive << endl;
//	//const_cast�� ���� const �Ӽ��� �Ͻ������� ����� �ȴ�? <- �˾ƺ�����
//	
//
//
//
//
//	return 0;
//}