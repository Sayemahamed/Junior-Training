#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long arr[]={1,2,3,4,5,6,7,8,9,10};
for(int i = 0;i <1<<5; ++i)
        {
            for(int j = 0;j < 5;++j)
                if(i & (1 << j))
                    cout << arr[j] << ' ';
            cout << endl;
    }
}
