#include <iostream>
#include <string>
using namespace std;

int main(void) {
	
	string str1 = "C++ is easy!";
	string str2;

	str2 = str1;	// ���ڿ� ���� ����
	cout << str2 << endl;


	string str3 = "I'm studying ";
	string str4 = "C++.";
	string str5;

	str5 = str3 + str4;	// ���ڿ� ���� ����
	cout << str5 << endl;
	str3 += str4;		// ���ڿ� �߰� ����
	cout << str3 << endl;
	return 0;
}