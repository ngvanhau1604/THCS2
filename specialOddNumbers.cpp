#include <iostream>
using namespace std;

bool isSpecialEven(unsigned long long number)
{
    if (number % 2 == 1)
    {
        int odd = 0, even = 0;
        while (number)
        {
            if (((number % 10) % 2) == 1)
                odd++;
            else
                even++;
            number /= 10;
        }
        return (odd > even);
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