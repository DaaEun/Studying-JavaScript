//2. ���� ������ ������ ���� ����
#include <iostream>
using namespace std;

static int var;	// ���� ������ ������ ���� ����

void Local(void);

int main(void) {

	cout << "var �ʱⰪ : " << var << endl;
	
	int i = 5;
	int var = 10;	// �ڵ� ���� ����
	cout << "main() �Լ� ���� �ڵ� ���� var �ʱⰪ : " << var << endl;

	if (i < 10) {

		Local();
		cout << "���� var �� : " << var << endl;
	}
	cout << "�� �̻� main() �Լ����� ���� ���� var�� ���� �Ұ�" << endl;
	return 0;
}

void Local(void) {

	var = 20;	// ���� ���� �� ����
	cout << "Local() �Լ� ���� ���� ���� var �� : " << var << endl;
}