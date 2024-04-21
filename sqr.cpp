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
        cout << n * n << endl;
    }
    return 0;
}