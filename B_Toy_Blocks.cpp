#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAX=1e5+11;
int n;
LL a[MAX];
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        LL sum=0,mx=0;
        for(int i=1;i<=n;++i){
            scanf("%lld",&a[i]);
            sum+=a[i];
            mx=max(mx,a[i]);
        }
        LL ans=0;
        LL aim=(sum+n-2)/(n-1);
        aim=max(aim,mx);
        ans=aim*(n-1)-sum;
        printf("%lld\n",ans);
    }
    return 0;
}