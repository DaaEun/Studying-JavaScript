/*
	# ������(friend)
	C++���� ��ü�� private ������� �ش� ��ü�� public ����Լ��� ���ؼ��� ������ �� �ִ�.
	������ ��쿡 ���� �ش� ��ü�� ����Լ��� �ƴ� �Լ��� private ����� �����ؾ߸� �� ��찡 �ִ�.
	�Ź� private ����� �����ϱ� ���� ���ο� public ����Լ��� �ۼ��ϴ� ���� �ſ� ��ȿ�����̴�.

	���� �������� ���ο� ���� ���� Ű���带 ����Ѵ�.
	������� ������ ��� ���� �ش� ��ü�� ��� ����� ������ �� �ִ� ������ �ο��� �ش�.
	�����Լ�, Ŭ����, ����Լ��� �� ���� ���·� ����� �� �ִ�.



	#������ �Լ� ����
	
	friend Ŭ�����̸� �Լ��̸�(�Ű��������);

	����� �������Լ��� Ŭ���� ����ο� �� ������ ���Ե�����, Ŭ������ ����Լ��� �ƴϴ�.
	�ش� Ŭ������ ����Լ��� �ƴ�����, ����Լ��� ���� ���� ������ ������.

	- friend Ű����� �Լ��� ���������� ����ؾ� �ϸ�, �Լ��� ���ǿ��� ������� �ʴ´�.
	- Ŭ���� ������� public, private, protected ���� �� ��𿡳� ��ġ�� �� ������, ��ġ�� ���� ���̴� ���� ����.



	#�������� �ʿ伺
	Ŭ������ ���� ���� �����ڸ� �����ε��� �� �������� �ʿ伺�� ���� �߻��Ѵ�.
	�� ������ �ٷ� ����Լ��� ȣ�� ���¿� �ִ�.
	����Լ��� ���� �ǿ������� ��ü�� ȣ���ϴ� �����̹Ƿ�, ���� �������� �Ű����� ������簡 Ÿ�Կ� �ΰ�������.

	������ ����Լ��� �ƴ� �Լ��� ����ϸ� �ش� ��ü�� private ����� ������ �� ����.
	���� �̶� ����ϴ� ���� �������̴�.
*/
#include <iostream>
using namespace std;

class Rect {

private:
	double height_;
	double width_;
public:
	Rect(double height, double width);	// ������
	void DisplaySize();
	Rect operator*(double mul) const;
	friend Rect operator*(double mul, const Rect& origin);	// ������ �Լ�
};

int main(void) {

	Rect origin_rect(10, 20);
	Rect changed_rect01 = origin_rect * 2;
	Rect changed_rect02 = 3 * origin_rect;

	changed_rect01.DisplaySize();
	changed_rect02.DisplaySize();
	return 0;
}

Rect::Rect(double height, double width) {
	height_ = height;
	width_ = width;
}

void Rect::DisplaySize() {
	cout << "�簢���� ���� : " << this->height_ << endl;
	cout << "�簢���� �ʺ� : " << this->width_ << endl;
}

Rect Rect::operator*(double mul)const {
	return Rect(height_ * mul, width_ * mul);
}

// changed_rect02 �������� ����
Rect operator*(double mul, const Rect& origin) {
	return origin * mul;
}
