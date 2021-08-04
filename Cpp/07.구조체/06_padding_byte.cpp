#include <iostream>
using namespace std;

struct TypeSize
{
	char a;
	int b;
	double c;
};

int main(void) {

	cout << "����ü TypeSize�� �� ����� ũ��� ������ ����." << endl;
	cout << "char a   : " << sizeof(char) << endl;
	cout << "int b    : " << sizeof(int) << endl;
	cout << "double c : " << sizeof(double) << endl << endl;

	cout << "����ü TypeSize�� ũ��� ������ ����." << endl;
	cout << sizeof(TypeSize);

	return 0;
}

/*
	����ü�� �޸𸮿� �Ҵ��� �� �����Ϸ��� ���α׷��� �ӵ� ����� ���� ����Ʈ �е�(byte padding)��Ģ�� �̿��Ѵ�.

	����ü�� �پ��� ũ���� Ÿ���� ��� ������ ���� �� �ִ� Ÿ���̴�.
	������ �����Ϸ��� �޸��� ������ ���� �Ϸ��� ũ�Ⱑ ���� ū ��� ������ �������� ��� ��� ������ �޸� ũ�⸦ ���߰� �ȴ�.
	�̰��� ����Ʈ �е��̶�� �ϸ�, �̶� �߰��Ǵ� ����Ʈ�� �е� ����Ʈ(padding byte)��� �Ѵ�.
*/