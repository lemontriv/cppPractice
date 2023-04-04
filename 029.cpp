//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	/* 캐스트 연산자 */
//
//	long i = 0x4048f5c3;
//	float val;
//	val = *reinterpret_cast<float * >(&i);
//	cout << val << endl;
//
//	//evil floating pointer 문제도 못해주면서 무슨 캐스팅이야!
//	/*
//	static_cast : 오류검사해줌. 근데 포인터를 다른 포인터로 변환해주진 않음. 오류를 줄이기 위한 배려??
//	비슷한 구조를 가지는 A, B클래스에서 A클래스의 변수로 선언된 무언가를 B클래스로 형변환하면 
//	B* B = static_cast<B*>A이런 느낌인데 static cast가 이거 무리무리 하면서 오류 뱉어줌 실제로도 오류가 나긴함.
//	
//	근데 이것도 부모-자식 관계에선 오류를 못잡아줌. 성능때문에 체크 안하고 넘어가는건데 그런것들은 dynamic_cast 써야함
//
//	const_cast : const속성 제거 이럴거면 뭐더러 const?
//	reinterpret_cast : 포인터끼리 변환
//	*/
//
//
//	return 0;
//}