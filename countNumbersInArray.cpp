#include <iostream>
#include <map> // Include the missing header file
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }

    a[-1] = -1;
    for (int i = 0; i < n; i++)
    {

        if ((a[i] != a[i - 1]) && (m[a[i]] > 0))
        {
            cout << a[i] << " " << m[a[i]] << endl;
            m[a[i]] = 0;
        }
    }
}