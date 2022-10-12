#include<bits/stdc++.h>
using namespace std;    
int main()
{
    long long size ,divisible,test,i=0;
    cin >> size>>divisible;
    test=divisible;
    while(test)
    {
        i++;
        test/=10;
    }
    // cout<<i<<endl;
    if(i>size)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<divisible;
    size-=i;
    for(long long i=0; i<size; i++)cout<<0;
}