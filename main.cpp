#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

int findMinSumSequence(int arr[], int start, int sum, int minSum, int minSumIndex) {
    if (start + 10 > 100) {
        return minSumIndex;
    }

    sum -= arr[start - 1];
    sum += arr[start + 9];

    if (sum < minSum) {
        minSum = sum;
        minSumIndex = start;
    }

    return findMinSumSequence(arr, start + 1, sum, minSum, minSumIndex);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[100];

    srand(time(0));
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 100;
    }

    int minSumIndex = findMinSumSequence(arr, 0, 0, INT_MAX, -1);

    cout << "Послідовність з мінімальною сумою починається з позиції " << minSumIndex << endl;

    return 0;
}
