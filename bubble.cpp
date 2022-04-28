#include <iostream>
using namespace std;

void yalkvmom(int n, int* array) {
    int buf = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                buf = array[j];
                array[j] = array[j + 1];
                array[j + 1] = buf;
            }
        }
    }
}

int main()
{
    int n;
    cout << "введите количество элементов массива" << endl;
    cin >> n;
    int s = 0;
    int* array = new int[n];
    cout << "введите массив" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    yalkvmom(n, array);
    cout << "отсортированный массив:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }
    delete[] array;
    return 0;
}
