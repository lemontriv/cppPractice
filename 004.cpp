//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//정상
//	const int MrOne = 1;
//	
//	////초기화 안하면 오류
//	//const int MsTwo;
//
//	////const 변수 할당 오류
//	//const int MkThree = 0;
//	//MkThree = 0;
//
//	cout << "Value: " << MrOne << endl;
//	cout << "Address: " << &MrOne << endl;
//
//
//	////포인터라면?
//	//*&MrOne = 10;
//	////어림 x
//
//
//
//	//우회한다면?
//	int DocFour = 4;
//	//변하지 않는 주소값을 지정
//	const int* NurFive = &DocFour;
//	cout << "Value: " << *NurFive << endl;
//	cout << "Address: " << NurFive << endl;
//
//	//메모리 사용 차이로 인해 int <> float간 변환은 자유롭지 못하다. 그래도 바이트 같으니 츄라이
//	float* NTRSix = reinterpret_cast<float*>(&DocFour);
//	*NTRSix = 3.1;
//	cout << "Value: " << *NurFive << endl;
//	cout << "Address: " << NurFive << endl;
//
//	//기대 출력 : 3.1, 주소값
//	//실제 출력 : 1078355558, 주소값
//
//
//
//	/*
//	위 코드는 명료해보이지만 엄청난 스파게티이다.
//	int형으로 지정된 DocFour의 주소를 가지고 있는 int* NurFive변수.
//	DocFour를 float형으로 다시 typecast했지만 NurFive는 여전히 int*이다
//
//	도표로 정리해보자면,
//
//	*NTRSix				 DocFour	       *NurFive
//	   ^				    |				   ^
//	   |				    v				   |
//	 NTRSix		<-		&DocFour	->		NurFive		
//
//
//
//
//	 *NTRSix = 3.1 이후
//	 
//	 각 값들의 자료형
//	  DocFour : int
//	 &DocFour : int*
//
//	 *NurFive : int
//	  NurFive : int*
//
//	 *NTRSix : float
//	  NTRSix : float*
//
//	 각 값들의 관계
//
//	 &DocFour == NurFive == NTRSix
//	 DocFour == *NTRSix
//
//	 실제 값
//
//	 DocFour = 1078355558	(3.09999990463의 float 변수가 int로 읽혔다)
//	&DocFour = 주소값A
//
//	*Nurfive = 1078355558	(&3.09999990463의 float* 변수가 int*로 읽혔다)
//	 NurFive = 주소값A
//	
//	*NTRSix  = 3.09999990
//	 NTRSix  = 주소값A
//	&NTRSix  = 주소값B(의미없음)
//
//	
//	축하합니다! 완벽한 스파게티가 조리되었습니다!
//	
//	이 변수들은 다음과 같은 방식으로 온전히 처리할 수 있다.
//	*/
//
//	//war crime
//	*NTRSix = 3.14;
//	cout << "Value: " << *reinterpret_cast<float*>(const_cast<int*>(NurFive)) << endl;
//	cout << "Address: " << NurFive << endl;
//	//const_cast로 인해 const 속성을 일시적으로 지우게 된다? <- 알아봐야함
//	
//
//
//
//
//	return 0;
//}