#include <iostream>
#include <string>
using namespace std;

struct Name {

	string first;
	string last;
};

struct Friends {

	Name first_name;
	string address;
	string job;
};

int main(void) {

	Friends cho = {
		{"����", "��"},
		"����� ���۱� ����� ������",
		"�л�"
	};

	cout << cho.address << endl << endl;
	cout << cho.first_name.last << cho.first_name.first << "����," << endl;
	cout << "�׵��� �� ���´�? ������ " << cho.job << "�̴�?" << endl;
	cout << "������ �� �ѹ� ����." << endl << "�� ����.";

	return 0;
}