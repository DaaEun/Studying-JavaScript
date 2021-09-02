#include <iostream>
using namespace std;

template <typename T>
class Data {
private:
	T data_;
public:
	Data(T dt);
	T get_data();
};

int main(void) {
	
	Data<string> str_data("�ΰ����� ����");
	Data<int> int_data(24);

	cout << "str_data : " << str_data.get_data() << endl;
	cout << "int_data : " << int_data.get_data() << endl;

	return 0;
}

template <typename T>
Data<T>::Data(T dt) {
	data_ = dt;
}

template <typename T>
T Data<T>::get_data() {
	return data_;
}





/*
	# Ŭ���� ���ø��� Ư¡

	1. �ϳ� �̻��� ���ø� �μ��� ������ Ŭ���� ���ø� ����

		template <typename T, int i> // �� ���� ���ø� �μ��� ������ Ŭ���� ���ø��� ������.
		class X
		{ ... }


	2. Ŭ���� ���ø��� ����Ʈ ���ø� �μ� ���
	
		template <typename T = int, int i> // ����Ʈ ���ø� �μ��� Ÿ���� int������ �����.
		class X
		{ ... }


	3. Ŭ���� ���ø��� ���� Ŭ������ ���
	
		template <typename Type>
		class Y : public X <Type> // Ŭ���� ���ø� X�� ��ӹ���.
		{ ... }
*/

