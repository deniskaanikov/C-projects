#include <iostream>
using namespace std;

int sum(int a, int b) {
    int s = a + b;
    return s;
}

int razn(int a, int b) {
    int s = a - b;
    return s;
}

int main()
{
    int a, b;
    char sign;
    cin >> a >> sign >> b;
    if (sign == '+') cout << sum(a, b);
    if (sign == '-') cout << razn(a, b);
    return 0;
}
