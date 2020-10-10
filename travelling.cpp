#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m=0,i=0,count=0;
    cin>>n;
    int s = n;
    int x[100000],y[100000],t[10000];
    for(int i=0;i<n;i++){
        cin>>t[i]>>x[i]>>y[i];
    }
    while(n--){
        for(i=1;i<=t[m];i++){
           if(x[m]%2!=0&&y[m]%2!=0){
               if((t[m]-i)%2!=0&&i%2!=0){
                   count++;
                   break;
               }
           }if(x[m]%2==0&&y[m]%2!=0){
               if((t[m]-i)%2==0&&i%2!=0){
                   count++;
                   break;
               }
               }if(x[m]%2!=0&&y[m]%2==0){
               if((t[m]-i)%2!=0&&i%2==0){
                   count++;
                   break;
               }if(x[m]%2==0&&y[m]%2==0){
               if((t[m]-i)%2==0&&i%2==0){
                   count++;
                   break;
               }}
        }

    }
    }
    if(count==s)
    cout<<"Yes"<<"\n";
    else{
        cout<<"No"<<"\n";
    }

return 0;
}