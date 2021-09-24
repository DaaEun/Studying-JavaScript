/*
	# shared_ptr
	- �ϳ��� Ư�� ��ü�� �����ϴ� ����Ʈ �����Ͱ� �� �� �������� �����ϴ� ����Ʈ �������̴�.
	- �̷��� �����ϰ� �ִ� ����Ʈ �������� ������ ���� Ƚ��(reference count)��� �Ѵ�.
	
	- ���� Ƚ���� Ư�� ��ü�� ���ο� shared_ptr�� �߰��� ������ 1�� ����, ������ ���� ������ 1�� �����Ѵ�.
	- ���� ������ shared_ptr�� ������ ���Ͽ�, ���� Ƚ���� 0�� �Ǹ� delete Ű���带 ����Ͽ� �޸𸮸� �ڵ� �����Ѵ�.
*/

#include <iostream>
#include <memory>
using namespace std;

class Person {
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// ���� Ŭ���� �������� ����
	~Person() {
		cout << "�Ҹ��� ȣ��" << endl;
	}
	void ShowPersonInfo();
};

int main(void) {

	shared_ptr<Person> yang = make_unique<Person>("�����", 24);
	cout << "������ �� : " << yang.use_count() << endl;	// 1
	auto yya = yang;
	cout << "������ �� : " << yang.use_count() << endl;	// 2
	yya.reset();	//shared_ptr�� yya ����
	cout << "������ �� : " << yang.use_count() << endl;	// 1
	
	return 0;
}

Person::Person(const string& name, int age) {// ���� Ŭ���� �������� ����
	name_ = name;
	age_ = age;
	cout << "������ ȣ��" << endl;
}

void Person::ShowPersonInfo() {
	cout << name_ << "�� ���� : " << age_ << endl;
}



/*
	# weak_ptr
	- �ϳ� �̻��� shared_ptr �ν��Ͻ��� �����ϴ� ��ü�� ���� ������ ����������, �������� ������ ���Ե��� �ʴ� ���̴�.
 
	- shared_ptr�� ���� Ƚ���� ������� �����ϴ� ����Ʈ �������̴�.
	- ���� ���ΰ� ������ ����Ű�� shared_ptr�� ������ �ִٸ�, 
	���� Ƚ���� ���� 0�� ���� �����Ƿ� �޸𸮴� ������ �������� �ʴ´�.
	- ���ΰ� ������ �����ϰ� �ִ� ��Ȳ�� ��ȯ ����(circular reference)��� �Ѵ�.
	- weak_ptr�� �ٷ� �̷��� shared_ptr �ν��Ͻ� ������ ��ȯ ������ �����ϱ� ���ؼ� ���ȴ�.
*/