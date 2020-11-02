#include <bits/stdc++.h>
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
   lli n;
   cin>>n;
   set<lli> s;
   fo(i,n){
       lli r;
       cin>>r;
       s.insert(r);
   }if(s.size()==1){
         cout<<"YES"<<"\n";
         return 0;
   }if(s.size()==2){
       cout<<"YES"<<"\n";
       return 0;
   }
   if(s.size()==3){
      auto it = s.begin();
      lli first = *it;
     
      it++;
      lli second = *it;
   
      it++;
      lli third = *it;
     
      if(second-first==third-second)
        cout<<"YES"<<"\n";
      else
      {
          cout<<"NO"<<"\n";
      }
      
   }else{
       cout<<"NO"<<"\n";
   }
    
    return 0;
}