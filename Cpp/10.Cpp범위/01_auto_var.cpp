/*
	# �ڵ� ����(automatic variable)
	- ��� ������ ����� ������ �ǹ��ϸ�, �Լ��� �Ű������� ���⿡ ���Եȴ�.
	- �ڵ� ������ ��������� ��� �������� ��ȿ�ϸ�, ����� ����Ǹ� �޸𸮿��� �������.
	- �޸𸮻��� ����(stack) ������ ����Ǹ�, �ʱ�ȭ���� ������ �ǹ� ���� ��(�����갪)���� �ʱ�ȭ�ȴ�.
	- C����� ���� ����(local variable)�� ���� �ǹ��̴�.
*/
#include <iostream>
using namespace std;

void Local(void);

int main(void) {

	int i = 5;
	int var = 10;
	cout << "main() �Լ� ���� �ڵ� ���� var : " << var << endl;

	if (i < 10) {
		Local();
		int var = 30;
		cout << "if�� ���� �ڵ� ���� var : " << var << endl;
	}
	cout << "if�� �� �ڵ� ���� var : " << var << endl;
	return 0;
}

void Local(void) {

	int var = 20;
	cout << "Local() �Լ� ���� �ڵ� ���� var : " << var << endl;
}