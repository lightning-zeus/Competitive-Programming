#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    ull sum=0,temp=0;
    int ans=0;
    string s;
    cin>>s;
    if(s.size()>1) ans++;
    rep(i,s.size()){
        sum+=s[i]-'0';
    }
    while(sum>=10){
        temp=0;
        while(sum>0){
            temp+=sum%10;
            sum/=10;
        }
        sum=temp;
        ans++;
    }
	cout<<ans;
	
}