/*
	# ������ ����Լ�
	������ Ŭ������ �ش� Ŭ������ ��� ��� �Լ��� Ư�� Ŭ������ �����尡 �ȴ�.
	������ ����Լ��� ���� Ư�� Ŭ������ ������ ������ �ʿ���� ����Լ��� �ִ�.

	�ռ� �������� 
	ShowDiagonal() �Լ��� Rect Ŭ������ private ����� ���� �����ϵ��� �����Ǿ� �ִ�.
	ShowSize() �Լ��� Rect Ŭ������ public �������̽������� �����Ǿ� �ִ�.
	���� Display Ŭ�������� Rect Ŭ������ ���� ������ ������ �ʿ��� �Լ��� ShowDiagonal() �Լ����̴�.

	- ������ ����Լ��� �ش� Ŭ������ Ư�� ��� �Լ����� ������� �����ϴ� ���� �ǹ��Ѵ�.
	- �̰��� ������ ������ �� �ʿ��� �Լ��� ���ؼ��� ������ ����ϹǷ�, 
	���� ����(data hiding) �� ĸ��ȭ(encapsulation) ���信 ���� ������ ������ �� �ִ�.
*/
#include <iostream>
#include <cmath>
using namespace std;

class Rect;		// ���� ����(forward declaration)

class Display {
public:
	void ShowSize(const Rect& target);
	void ShowDiagonal(const Rect& target);
};

class Rect {

private:
	double height_;
	double width_;
public:
	Rect(double height, double width);	// ������
	void height() const;
	void width() const;
	friend void Display::ShowDiagonal(const Rect& target);	// ������ ����Լ� ����
};

int main(void) {

	Rect rect01(10, 20);

	Display rect_display;
	rect_display.ShowSize(rect01);
	rect_display.ShowDiagonal(rect01);

	return 0;
}

Rect::Rect(double height, double width) {
	height_ = height;
	width_ = width;
}

void Rect::height() const {
	cout << "�簢���� ���� : " << this->height_ << endl;
}

void Rect::width() const {
	cout << "�簢���� �ʺ� : " << this->width_ << endl;
}

void Display::ShowSize(const Rect& target) {
	target.height();
	target.width();
}

void Display::ShowDiagonal(const Rect& target) {
	double diagonal;
	diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2));

	cout << "�簢���� �밢�� : " << diagonal << endl;
}
