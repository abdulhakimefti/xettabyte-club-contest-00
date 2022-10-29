#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, r;

    while (true)
    {
        cin >> n >> d >> r;
        if(n==0&&d==0&&r==0)break;
        int mornRoute[n];
        int evenRoute[n];
        for (int i = 0; i < n; i++)
        {
            cin >> mornRoute[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> evenRoute[i];
        }
        int overTimeMoney = 0;
        for (int i = 0; i < n; i++)
        {
            int overTime = 0;
            int totalRoute = mornRoute[i] + evenRoute[i];
            if (totalRoute > d)
            {
                overTime = totalRoute - d;
            }
           if(overTimeMoney<(overTime*r)){
            overTimeMoney=overTime*r;
           }
        }
        cout << overTimeMoney << endl;
    }
    return 0;
}