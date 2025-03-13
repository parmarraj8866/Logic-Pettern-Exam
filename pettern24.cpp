#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (i % 2 == 0)
            {
                cout << "-";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    n = 4;
    for (int i = n; i >= 1; i--)
    {
        for (int s = 1; s <= n - i + 1; s++)
        {
            cout << " ";
        }

        for (int j = (2 * i - 1); j >= 1; j--)
        {
            if (i % 2 == 0)
            {
                cout << "-";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}