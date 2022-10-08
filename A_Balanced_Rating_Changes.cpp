#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,plusodd =0,minusodd =0;
    cin >> t;
    vector<long long> v;
    while (t--) 
    {
        long long x;
        cin >> x;
        v.push_back(x);
        if(x<0&&x&1)minusodd++;
        if(x>0&&x&1)plusodd++;
    }
    plusodd/=2;
    minusodd/=2;
    for(auto &it:v)
    {
        if(it>0)
        {
            if(plusodd&&it&1)
            {
            it/=2;
                it++;
                plusodd--;
            }
            else
            it/=2;
            cout<<it<<endl;
        }
        else if(it<0)
        {
            if(minusodd&&it&1)
            {
            it/=2;
                it--;
                minusodd--;
            }
            else
            it/=2;
            cout<<it<<endl;
        }
        if(it==0)
        cout<<"0"<<endl;
    }
}