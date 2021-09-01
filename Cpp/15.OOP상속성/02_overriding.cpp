/*
	# �������̵�(overriding)
	- �Լ� �����ε�(overloading)�̶� ���� �ٸ� �ñ״�ó�� ���� ���� �Լ��� ���� �̸����� �����ϴ� ���̴�.
	- �Լ� �������̵�(overriding)�̶� �̹� ���ǵ� �Լ��� �����ϰ�, ���� �̸��� �Լ��� ���Ӱ� �����ϴ� ���̴�.


	# ��� �Լ� �������̵�
	- �Ļ� Ŭ������ ����� ���� �� ����� ���� ���� ���ѿ� �´� ���� Ŭ������ ��� ����� ��ӹ޴´�.
	�̷��� ��ӹ��� ��� �Լ��� �״�� ����ص� �ǰ�, �ʿ��� ������ ���� �������Ͽ� ����� ���� �ִ�.
	- �������̵��̶� ��� �Լ��� ���۸��� �������ϴ� ���̹Ƿ�, �Լ��� ������ ���� ��� �Լ��� ������ ���ƾ� �Ѵ�.
*/
#include <iostream>
using namespace std;

class Person {

private:
    string name_;
    int age_;
public:
    Person(const string& name, int age);    // ���� Ŭ���� �������� ����
    //void ShowPersonInfo();
    virtual void ShowPersonInfo();          // �������̵��� ������ �ذ��� ���� virtual ���� �Լ� 
};

class Student :public Person {

private:
    int student_id_;
public:
    Student(int sid, const string& name, int age);  // �Ļ� Ŭ���� �������� ����
    //void ShowPersonInfo();                          // �Ļ� Ŭ�������� ��ӹ��� ��� �Լ��� ������
    virtual void ShowPersonInfo();                  // �������̵��� ������ �ذ��� ���� virtual ���� �Լ� 
};

int main(void) {

    Person hong("�浿", 35);
    hong.ShowPersonInfo();
    Student yang(2017920036, "����", 24);
    yang.Person::ShowPersonInfo();  //  ���� ���� ������(::) ��� -> �Ļ� Ŭ�������� ���� Ŭ������ ���� ����Լ� ȣ��
    yang.ShowPersonInfo();

    // �Ļ� Ŭ�������� �������̵��� ������
    Person* ptr_person;
    ptr_person = &hong;
    ptr_person->ShowPersonInfo();
    ptr_person = &yang;
    ptr_person->ShowPersonInfo();
    /*
        # �Ļ� Ŭ�������� �������̵��� ������
        - �� �� ��� Person ��ü�� ShowPersonInfo() �Լ��� ȣ��ȴ�.
        - ������ ������ ������ ����Ű�� ��ü�� Ÿ���� �������� �Լ��� ȣ���ϴ� ���� �ƴ϶�,
        �ش� �������� Ÿ���� �������� �Լ��� ȣ���ϱ� �����̴�.
        - ���� Person ��ü�� ����ų �� �ִ� ������ �����δ� Person ��ü�� ��� �Լ����� ȣ���� �� �ִ�.
    */
    return 0;
}

Person::Person(const string& name, int age) {   // ���� Ŭ���� �������� ����
    name_ = name;
    age_ = age;
}

void Person::ShowPersonInfo() {
    cout << "�̸� : " << name_ << endl << "���� : " << age_ << endl;
}

Student::Student(int sid, const string& name, int age) :Person(name, age) { // �Ļ� Ŭ���� �������� ����
    student_id_ = sid;
}

void Student::ShowPersonInfo() {
    cout << "�й� : " << student_id_ << endl;
}