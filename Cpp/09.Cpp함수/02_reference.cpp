#include <iostream>
using namespace std;

struct Book {
	
	string title;
	string author;
	int price;
};

void Display(const Book&);

int main(void) {

	Book web_book = { "�� ���α׷��� �Ǳ�!", "����", 35000 };
	Display(web_book);
	
	return 0;
}

void Display(const Book& bk) {

	cout << "å ���� : " << bk.title << endl;
	cout << "å ���� : " << bk.author << endl;
	cout << "å ���� : " << bk.price << "��" << endl;
}