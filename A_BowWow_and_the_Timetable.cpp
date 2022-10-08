#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long length = s.length()-1,ans=0,i=1,onesCount = 0;
    if(length >0)
    ans++;
    for(long long j=0; j<=length; j++)
    if(s[j]=='1')onesCount++;
    while(i*2<=length)
    {
        ans ++;
        i++;
    }
    // cout<<onesCount<<endl;
    if(onesCount<=1)ans--;
    cout << ans << endl;
}