#include <iostream>

using namespace std;

int main()
{
	double pi_d = 3.14159265358979323846264338327950288;
	float pi_f = 3.14f;	//f�Ⱥ��̸� d�� �����ؼ� �����

	cout << pi_d << endl;//6�ڸ� ���ϴ� ����ȭ��
	cout << pi_f << endl;
	cout << "------------" << endl;


	long i = 0x4048f5c3;//3.14
	float bitFloatHack = * (float *) &i;
	/*
	* &i : i�� �ּ�
	* (float *) : �� �ִ� ��(��Ʈ ������)�� float ������ ������.   long : 4����Ʈ, float : 4����Ʈ -> �޸� ũ�⿡�� ������ �߻����� �ʴ´�.
	* * : �� �ּ��� ���� ������
	*
	* long :
	* left most bit : sign bit
	* ������ bit : ���� �����ϴ� ��Ʈ
	* 
	* float :
	*		��			   ���������				������������������������
	*  sign: 1bit		Exponent: 8bit				Mantissa: 23bit
	* 
	* �ϴ� �� ������ ���⸸ �ϰ� ���� ������ �о��
	* 
	* ����� 1000000000000000���� ū ���� �����ϰ� �б� ���� ������ ���� ����Ѵ�
	* 1.0*10^15
	* 
	* �̿� ���������� ����� ��ǻ�Ϳ� �����غ���.
	* ������ ��ǻ�ʹ� �������� �۵��ϱ� ������ ������ ü���� ������ ����ϱ� �����ϴ�. ���� 2^n���·� ����ϰ� �ȴ�.
	* 
	* #.# * 2^#
	* ���� ���, 2�� float�� ǥ���Ѵٸ� ������ ����
	* 
	*		��			   ���������				������������������������
	*  sign: 1bit		Exponent: 8bit				Mantissa: 23bit
	* 
	* ��� ��Ʈ�� 0�� �ƴ϶��, �⺻������ 1.0�� �־�����.
	* 
	* ���� ���� ������ ���� ǥ���ȴ�.
	* 1.0 * 2^1
	* 
	* ���� Exponent �� ���� ��Ʈ�� 1������ ���� ���̴°�?
	* Exponent�� ���������� �������� ��Ʈ�� �������� �Ѵ�.
	* �ٸ�, 2^-10���� ����鵵 �����ϱ� ���� ���ϴ� exponent ���� ������ ���� ������� �����Ѵ�.
	* 
	* 
	* -> float�� ������ ���� : 8 (�� ���� k)
	* -> bias = 2^(k-1)-1
	* -> bias + ���ϴ� exponent��  =>  bit representation
	*	-> bit representation - bias => ������ ����ϴ� exponent��
	* 
	* ���� 2^1�� exponent ���� 1�̾�����, 127 + 1 = 128�̱� ������ bit���� ������(2^7 bit)�� On �� ���̴�.
	* �� bit�� ��ǻ�Ϳ��� ��꿡 �̿��� ��, 128 "- 127" = 1 �̷��� ����ϰ� �ȴ�.
	* 
	* �ƹ�ư �� exponent bit�� ǥ���� ������ 127�� �� ���� �츮�� ���ϴ� ���̴�.
	* 
	* 
	* 
	* ���� 3.14�� ǥ���غ���.
	* �� ���� �����θ� �̿��ؼ� ��� ���� ������?
	* 
	* �ϴ� 3.14�� 2�� n������ �и�����
	* 
	* 3.14 = 2^1 * 1.57
	* 
	* �̸� ���� sign bit : 0
	* exponent bit : 128 [1000 0000]
	* Mantissa : ???
	* 
	* ���� 1.57�� Mantissa���� �����ָ� �ȴ�.
	* Mantissa�� ������ ���� �۵��Ѵ�.
	* 1.57���� 1.0�� �⺻���� �����ȴ�. (float ���� ��� bit�� 0�� �ƴ� �̻�)
	* 0.57�� ���� ���Ѵ�.
	* Mantissa�� �� ���� bit�� 2^-1 = 0.5�̴�
	* ���� bit�� 2^-2 = 0.25�̴�
	* ������ 0.125, 0.0625 ......
	* �� ������ �����ؼ� 0.57�� ���� ����� ���� ������ �Ѵ�.
	* 
	* �ٵ� �� �񶧸��� ������ �ִ�.
	* ������ 0.57�� ���� �� ���� �׿� ������ ���� ���� �� �ִ�. �ű⼭ �� �Ƹ��������
	* 
	* 0.5700000000003
	* 0.5699999999996
	* 
	* �� �� �� �� 0.5700..003�� ���� ���� �и��ϴ�. �ֳ��ϸ� �츮�� ���ϴ� ���̶� �� �����ϱ� �ٵ� ���غ����� �𸥴�.
	* 
	* ���� ������ �����Ϸ��� �õ��� ���� 
	* 
	*/

	cout << i << endl;
	cout << bitFloatHack << endl;


	return 0;
}