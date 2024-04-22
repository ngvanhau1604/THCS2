#include <iostream>
using namespace std;

bool isSpecialEven(unsigned long long number)
{
    if (number % 2 == 0)
    {
        unsigned long long sum = 0;
        while (number)
        {
            if (((number % 10) % 2) == 1)
                return false;
            number /= 10;
        }
        return true;
    }
    return false;
}
int main()
{
    unsigned long long n;
    cin >> n;
    while (n--)
    {
        unsigned long long number;
        cin >> number;
        cout << (isSpecialEven(number) ? "YES" : "NO") << endl;
    }
}