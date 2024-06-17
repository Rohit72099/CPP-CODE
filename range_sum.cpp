#include<bits/stdc++.h>
using namespace std;
long long f(long long x)
{
    long long ans=x*1ll*(x+1)/2;
    return ans;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        // if(l>r){
        //     swap(l,r);
        // }
        long long ans = f(r)-f(l-1);
        cout<<ans<<endl;
    }
    
    
}