//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	/* ĳ��Ʈ ������ */
//
//	long i = 0x4048f5c3;
//	float val;
//	val = *reinterpret_cast<float * >(&i);
//	cout << val << endl;
//
//	//evil floating pointer ������ �����ָ鼭 ���� ĳ�����̾�!
//	/*
//	static_cast : �����˻�����. �ٵ� �����͸� �ٸ� �����ͷ� ��ȯ������ ����. ������ ���̱� ���� ���??
//	����� ������ ������ A, BŬ�������� AŬ������ ������ ����� ���𰡸� BŬ������ ����ȯ�ϸ� 
//	B* B = static_cast<B*>A�̷� �����ε� static cast�� �̰� �������� �ϸ鼭 ���� ����� �����ε� ������ ������.
//	
//	�ٵ� �̰͵� �θ�-�ڽ� ���迡�� ������ �������. ���ɶ����� üũ ���ϰ� �Ѿ�°ǵ� �׷��͵��� dynamic_cast �����
//
//	const_cast : const�Ӽ� ���� �̷��Ÿ� ������ const?
//	reinterpret_cast : �����ͳ��� ��ȯ
//	*/
//
//
//	return 0;
//}