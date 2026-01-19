#include <iostream>

using namespace std;

int main() {
    const int n = 5;
    int arr[n] = {50, 40, 30, 20, 10};
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
                count++;
            }
        }
        if (!swapped) {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<count<< endl;

    return 0;
}