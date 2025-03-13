#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "*   *";
        }
        else
        {
            cout << "*****";
        }
        cout << endl;
    }
}