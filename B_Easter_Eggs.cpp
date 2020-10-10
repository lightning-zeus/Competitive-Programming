#include<bits/stdc++.h>
using namespace std;
 
 
 
int n, a;
char colors[8] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};
 
 
 
int main(){
    cin>>n;
    string s = "ROYGBIV", ans="";
    int num = n/7;
    for(int i=0; i<num; i++) cout<<s;
    int a = n-num*7;
    if(a == 1)cout<<'G';
    else if(a == 2)cout<<"GB";
    else if(a == 3)cout<<"GBI";
    else if(a == 4)cout<<"GBIV";
    else if(a == 5)cout<<"RGBIV";
    else if(a == 6)cout<<"ROGBIV";
    cout<<"\n";
    return 0;
}