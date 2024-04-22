#include <iostream>
using namespace std;

int main()
{
    unsigned long long a, b, a_temp, b_temp;
    cin >> a >> b;
    a_temp = a, b_temp = b;
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    cout << a << endl;
    cout << a_temp * b_temp / a << endl;
}