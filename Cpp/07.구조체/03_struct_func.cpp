#include <iostream>
using namespace std;

struct Prop
{
	int savings;
	int loan;
};

int CalcProperty(Prop*);

int main(void) {

	int kim_prop;
	Prop kim = { 10000000, 4000000 };

	kim_prop = CalcProperty(&kim);	//����ü�� �ּҸ� �Լ��� �μ��� ����

	cout << "�达�� �����" << endl;
	cout << "���� : " << kim.savings << "��" << endl;
	cout << "���� : " << kim.loan << "��" << endl;
	cout << "��   : " << kim_prop << "��" << endl;
	cout << "�Դϴ�." << endl;

	return 0;
}

int CalcProperty(Prop* money) {

	money->savings = 100;	// ȣ��� �Լ����� ���� ����ü�� �����͸� ����
	return(money->savings - money->loan);
}