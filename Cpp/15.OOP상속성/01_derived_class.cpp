/*
    # �Ļ� Ŭ����(derived class) : ���� Ŭ������ ��� Ư���� �����޾� ���Ӱ� �ۼ��� Ŭ����

    class �Ļ�Ŭ�����̸� : �������������� ����Ŭ�����̸�[, �������������� ����Ŭ�����̸�, ...]
    {
        // �Ļ� Ŭ���� ��� ����Ʈ
    }

    - ���� ���� �����ڴ� ���� Ŭ������ ����� ����� �� �ִ� �Ļ� Ŭ������ ���� ���� ������ �����Ѵ�.
    �̶� ���� ���� �����ڸ� �����ϸ�, �Ļ� Ŭ������ ���� ���� ������ private�� �⺻ �����̴�.
 
    - ��ǥ(,)�� ����Ͽ� ��ӹ��� ���� Ŭ������ ���� �� ����� �� �ִ�.
    �̶� �Ļ� Ŭ������ ��ӹ޴� ���� Ŭ������ �ϳ��̸� ���� ���(single inheritance),
    ���� ���� ���� Ŭ������ ��ӹ����� ���� ���(multiple inheritance)�̶� �Ѵ�.


    # �Ļ� Ŭ������ Ư¡

    1. �ݵ�� �ڽŸ��� �����ڸ� �ۼ��ؾ� �Ѵ�.
    2. ���� Ŭ������ ������ �� �ִ� ��� ��� �������� ����ȴ�.
    3. ���� Ŭ������ ������ �� �ִ� ��� ��� �Լ��� ����� �� �ִ�.
    4. �ʿ��� ��ŭ ����� �߰��� �� �ִ�.
*/
#include <iostream>
using namespace std;

class Person {

private:
    string name_;
    int age_;
public:
    Person(const string& name, int age);    // ���� Ŭ���� �������� ����
    void ShowPersonInfo();
};

class Student :public Person {

private:
    int student_id_;
public:
    Student(int sid, const string& name, int age);  // �Ļ� Ŭ���� �������� ����
};

int main(void) {
    Student yang(2017920036, "����", 24);
    yang.ShowPersonInfo();
    
    return 0;
}

Person::Person(const string& name, int age) {   // ���� Ŭ���� �������� ����
    name_ = name;
    age_ = age;
}

void Person::ShowPersonInfo() {
    cout << "�̸� : " << name_ << endl << "���� : " << age_;
}

Student::Student(int sid, const string& name, int age) :Person(name, age) { // �Ļ� Ŭ���� �������� ����
    student_id_ = sid;
}