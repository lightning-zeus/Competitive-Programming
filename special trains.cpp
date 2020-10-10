#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int j = n;
    j -= n;
    int time=0;
   int c[501];
   int s[101];
   int f[101];
    for(int i=1;i<n;i++){
        cin>>c[i]>>s[i]>>f[i];
    }   
    while(n>1){
            time = c[j] + s[j];
            for(int i = j;i<n-1;i++){
              if(time>s[i+1]&&time%f[i+1]==0){
                time += c[i+1];
              }else{
                if(time<s[i+1])
                time = s[i+1];
                if(time%f[i+1]!=0)
                time += f[i+1]*ceil(time%)

              }
            }



    return 0;
}