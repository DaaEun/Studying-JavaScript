#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string address, name;

	cout << "�̸� : ";
	getline(cin, name);
	cout << "���� : ";
	getline(cin, address);

	cout << address << "�� ��� �ִ� " << name << "��~ �ȳ��ϼ���.";

	return 0;
}
// �ռ� ���캻 ���ڿ��� ���� ������ ���ڿ��� ���̿� ������� ��� ���ڿ��� ��Ȯ�� �Է¹��� �� �ִ�.