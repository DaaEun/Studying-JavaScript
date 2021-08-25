/*
# ������ �Լ��� ���� ���
2. ���� �Լ��� �����ϴ� ��� : private ����� ���� ������ ���� C++���� �����ϴ� ������ �Լ� ��밡��
*/
#include <iostream>
using namespace std;

class Position {
private:
	double x_;
	double y_;
public:
	Position(double x, double y);	// ������
	void Display();
	friend Position operator-(const Position& pos1, const Position& pos2);	// - : ������ �Լ�
};

int main(void) {

	Position pos1 = Position(3.3, 12.5);
	Position pos2 = Position(-14.4, 7.8);
	Position pos3 = pos1 - pos2;

	pos3.Display();
	return 0;
}

Position::Position(double x, double y) {
	x_ = x;
	y_ = y;
}

Position operator-(const Position& pos1, const Position& pos2) {
	return Position((pos1.x_ + pos2.x_) / 2, (pos1.y_ + pos2.y_) / 2);
}

void Position::Display() {
	cout << "�� ������ �߰� ������ ��ǥ : (" << this->x_ << ", " << this->y_ << ")";
}


/*
	# �����ε��� ���� ����

	1. ���� ���ο� �����ڸ� ������ �� ����.
	ex) ���� ��Ÿ���� ���� %%��� �����ڸ� ���Ӱ� ������ �� ����.

	2. �⺻ Ÿ���� �ٷ�� �������� �ǹ̴� �������� �� ������, 
	���� �����ε��� �������� �ǿ����� �� �ϳ��� �ݵ�� ����� ���� Ÿ���̾�� �Ѵ�.
	ex) �� ���� double ���� ���� ���� ������(+)�� ������ �����ϵ��� �����ε��� �� ����.

	3. �����ε��� �����ڴ� �⺻ Ÿ���� �ٷ�� ��쿡 ����Ǵ� �ǿ������� ��, �켱���� �� �׷�ȭ�� �ؼ��ؾ� �Ѵ�.
	ex) ������ ������(/)�� ���� �������̹Ƿ� ���� �����ڷ� �����ε��� �� ����.

	4. �����ε��� �����ڴ� ����Ʈ �μ��� ����� �� ����.
*/