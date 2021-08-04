#include <iostream>
using namespace std;

struct Prop {
	
	int savings;
	int loan;
};

Prop InitProperty(void);
int CalcProperty(const Prop*);

int main(void) {

	Prop hong;
	int hong_prop;

	hong = InitProperty();
	hong_prop = CalcProperty(&hong);	//����ü�� ��������� �Լ��� �μ��� ����

	cout << "ȫ�浿�� �����" << endl;
	cout << "���� : " << hong.savings << "��" << endl;
	cout << "���� : " << hong.loan << "��" << endl;
	cout << "��   : " << hong_prop << "��" << endl;
	cout << "�Դϴ�." << endl;

	return 0;
}

Prop InitProperty(void) {

	Prop hong_prop = { 10000000, 4000000 };
	return hong_prop;	//����ü�� �Լ��� ��ȯ������ ��ȯ
}

int CalcProperty(const Prop* money) {
	// const Ű���� ��� -> ����ü�� �����͸� ���� �����ϴ� ���� ����
	//money->savings = 100; (X)
	return(money->savings - money->loan);
}