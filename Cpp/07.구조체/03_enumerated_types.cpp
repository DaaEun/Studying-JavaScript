#include <iostream>
using namespace std;

enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

 

int main(void)

{

    int input;

    Weather wt;

 

    cout << "������ ������ �Է��� �ּ��� : " << endl;

    cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;

    cin >> input;

    wt = (Weather)input;

 

    switch (wt)

    {

        case SUNNY:

            cout << "������ ������ ���� ���ƿ�!";

            break;

        case CLOUD:

            cout << "������ ������ �帮�׿�!";

            break;

        case RAIN:

            cout << "������ ������ �� �ַ��ַ� ���׿�!";

            break;

        case SNOW:

            cout << "������ ������ �Ͼ� ���� ������!";

            break;

        default:

            cout << "��Ȯ�� ������� �Է��� �ּ���!";

            break;

    }

 

    cout << endl << "����ü Weather�� �� ������� " << SUNNY << ", " << CLOUD << ", "

        << RAIN << ", " << SNOW << "�Դϴ�.";

    return 0;

}