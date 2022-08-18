#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,sum1=0,sum2=0,flag=0;
    cin >> t;
    long long arr[t];
    for (int i = 0; i < t; ++i)
    {
        cin >> arr[i];
    }    
    sort(arr,arr+t);
    for (int i = t-1; 0 <= i; --i)
    {
        if (flag == 1)
        {
        sum2 += arr[i];
        flag=0;
        }
        else
        {
        sum1 += arr[i];
        flag=1;
        }
    }
    cout << sum1<<" "<<sum2<<endl;
}