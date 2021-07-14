/*
	# �޸��� �����Ҵ�(dynamic allocation)
	������ ������ ���� ������ �Ҵ�Ǵ� �޸��� ũ��� compile time�� ���� �̸� �����ȴ�.
	������ �� ������ ũ��� ���α׷��� ����Ǵ� ������ run time�� ����ڰ� ���� �����Ѵ�.
	�̷��� run time�� �޸𸮸� �Ҵ�޴� ���� �޸��� �����Ҵ�(dynamic allocation)�̶� �Ѵ�.

	�������� ���� ū ������ �� Ÿ�ӿ� �̸� ���� �޸𸮸� �Ҵ�޾� �����Ϳ� �Ҵ��Ͽ�, �Ҵ���� �޸𸮿� �����ϴ� ���̴�.
	C������ malloc() �Լ� ���� ���̺귯�� �Լ��� �����Ͽ� �̷��� �۾��� ������ �� �ְ� ���ش�.

	C++������ C����� ���̺귯�� �Լ��� ����Ͽ� �޸��� ���� �Ҵ� �� ������ �� �� �ִ�.
	������ C++������ �޸��� ���� �Ҵ� �� ������ ���� ���� ȿ������ ����� new �����ڿ� delete �����ڸ� ���� �����Ѵ�.
*/
#include <iostream>
using namespace std;

int main(void) {

	int* ptr_int = new int;
	*ptr_int = 100;

	double* ptr_double = new double;
	*ptr_double = 3.14;

	cout << "int�� ���� �� : " << *ptr_int << endl;
	cout << "int�� ������ �޸� �ּ� : " << ptr_int << endl;

	cout << "double�� ���� �� : " << *ptr_double << endl;
	cout << "double�� ������ �޸� �ּ� : " << ptr_double << endl;

	delete ptr_int;
	delete ptr_double;
	// new �����ڸ� ���� ������ �޸𸮰� �ƴ� ������ �����Ͽ� ������ �޸𸮴� delete �����ڷ� ������ �� ����.
	
	return 0;
}