#include <iostream>
#include <string>
using namespace std;

int main(void) {
	
	string dog;

	cout << "�ʱ�ȭ dog ������ ���� : " << dog.length() << endl;

	dog = "black�����";
	cout << "dog ���� �� �Է� �Ϸ�" << endl;
	cout << "dog ���� �� : " << dog << endl;
	cout << "dog ���� ���� : " << dog.length() << endl;
	cout << "dog ������ ù ���� : " << dog[0];
	
	return 0;
}