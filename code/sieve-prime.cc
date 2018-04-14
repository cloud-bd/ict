#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int n = 100;
    bool prime[n];

    for(int i = 0; i <=n; i++)
    {
        prime[i] = true;
    }

    for(int p = 2; p*p <= n; p++)
    {
        if(prime[p] == true)
        {

            for(int i = 2*p; i <= n; i = i+p)
            {

                prime[i] = false;

            }

        }
    }

    for(int i = 2; i <= n; i++)
    {
        if(prime[i])
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
