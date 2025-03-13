#include <iostream>
using namespace std;

int main()
{
    int n = 5, count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (count == 5 || count == 8 || count == 9)
            {
                cout << " ";
                count++;
            }
            else
            {
                cout << count << " ";
                count++;
            }
        }
        cout << endl;
    }
}
