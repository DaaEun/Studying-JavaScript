#include <iostream>
using namespace std;

int main(void)
{
	int x = 10;	// ������ ���� 
	int& y = x;	// ������ ���� 
	
	cout << "x : " << x << ", y : " << y << endl;
	y++;		// �����ڸ� �̿��� ���� ����
	cout << "x : " << x << ", y : " << y << endl;
	cout << "x�� �ּҰ� : " << &x << ", y�� �ּҰ� : " << &y;
	return 0;
}