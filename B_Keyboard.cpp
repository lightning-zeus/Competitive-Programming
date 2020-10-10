//Zeus was here
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
#include <stdlib.h>
#include <iomanip>
#include <assert.h> //works like magic, but at cost.
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
#define fn(i, n) for(int i=n-1;i>=0;i--)
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
    int n,m,x;
    cin>>n>>m>>x;
    vector<pair<int,int>> shift;
    char arr[n][m];
    fo(i,n){
        fo(j,m){
        cin>>arr[i][j];
           if(arr[i][j]=='S')
           shift.push_back(make_pair(i,j));
        }
    }int q;
    cin>>q;
    int count=0;
    while(q--){
      char c;
      cin>>c;
      if(c>=97){
          int s=0;
          fo(i,n){
              fo(j,m){
                  if(arr[i][j]==c){
                  s++;
                  break;}  }
                 
       }if(s==0){
                      cout<<"-1"<<"\n";
                      return 0;
                  }
      }if(c<97){
          c = tolower(c);
          if(shift.empty()==true){
              cout<<"-1"<<"\n";
              return 0;
          }int x,y;
           fo(i,n){
              fo(j,m){
                  if(arr[i][j]==c){
                      x = i,y=j;
                  break;
                  }
                  else{
                      cout<<"-1"<<"\n";
                      return 0;
                  }
              }
          }int dis1,dis2,k=0;
          for(auto it:shift){
              dis2 = abs(it.second - y);
              dis1= pow(dis1,2);
              dis2= pow(dis2,2);
              dis1 += dis2;
              int euc = sqrt(dis1);
              if(euc<=x){
                  k++;
                  break;
              }else{
                  continue;
              }
          }if(k>0)
          count++;

      }
    }cout<<count<<"\n";
    
    return 0;
}