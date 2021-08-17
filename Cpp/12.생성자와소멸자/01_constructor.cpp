/*
	# ��� ������ �ʱ�ȭ
	Ŭ������ ������ ��ü�� �����ϸ�, �ش� ��ü�� �޸𸮿� ��� �����ȴ�.
	������ �� ��ü�� ��� ��������� �ʱ�ȭ�ϱ� ���� ����� �� ����.

	��ü�� ������� �߿� private ����� �־� ���� ������ �� ���⶧����
	����ڳ� ���α׷��� �Ϲ����� �ʱ�ȭ ������� �ʱ�ȭ�� �� ����.

	���� private ����� ������ �� �ִ� �ʱ�ȭ���� ���� public �Լ��� �ʿ��ϴ�.
	�̷��� �ʱ�ȭ �Լ��� ��ü�� ������ �ĺ��� ���Ǳ� ������ �ݵ�� ����� �ʱ�ȭ�� ���� ȣ��Ǿ�� �Ѵ�.


	# ������(constructor)
	C++���� ��ü�� ������ ���ÿ� ��������� �ʱ�ȭ�ϴ� �����ڶ�� ��� �Լ��� �����Ѵ�.
	Ŭ���� �������� �̸��� �ش� Ŭ������ �̸��� ����.


	# �������� Ư¡
	1. �����ڴ� �ʱ�ȭ�� ���� �����͸� �μ��� ���޹��� �� �ִ�.
	2. �����ڴ� ��ȯ���� ������, void������ �������� �ʴ´�.
	3. ��ü�� �ʱ�ȭ�ϴ� ����� ���� ���� ��� �����ε� ��Ģ�� ���� ���� ���� �����ڸ� ���� �� �ִ�.
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
};

int main(void) {

	Book web_book("HTML�� CSS", 350);	// �������� �Ͻ��� ȣ��
	//Book web_book = Book("HTML�� CSS", 350);	// �������� ����� ȣ��
	 
	// �����ڰ� ȣ��Ǿ� ��������� percent_�� �ʱ�ȭ�Ǿ������� Ȯ����.
	cout << web_book.percent_;
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