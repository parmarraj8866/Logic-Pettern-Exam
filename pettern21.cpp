#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
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

    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= i; s++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++)
        {
            if (i % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
}