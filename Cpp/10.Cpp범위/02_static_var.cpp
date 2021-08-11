/*
	# ���� ����(static variable)
	- �޸𸮻��� ������(data) ������ ����Ǹ�, �ʱ�ȭ���� ������ 0���� �ڵ� �ʱ�ȭ�Ѵ�.

	1. ������ ������ �ʴ� ���� ����
	2. ���� ������ ������ ���� ����
	3. �ܺ� ������ ������ ���� ����
*/ 

//1. ������ ������ �ʴ� ���� ����
#include <iostream>
using namespace std;

void Local(void);
void StaticVar(void);

int main(void) {

	for (int i = 0; i < 3; i++) {
		Local();
		StaticVar();
	}
	return 0;
}

void Local(void) {

	int count = 1;
	cout << "Local() �Լ� " << count << " ��° ȣ��" << endl;
	count++;
}

void StaticVar(void) {
	static int static_count = 1; // ������ ������ �ʴ� ���� ����
	cout << "StaticVar() �Լ� " << static_count << " ��° ȣ��" << endl;
	static_count++;
}
