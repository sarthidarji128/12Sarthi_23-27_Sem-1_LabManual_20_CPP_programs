#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
            cout << " ";
        for (k = i; k <= 2 * i - 1; k++)
            cout << k;
        for (l = 2 * i - 2; l >= i; l--)
            cout << l;
        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        for (j = 4; j >= i; j--)
            cout << " ";
        for (k = i; k <= 2 * i - 1; k++)
            cout << k;
        for (l = 2 * i - 2; l >= i; l--)
            cout << l;
        cout << endl;
    }
    return 0;
}