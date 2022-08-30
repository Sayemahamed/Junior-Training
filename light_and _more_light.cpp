#include<bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        unsigned long long int n,count=0;
        cin >> n;
        if(n==0) break;
        for(unsigned long long int i=2; i*i<=n; ++i)
        {
            while(n%i==0)
            {
                count++;
                n=n/i;
            }
        }
        if(n>1)
        {
            count++;
        }
        if(count%2==0)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
}