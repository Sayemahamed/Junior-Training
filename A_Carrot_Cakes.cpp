#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,k,d;
    cin>>n>>t>>k>>d;
    if(ceil(ceil(t*n)/k)>d+1)
    cout<<"YES"<<endl;
    else    
    cout<<"NO"<<endl;
}