#include <iostream>
using namespace std;

struct Prop {

	int savings;
	int loan;
};

int CalcProperty(int, int);

int main(void) {

	int yang_prop;
	Prop yang = { 10000000, 4000000 };

	yang_prop = CalcProperty(yang.savings, yang.loan);
	// ����ü�� ��� ������ �Լ��� �μ��� ����

	cout << "������� �����" << endl;
	cout << "���� : " << yang.savings << "��" << endl;
	cout << "���� : " << yang.loan << "��" << endl;
	cout << "��   : " << yang_prop << "��" << endl;
	cout << "�Դϴ�." << endl;

	return 0;
}

int CalcProperty(int s, int l) {
	return (s - l);
}