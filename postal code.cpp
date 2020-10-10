#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    char str[100];
    cin>>a>>b;
    cin>>str;
    if(str[a]=='-'){
       for(int i=0;i<a+b+1;i++){
           if(i==a)
           continue;
           if(str[i]>='0'&&str[i]<='9')
           continue;
           else{
               cout<<"NO"<<"\n";
               return 0;
           }
       }cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
     return 0;
}