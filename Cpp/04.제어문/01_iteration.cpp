// do/while �� 

#include <iostream>
using namespace std;

int main(void) {

	int i = 0, num = 4;

	do {
		cout << "do / while ���� ���� " << i + 1 << " ��° �ݺ� �������Դϴ�." << endl;
		i++;	
	} while (i < num);

	cout << "do / while ���� ����� �� ���� i�� ���� " << i << "�Դϴ�." << endl;
	return 0;
}