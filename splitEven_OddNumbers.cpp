#include <iostream>
#include <vector>
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
    
    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
            odd.push_back(a[i]);
        else
            even.push_back(a[i]);
    }

    for (int i = 0; i < even.size(); i++)
        cout << even[i] << " ";
    cout << endl;
    for (int i = 0; i < odd.size(); i++)
        cout << odd[i] << " ";

    return 0;
}