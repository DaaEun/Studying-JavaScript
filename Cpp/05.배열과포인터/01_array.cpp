#include <iostream>
using namespace std;

int main(void) {
	
	int grade[] = { 85, 65, 90 };				// �迭�� ���̸� ������� ����
	int len = sizeof(grade) / sizeof(grade[0]);	// �迭�� ���̸� ���ϴ� ����

	cout << "�迭 grade�� ���̴� " << len << "�Դϴ�.";
	return 0;
}