#include <iostream>
using namespace std;

void Local(int&);

int main(void)
{
	int var = 10;
	cout << "���� var�� �ʱⰪ�� " << var << "�Դϴ�." << endl;
	
	Local(var);
	cout << "Local() �Լ� ȣ�� �� ���� var�� ���� " << var << "�Դϴ�.";
	return 0;
}

void Local(int& num)
{
	num += 10;
}