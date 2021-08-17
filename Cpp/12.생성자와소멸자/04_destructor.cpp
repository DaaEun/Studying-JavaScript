/*
	#�Ҹ���(destructor)
	- C++���� �����ڴ� ��ü ����� �ʱ�ȭ�Ӹ� �ƴ϶�, ��ü�� ����ϱ� ���� �ܺ� ȯ������� �ʱ�ȭ�ϴ� ������ �Ѵ�.
	���� ��ü�� ������ ������ �������� �ݴ� ������ ������ ��� �Լ��� �ʿ��ϴ�.
	�̷��� ������ �ϴ� ��� �Լ��� �Ҹ����̴�.

	- �Ҹ��ڴ� ��ü�� ������ ������ �����Ϸ��� ���� �ڵ����� ȣ��Ǹ�, ����� ���� ��ü�� �����Ѵ�.

	- Ŭ���� �Ҹ����� �̸��� �ش� Ŭ������ �̸��� ������, �̸� �տ� ���� ǥ��(tilde, ~)�� �ٿ� �����ڿ� �����Ѵ�.
	��, Book Ŭ������ �Ҹ��ڴ� ~Book()�̴�.

 
	# �Ҹ��� Ư¡

	1. �Ҹ��ڴ� �μ��� ���� �ʴ´�.
	2. �Ҹ��ڴ� ��ȯ���� ������ void������ �������� �ʴ´�.
	3. ��ü�� ���� ���� �����ڸ� ���� �� ������, �Ҹ��ڴ� �� �ϳ��� ���� �� �ִ�.
	4. �Ҹ��ڴ� const, volatile �Ǵ� static���� ����� ���� ������, 
	const, volatile �Ǵ� static���� ����� ��ü�� �Ҹ��� ���ؼ� ȣ��� �� �ִ�.


	# �� �������� Ŭ������ �Ҹ��ڴ� ��ȯ���� ������ �����Ѵ�.
	- ���� ��� �����ڿ��� new Ű���带 �̿��� �������� �޸𸮸� �Ҵ��ߴٸ�, 
	�Ҹ��ڿ����� delete Ű���带 �̿��� �������� �Ҵ���� �޸𸮸� ��ȯ�ؾ� �Ѵ�.
	- �׷��� ������ �ش� ���α׷��� �޸� ����(memory leak)�� ����ؼ� �߻��ϰ� �� ���̴�.
*/
#include <iostream>
using namespace std;

class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	~Book();	// �Ҹ����� ���� ���� 
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};

int main(void)
{
	Book web_book("HTML�� CSS", 350);	// �������� �Ͻ��� ȣ�� 
	// �����ڰ� ȣ��Ǿ� ��� ������ percent_�� �ʱ�ȭ�Ǿ������� Ȯ����. 
	cout << web_book.percent_ << endl;
	return 0;
}

Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}

Book::~Book()	// �Ҹ����� ���� 
{
	// ���α׷��� ����� �� �����Ϸ��� ���� �ڵ����� ȣ���.
	cout << "**Book ��ü�� �Ҹ��� ȣ��**" << endl;
}

void Book::set_percent()
{
	percent_ = (double)current_page_ / total_page_ * 100;
}