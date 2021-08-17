/*
	# ����Ʈ ������(default constructor)
	����Ʈ �����ڴ� ��ü�� ������ �� ����ڰ� �ʱ갪�� ������� ������, �����Ϸ��� �ڵ����� �����ϴ� �������̴�.
	����Ʈ �����ڴ� ����ڷκ��� �μ��� ���޹��� �����Ƿ�, �Ű������� ������ �ʴ´�.
	�Ű������� ������ �����Ƿ� ��κ��� ����Ʈ �����ڰ� 0�̳� NULL, �� ���ڿ� ������ �ʱ�ȭ�Ѵ�.


	# ����Ʈ �������� ����
	1. �Լ� �����ε��� �̿��� ���
	EX)	Book();
	2. ����Ʈ �μ��� �̿��� ���
	EX)	Book::Book(const string& title = "�� ���α׷���", int total_page = "100");

	
	# ��ü�� ����
	1. Book web_book;             // ����Ʈ �������� �Ͻ��� ȣ��
	2. Book web_book = Book();    // ����Ʈ �������� ����� ȣ��
	3. Book *ptr_book = new Book; // ����Ʈ �������� �Ͻ��� ȣ��
*/
#include <iostream>
using namespace std;

class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title = "�� ���α׷���", int total_page = 100);
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};

int main(void)
{
	Book web_book;	// ����Ʈ �������� �Ͻ��� ȣ��
	// �����ڰ� ȣ��Ǿ� ��� ������ percent_�� �ʱ�ȭ�Ǿ������� Ȯ����. 
	cout << web_book.percent_;
	return 0;
}

Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}

void Book::set_percent()
{
	percent_ = (double)current_page_ / total_page_ * 100;
}

/*
	������ �����Ϸ��� ��ü�� ������ �ƴ� �Լ��� ȣ��� ���� ������ �߻���ų ���̴�.
	EX)	Book web_book();
*/