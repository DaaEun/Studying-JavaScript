#include <iostream>
using namespace std;

inline int Sqr(int x)
{
	return x * x;
}

int main(void)
{
	int result;
	int x = 5;
	
	cout << "��� ����� " << Sqr(10) << "�Դϴ�." << endl;
	cout << "��� ����� " << Sqr(x) << "�Դϴ�." << endl;
	cout << "��� ����� " << Sqr(x+3) << "�Դϴ�.";
	return 0;
}