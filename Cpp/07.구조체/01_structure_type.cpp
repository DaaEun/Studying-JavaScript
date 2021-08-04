/*
	����ü(structure type)
	- ����ڰ� C++�� �⺻ Ÿ���� ������ ���Ӱ� ������ �� �ִ� ����� ���� Ÿ���̴�.
	- �⺻ Ÿ�Ը����δ� ��Ÿ�� �� ���� ������ �����͸� ǥ���� �� �ִ�.

	- �迭�� ���� Ÿ���� ���� �����̶�� �Ѵٸ�, ����ü�� �پ��� Ÿ���� ���� ������ �ϳ��� Ÿ������ ��Ÿ�� ���̴�.
	- ����ü�� �����ϴ� ������ ����ü�� ���(member) �Ǵ� �������(member variable)��� �Ѵ�.

	- C++�� ����ü�� �����Ӹ� �ƴ϶� �Լ������� ��� ������ ���� �� �ִ�.
	- ����ü�� Ÿ���� �Ӹ� �ƴ϶�, ��ü ���� ���α׷����� �ٽ��� �Ǵ� Ŭ����(class)�� ���ʰ� �ȴ�.
*/
#include <iostream>
#include <string>
using namespace std;

struct book {
	string title;
	string author;
	int price;
};

int main(void) {

	book web_book = { "HTML�� CSS", "�����", 25000 };
	book java_book = { "JAVA ���� ����","����" };

	cout << "�� ������ ���� : " << web_book.title << endl;
	cout << "�� ������ ���� : " << web_book.author << endl;
	cout << "�� ������ ���� : " << web_book.price << endl;
	cout << endl;
	cout << "�ڹ� ������ ���� : " << java_book.title << endl;
	cout << "�ڹ� ������ ���� : " << java_book.author << endl;
	cout << "�ڹ� ������ ���� : " << java_book.price << endl;
}