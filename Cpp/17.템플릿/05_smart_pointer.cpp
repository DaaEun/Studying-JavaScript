/*
	# ����Ʈ ������(smart pointer)
	new Ű���带 ����Ͽ� �������� �Ҵ���� �޸𸮴�, �ݵ�� delete Ű���带 ����Ͽ� �����ؾ� �Ѵ�.
	C++������ �޸� ����(memory leak)�κ��� ���α׷��� �������� �����ϱ� ���� ����Ʈ �����͸� �����Ѵ�.
	
	- ������ó�� �����ϴ� Ŭ���� ���ø�����, ����� ���� �޸𸮸� �ڵ����� ������ �ش�.


	# ����Ʈ �������� ����
 
	1. unique_ptr
	2. shared_ptr
	3. weak_ptr
*/
/*
	# unique_ptr
	- �ϳ��� ����Ʈ �����͸��� Ư�� ��ü�� ������ �� �ֵ���, ��ü�� ������ ������ ������ ����Ʈ �������̴�.


	- �ش� ��ü�� �������� ������ ���� ����, �Ҹ��ڰ� �ش� ��ü�� ������ �� �ִ�.
	- move() ��� �Լ��� ���� �������� ������ ���� ������, ������ ���� ����.
	- �������� �����Ǹ�, ���� unique_ptr �ν��Ͻ��� ���� �ش� ��ü�� �������� �ʰ� �缳���ȴ�.
*/
#include <iostream>
#include <memory>
using namespace std;

class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// ���� Ŭ���� �������� ���� 
	~Person() { cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl; }
	void ShowPersonInfo();
};

int main(void)
{
	shared_ptr<Person> hong = make_shared<Person>("�浿", 29);
	cout << "���� ������ �� : " << hong.use_count() << endl;	// 1
	auto han = hong;
	cout << "���� ������ �� : " << hong.use_count() << endl;	// 2
	han.reset();		// shared_ptr�� han�� ������. 
	cout << "���� ������ �� : " << hong.use_count() << endl;	// 1
	return 0;
}

Person::Person(const string& name, int age)	// ���� Ŭ���� �������� ���� 
{
	name_ = name;
	age_ = age;
	cout << "�����ڰ� ȣ��Ǿ����ϴ�." << endl;
}

void Person::ShowPersonInfo()
{
	cout << name_ << "�� ���̴� " << age_ << "���Դϴ�." << endl;
}