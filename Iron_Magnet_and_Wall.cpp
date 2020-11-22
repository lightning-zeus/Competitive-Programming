#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <fstream>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //works like magic, but at cost.
using namespace std;
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout<<x<<endl;
#define fo(i, n) for(int i=0; i<n; i++)
#define fk(i, k, n) for(int i=k; i<=n; i++)
#define fn(i, n) for(i=n-1;i>=0;i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define lli long long int
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<lli, lli>	pl;
typedef vector<int>		vi;
typedef vector<lli>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

int main() {
  lli t;
  cin>>t;
  while(t--){
      lli n,k,count=0;
      cin>>n>>k;
      int p = k + 1;
      vector<int> indices;
      indices.push_back(-1);
      string str;
      cin>>str;
      fo(i,n){
        if(str[i]=='X')
          indices.push_back(i);
      }indices.push_back(n);
      fo(i,indices.size()-1){
          int b = indices[i+1];
          vector<int> magnet,iron;
          for(int a=indices[i]+1;a<b;a++){
                if(str[a]=='M')
                  magnet.push_back(a);
                if(str[a]=='I')
                  iron.push_back(a);
          }int u=0,v=0,sheet=0;
          while(u<magnet.size()&&v<iron.size()){
                 if(magnet[u]<iron[v]){
                   sheet = 0;
                   for(int f = magnet[u];f<iron[v];f++)
                      if(str[f]==':')
                         sheet++;
                    if((p-abs(iron[v]-magnet[u])-sheet)>0){
                       count++;
                       u++;
                       v++;
                    }
                    else
                       u++;
                 
                 }else{
                   sheet = 0;
                   for(int f =iron[v];f<magnet[u];f++)
                      if(str[f]==':')
                         sheet++;
                      if((p-abs(iron[v]-magnet[u])-sheet)>0){
                       count++;
                       u++;
                       v++;
                 }
                    else
                     v++;
                   
                 }
          }
      }cout<<count<<"\n";
  }
    
    return 0;
}