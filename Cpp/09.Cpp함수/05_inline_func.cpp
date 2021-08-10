/*
	# �ζ��� �Լ�(inline function)
	- �Լ� ����ð��� ���� �ɸ��ٸ�, �Լ� ȣ��ð��� ���� ������ ���� �ʴ´�.
	- ������ �Լ� ����ð��� �ſ� ª�ٸ�, �Լ� ȣ��ð��� �δ��� �� �� �ִ�.

	- �ζ��� �Լ��� �Ϲ����� �Լ��� ȣ������� ��ġ�� �ʰ�, �Լ��� ��� �ڵ带 ȣ��� �ڸ��� �ٷ� �����ϴ� ����� �Լ��̴�.
	- �Լ� ȣ��ð��� ����ǳ�, �Լ� ȣ�� �������� ����� ���� ������ �����Ѵ�.
	- ���� �ڵ尡 �ſ� ���� �Լ����� �ζ��� �Լ��� �����ϴ� ���� ����.
*/
#include <iostream>
using namespace std;

inline int Sub(int x, int y) {
	return x - y;
}

inline void Print(int x) {
	cout << "��� ��� : " << x;
}

int main(void) {
	
	int num1 = 5, num2 = 3;
	int result;

	result = Sub(num1, num2);
	Print(result);

	return 0;
}
/*
	# �ζ��� �Լ� ���� ��

	int main(void)
	{
		int num1 = 5, num2 = 3;
		int result;
		{
			int x = num1, y = num2;
			result = x - y;
		}
		{
			int x = result;
			cout << "��� ����� " << x << "�Դϴ�.";
		}
		return 0;
	}
*/