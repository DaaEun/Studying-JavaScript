#include <iostream>
using namespace std;

int RecursiveSum(int);

int main(void)
{
	int n = 10;
	
	cout << "1���� " << n << "������ ���� " << RecursiveSum(n) << "�Դϴ�.";
	return 0;
}

int RecursiveSum(int n)
{
	if (n == 1)						// n�� 1�̸�, �׳� 1�� ��ȯ��. 
	{
		return 1;
	}
	return n + RecursiveSum(n-1);	// n�� 1�� �ƴϸ�, n�� 1���� (n-1)������ �հ� ���� ���� ��ȯ��.
}