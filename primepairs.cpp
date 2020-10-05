/*
Print the Number of prime pairs whose difference is 6
Input = 4,20
O/p = 4 pairs
Expl-(5,11),(7,13),(11,17),(13,19)

*/

#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int l, h;
    int count = 0;
    cin >> l >> h;
    for (int i = l; i < (h - 6); i++)
    {
        int num = i;
        if (isPrime(num))
        {
            if (isPrime(num + 6))
            {
                cout << "(" << num << "," << num + 6 << ") ";
                count++;
            }
        }
    }

    if (count > 0)
    {
        cout << count;
    }
    else
    {
        cout << "No Prime Pairs";
    }
}