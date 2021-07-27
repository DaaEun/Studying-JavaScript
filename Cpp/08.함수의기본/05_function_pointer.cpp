#include <iostream>
using namespace std;

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double , double, double (*func)(double, double));

int main(void)
{
	double (*calc)(double, double) = NULL; // �Լ� ������ ����
    double num1 = 3, num2 = 4, result = 0;
    char oper = '*';
        
    switch (oper)
    {
        case '+' :
            calc = Add;
            break;
        case '-':
            calc = Sub;
            break;
        case '*':
            calc = Mul;
            break;
        case '/':
            calc = Div;
            break;
        default:
        	cout << "��Ģ����(+, -, *, /)���� �����մϴ�.";
            break;
    }
     
    result = Calculator(num1, num2, calc);
    cout << "��Ģ ������ ����� " << result << "�Դϴ�.";
    return 0;	
}

double Add(double num1, double num2)
{
	return num1 + num2;
}

double Sub(double num1, double num2)
{
	return num1 - num2;
}

double Mul(double num1, double num2)
{
	return num1 * num2;
}

double Div(double num1, double num2)
{
	return num1 / num2;
}

double Calculator(double num1, double num2, double (*func)(double, double))
{
    return func(num1, num2);
}