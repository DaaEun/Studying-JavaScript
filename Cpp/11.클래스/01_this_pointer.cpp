/*
	# this ������
	- ��� ��� �Լ��� �ڽŸ��� this �����͸� ������ �ִ�.
	- �ش� ��� �Լ��� ȣ���� ��ü�� ����Ű�� �Ǹ�, ȣ��� ��� �Լ��� ���� �μ��� ���޵ȴ�.
	- ȣ��� ��� �Լ��� �ڽ��� ȣ���� ��ü�� �������� ��Ȯ�� �ľ��� �� �ִ�

	- this�� �������̹Ƿ�, ��ȯ�� ������ ���� ������(*)�� ����Ͽ� ȣ���� ��ü �� ��ü�� ��ȯ�ؾ� �Ѵ�.
	- �Ͻ������ε� ���� �� ������, ������ ȭ��ǥ(->) �����ڸ� ���� ��������� ����ϴ� ���� ����.


	# this �������� Ư¡

	1. this �����ʹ� Ŭ����, ����ü �Ǵ� ����ü Ÿ���� ������ ��� �Լ������� ����� �� �ִ�.
	2. ���� ��� �Լ��� this �����͸� ������ �ʴ´�.
	3. this �����ʹ� ������ ������ ����̸�, ���� ���� ���Ҵ��� �� ����.
*/
#include <iostream>
using namespace std;

class Book {
private:
	int current_page_;
	void set_persent();
	
public:
	Book(const string& title, int total_page);
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
	const Book& ThickerBook(const Book&);	// TickerBook() �Լ��� ����
};

int main(void) {

	Book web_book("HTML & CSS", 350);
	Book java_book("JAVA", 200);

	cout << web_book.ThickerBook(java_book).title_;	//�� �β��� å�� �̸� ���
	return 0;
}

Book::Book(const string& title, int total_page) {

	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_persent();
}

void Book::set_persent() {
	percent_ = (double)current_page_ / total_page_ * 100;
}

const Book& Book::ThickerBook(const Book& comp_book) {

	if (comp_book.total_page_ > this->total_page_) {
		return comp_book;
	}
	else
	{
		return *this;
	}
}