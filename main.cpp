#include <iostream>
#include <Windows.h>
using namespace std;

int sumRange(int a, int b) {
    if (a > b) {
        return 0;
    }
    else {
        return a + sumRange(a + 1, b);
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;

    cout << "������ ��������� �����: ";
    cin >> a;
    cout << "������ ������ �����: ";
    cin >> b;

    int result = sumRange(a, b);
    cout << "���� ����� � ������� �� " << a << " �� " << b << " = " << result << endl;

    return 0;
}
