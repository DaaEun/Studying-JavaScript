/*
	����ü(enumerated types)
	- enum Ű���带 ����Ͽ� �����Ѵ�.
	- ���ο� Ÿ���� �����ϸ鼭 ���ÿ� �� Ÿ���� ���� �� �ִ� ������ ������� ���� ����Ѵ�.
	- �̶� ������� ���� ������� ������ 0���� ���۵Ǹ�, �� ������ �ٷ� ���� ��������� 1��ŭ �����Ǹ� ���ǵȴ�.
	- ����ü�� �̿��ϸ� ���α׷��� �������� ��������, ������ ���ϴ� ���� �ǹ̸� �ο��� �� �ִ�.
*/


#include <iostream>
#include <string>
using namespace std;

enum Weather {SUUNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

int main(void) {

	int input;
	Weather wt;

	cout << "������ ������ �Է��� �ּ��� : " << endl;
	cout << "(SUUNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30)" << endl;
	cin >> input;
	wt = (Weather)input;

	switch (wt)
	{
	case SUUNY:
		cout << "������ ���� : ����";
		break;
	case CLOUD:
		cout << "������ ���� : �帲";
		break;
	case RAIN:
		cout << "������ ���� : ��";
		break;
	case SNOW:
		cout << "������ ���� : ��";
		break;
	default:
		cout << "��Ȯ�� ������� �Է��ϼ���.";
		break;
	}

	cout << endl << "����ü Weather�� �� ������� " << SUUNY << ", " << CLOUD << ", " << RAIN << ", " << SNOW << "�Դϴ�.";
	
	return 0;
}