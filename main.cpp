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

    cout << "¬вед≥ть початкове число: ";
    cin >> a;
    cout << "¬вед≥ть к≥нцеве число: ";
    cin >> b;

    int result = sumRange(a, b);
    cout << "—ума чисел в д≥апазон≥ в≥д " << a << " до " << b << " = " << result << endl;

    return 0;
}
