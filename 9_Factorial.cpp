#include <iostream>
using namespace std;
int main()
{
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    double sum = 0.0;
    double factorial = 1.0;

    for (int i = 1; i <= N; i++)
    {
        factorial *= i; 
        sum += (i / factorial);
    }

    cout << "Sum of the series is: " << sum << endl;

    return 0;
}
