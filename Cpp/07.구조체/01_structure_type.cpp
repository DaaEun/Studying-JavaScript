#include <iostream>
#include <string>
using namespace std;

struct book
{
	string title;
	string author;
	int price;
};

int main(void)
{
	book web_book = {"HTML�� CSS", "ȫ�浿", 28000};
	book java_book = {"Java language", "�̼���"};
	
	cout << "ù ��° å�� ������ " << web_book.title << "�̰�, ���ڴ� " << web_book.author
		<< "�̸�, ������ " << web_book.price << "���Դϴ�." << endl;
	cout << "�� ��° å�� ������ " << java_book.title << "�̰�, ���ڴ� " << java_book.author
		<< "�̸�, ������ " << java_book.price << "���Դϴ�.";
	return 0;
}