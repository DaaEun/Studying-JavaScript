#include <iostream>
using namespace std;

void Local(void);

int main(void)
{
	int i = 5;
	int var = 10;
	cout << "main() �Լ� ���� �ڵ� ���� var�� ���� " << var << "�Դϴ�." << endl;

	if (i < 10)
	{
		Local();
		int var = 30;
		cout << "if �� ���� �ڵ� ���� var�� ���� " << var << "�Դϴ�." << endl;
	}
	cout << "���� �ڵ� ���� var�� ���� " << var << "�Դϴ�." << endl;
	return 0;
}

void Local(void)
{
	int var = 20;
	cout << "Local() �Լ� ���� �ڵ� ���� var�� ���� " << var << "�Դϴ�." << endl;
}