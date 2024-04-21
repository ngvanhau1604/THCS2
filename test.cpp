#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int cases;
    cin >> cases;
    while (cases--)
    {
        unsigned long long n;
        cin >> n;
        int result = 0;
        while (n)
        {
            result += n % 10;
            n /= 10;
        }
        cout << ((result % 10 == 0) ? "YES" : "NO") << endl;
    }
    return 0;
}