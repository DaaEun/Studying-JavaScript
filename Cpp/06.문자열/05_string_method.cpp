/*
	# string �޼ҵ�

	1. length() �޼ҵ�� size() �޼ҵ�
	2. append() �޼ҵ�
	3. find() �޼ҵ�
	4. compare() �޼ҵ�
	5. replace() �޼ҵ�
	6. capacity() �޼ҵ�� max_size() �޼ҵ�
*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {

	cout << "1. length() �޼ҵ�� size() �޼ҵ�" << endl;
	string str1 = "C++ Programming";

	cout << "length() �޼ҵ� : " << str1.length() << endl;
	cout << "size() �޼ҵ� : " << str1.size() << endl;
	// length() �޼ҵ�� ���ڿ��� ���̸� ��Ÿ������, 
	// size() �޼ҵ�� �ش� string ��ü�� �޸𸮿��� ���� ����ϰ� �ִ� ũ�⸦ ��Ÿ����.
	cout << endl;



	cout << "2. append() �޼ҵ�" << endl;
	string str2, str3, str4;

	str2.append("Let's go to a party!");
	str3.append("Let's go to a party!", 4, 7);
	str4.append(4, 'X');

	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << endl;



	cout << "3. find() �޼ҵ�" << endl;
	cout << str1.find("Pro") << endl;
	cout << str1.find('r') << endl;

	if (str1.find("Pro", 5) != string::npos) {
		cout << "�ش� ���ڿ��� ã�ҽ��ϴ�." << endl;
	}
	else {
		cout << "�ش� ���ڿ��� ã�� ���߽��ϴ�." << endl;
	}
	// find() �޼ҵ�� ã�� ���ϸ�, string::size_type�� string::npos��� ����� ��ȯ�Ѵ�.
	// ���� ����� string::npos �� static const size_type = -1 �� ��õǾ� �ִ�.
	cout << endl;



	cout << "4. compare() �޼ҵ�" << endl;
	string str5 = "ABC";
	string str6 = "ABD";

	if (str5.compare(str6) == 0) {
		cout << str5 << "��(��) " << str6 << "�� ����." << endl;
	}
	else if (str5.compare(str6) < 0) {
		cout << str5 << "��(��) " << str6 << "���� ���� ���� ������ �տ� �ִ�." << endl;
	}
	else if (str5.compare(str6) > 0) {
		cout << str5 << "��(��) " << str6 << "���� ���� ���� ������ �ڿ� �ִ�." << endl;
	}
	cout << endl;



	cout << "5. replace() �޼ҵ�" << endl;
	string str7 = "He is very nice!";
	string str8 = "nice";
	string str9 = "handsome";

	string::size_type index = str7.find(str8);
	if (index != string::npos) {
		str7.replace(index, str8.length(), str9);
	}
	cout << str7 << endl;
	// replace() �޼ҵ带 ����ϱ� ��, find() �޼ҵ带 ����Ͽ� �ش� ���ڿ��� �����ϴ� �ľ��ϴ� ���� ����.
	cout << endl;



	cout << "6. capacity() �޼ҵ�� max_size() �޼ҵ�" << endl;
	// capacity() �޼ҵ�� �ش� ���ڿ��� �����(reallocation) ���� �ʰ� ������ �� �ִ� �ִ� ���ڿ��� ���̸� ��ȯ�Ѵ�.
	// max_size() �޼ҵ�� �ش� ���ڿ��� �ִ��� ���Թ����� ���� �� �ִ� �ִ� ���ڿ��� ���̸� ��ȯ�Ѵ�.
	cout << "length : " << str1.length() << endl;
	cout << "capacity : " << str1.capacity() << endl;
	cout << "max_size : " << str1.max_size() << endl;

	return 0;
}