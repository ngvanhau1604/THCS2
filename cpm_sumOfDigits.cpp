#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (sumOfDigits(b) < sumOfDigits(a)) swap(a, b);
    cout << a << " " << b;
}