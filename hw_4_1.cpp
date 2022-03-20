#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    // ввод массива
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int num_min, num_max;
    num_min = num_max = 0;
    // поиск минимального и максимального значений
    for (int i = 0; i < n; i++) {
        if (a[i] < a[num_min]) {
            num_min = i;
        }
        if (a[i] > a[num_max]) {
            num_max = i;
        }
    }
    int temp;
    temp = a[num_max];
    a[num_max] = a[num_min];
    a[num_min] = temp;
    //вывод массива
    for (auto wow : a) {
        cout << wow << " ";
    }
}
