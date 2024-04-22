#include <iostream>
#include <vector> // Include the missing header file for the vector class
using namespace std;

// return 1 if key is a Fibonacci number, 0 otherwise
bool isFibonacci(int key)
{
    int a = 0;
    int b = 1;
    while (b < key)
    {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b == key;
}

// return 1 if key is a prime number, 0 otherwise
bool isPrime(int key)
{
    if (key <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= key; i++)
    {
        if (key % i == 0)
        {
            return false;
        }
    }

    return true;
}

int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int nMin, nMax;
    cin >> nMin >> nMax;
    if (nMax < nMin)
    {
        swap(nMin, nMax);
    }
    for (int i = nMin; i <= nMax; i++)
    {
        if (isFibonacci(sumOfDigits(i)) && isPrime(i))
        {
            cout << i << " ";
        }
    }
}