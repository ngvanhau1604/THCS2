#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (!(x & 1))
                cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}