#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n;

    cin >> n;

    int arr[10000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort the array in ascending order
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}