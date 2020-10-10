#include <bits/stdc++.h>
 
using namespace std;
string s[3];
main(){
    int a=0,b=0,c=0;
    string u,v;
 
    cin >> s[0] >> s[1] >> s[2];
 
    for(int i=0; i<3; i++){
        if(s[i][1]=='>'){
            u[0]=s[i][0];
            v[0]=s[i][2];
            s[i][0]=v[0];
            s[i][2]=u[0];
        }
    }
    for(int i=0; i<3; i++){
        if(s[i][0]=='A'){a=a+1;}
        if(s[i][0]=='B'){b=b+1;}
        if(s[i][0]=='C'){c=c+1;}
    }
 
    if(a==b || a==c || b==c){cout << "Impossible";}
    else{
        if(a==2){cout << "A";}
        if(b==2){cout << "B";}
        if(c==2){cout << "C";}
        if(a==1){cout << "A";}
        if(b==1){cout << "B";}
        if(c==1){cout << "C";}
        if(a==0){cout << "A";}
        if(b==0){cout << "B";}
        if(c==0){cout << "C";}
 
    }
}
