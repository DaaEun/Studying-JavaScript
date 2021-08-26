/*
	# ���� ����Լ� Ư¡

	1. ��ü�� �������� �ʰ� Ŭ���� �̸������� ȣ���� �� �ִ�.
	2. ��ü�� �������� �����Ƿ�, this �����͸� ������ �ʴ´�.
	3. Ư�� ��ü�� �������� �����Ƿ�, ���� ��� �����ۿ� ����� �� ����.
*/
#include <iostream>
using namespace std;

class Person {
private:
	string name_;
	int age_;
public:
	static int person_count_;				// ���� ��� ������ ����
	static int person_count();				// ���� ��� �Լ��� ����
	Person(const string& name, int age);	// ������
	~Person() { person_count_--; }			// �Ҹ���
	void ShowPersonInfo();
};

int Person::person_count_ = 0;	//���� ��� ������ ���� �� �ʱ�ȭ

int main(void) {
	
	Person yang("����", 24);
	yang.ShowPersonInfo();
	Person im("����", 49);
	im.ShowPersonInfo();

	cout << "���� ����� �� �ο� ���� " << Person::person_count() << " �� �Դϴ�." << endl;

	return 0;
}

Person::Person(const string& name, int age) {
	
	name_ = name;
	age_ = age;
	cout << ++person_count_ << " ��° ����� ����߽��ϴ�." << endl;
}

void Person::ShowPersonInfo() {
	cout << name_ << " ���� " << age_ << " �� �Դϴ�." << endl;
}

int Person::person_count() {	// ���� ��� �Լ��� ����
	return person_count_;
}