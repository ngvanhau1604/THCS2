#include <iostream>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int num;
    int f_current = 1, f_previous = 0;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << f_previous << " ";
        int f_temp = f_current;
        f_current += f_previous;
        f_previous = f_temp;
    }

    return 0;
}