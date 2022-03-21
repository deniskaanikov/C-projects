#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "введите размер массива и сам массив" << endl;
    int n, m;
    cin >> n >> m;
    int a[10000][10000];
    // ввод массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    //подсчет суммы положительных элементов
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > 0) {
                sum += a[i][j];
            }
        }
    }
    cout << "сумма положительных элементов массива: ";
    cout << sum;
    return 0;
}
