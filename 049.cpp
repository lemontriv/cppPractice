//#include <iostream>
//#include <ctime>
//#include<numeric>
//
//using namespace std;
////https://lemontrivia.tistory.com/19
//
//int main()
//{
//	//시드값 초기화
//	srand(static_cast<unsigned int>(time(NULL)));
//
//	//위 블로그 글에서 돌림판 있는 부분에 대한 코드임
//	//순차적으로 배열을 확인하고 배열에서 해당하는 [한개의] 값만 찾음. 따라서 확률이 큰걸(숫자가 큰) 제일 앞에 배치하는게 코드 효율이 높음
//	//무슨 아이템을 뱉는거냐? -> 2차원 배열로 2행에 넣으면 됩니다
//	//드랍테이블 db 큰거 만져보고싶다...
//	int arrsize = 5;
//	int arr[5] = { 1000,2000,3000,1000,2000 };//동적할당 나중에 new에서
//
//	int sum = 9000;//미리 합 구해놓기 accumulator쓰면 편하긴 한데 csv 뽑을때 그냥 계산해서 전달하는게 최적화 좋음 O=n임 이거
//	int prob;
//	for (int i = 0; i < 10; i++)
//	{
//		//디버거라 랜덤값이 정상이 아님
//		prob = rand() % sum;
//		cout << prob << endl;
//	}
//
//	for (int i = 0; i < arrsize; i++)
//	{
//		if (arr[i] < prob)
//		{
//			prob -= arr[i];
//			continue;
//		}
//		else
//		{
//			cout << i+1 << "th prize selected" << endl;//st, nd, th 어휴증말
//			break;
//		}
//		cout << "sum값이 잘못되어 범위 밖의 물건을 찾고 있습니다" << endl;
//	}
//	
//	//만약, 랜덤으로 나오는 값의 최대값을 일정하게 관리한다면, 이런 행동도 가능합니다
//	//최대값 RAND_MAX 32767으로 정함(헤더파일 기본값)
//
//	//연산 여유 있는 시간대에 rand리스트 뽑아서 미리 리스트 작성
//	//기본 300개정도 작성하고(아이템 최대 스택 수+10. 아마 9999가 일반적일듯)
//	//리스트 30%정도 남았을 때에 리스트 뽑는 로직 우선순위 올려서 연산에 부담이 가더라도 50%수준까진 유지하게 해야함.
//	int randARR[300] = { 0, };
//	for (int  i = 0; i < 300; i++)
//	{
//		randARR[i] = rand();
//	}
//	cout << randARR << endl;
//	cout << "이것이 당신의 운의 주소입니다" << endl;
//
//	//요소 설명:
//	//첫 인수 :		랜덤값 트리거. 해당 값보다 랜덤값이 낮거나 같으면 드랍 발생
//	//두번째 인수 :	드랍할 아이템의 최대 수량을 결정. 간단하게 만드려고 한거라 확률이 균등하지 않음
//	//세번째 인수 : 아이템 코드. 등등등 원하는거 암거나
//	int dropTable[4][3] = { {30000, 12, 600010}, {15000, 5, 600011}, {3000, 3, 600012}, {1, 1, 600013} };
//
//	//이런 식으로 짜게 된다면 모든 아이템들이 각각의 드랍 확률을 가짐. 독립시행 비슷한 효과
//	for (int i = 0; i < 30; i++)
//	{
//		//cpp은 pop메소드가 없네요.. 이번엔 그냥 스킵!
//		int tempRand = randARR[i];
//
//
//		for (int j = 0; j < 4; j++)
//		{
//			if (tempRand > dropTable[j][0])//확률 miss
//				continue;
//			else//확률 hit!
//			{
//				//tolerable speed
//				int count = tempRand % dropTable[j][1];
//				cout << tempRand << "의 결과 " << count << "개 만큼 " << dropTable[j][2] << "가 드랍되었습니다." << endl;
//			}
//		}
//	}
//
//
//	return 0;
//}