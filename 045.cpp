//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//abs 정수의 절대값
//	//fabs 실수의 절대값
//	//labs long의 절대값, 어차피 int랑 바이트 맞잖어
//	
//	//pow(인수, 지수)
//
//	cout << abs(-10) << endl;
//	cout << fabs(-3.14) << endl;
//
//	cout << pow(2, 10) << endl;
//
//	cout << abs(-3.14) << endl;//실수도 작동함.
//
//	/* 함수 원형을 찾아봐야 하겠지만, 굳이 나눠놓은 이유는 호환성을 위해서 넣은 거라고 생각됨
//	단순히 생각하자면 정수형 실수는 sign비트를 사용함에도 불구하고 2의 보수 체계를 사용하기 때문에 조건체크가 훓어야함
//	반면 fabs는 float에만 사용할 것이라고 생각하고 단정지어 사용해서 그냥 sign비트를 0으로 바꿔주면됨*/
//	cout << fabs(-3.14) << endl;
//	//이 코드가 정상으로 나오는것도 신기하네... 그냥 abs만 쓰는걸로 합시다
//
//	return 0;
//}