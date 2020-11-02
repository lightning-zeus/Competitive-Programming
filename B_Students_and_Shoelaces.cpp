#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;
 
void solve()
{
    int n,m,t1, t2,i,j;
    cin>>n>>m;
    map<int, pair<int, int>>edge;
    map<pair<int, int>, bool>visited;
    int degree[105];
    memset(degree, 0, sizeof(degree));
    for(i=0; i<m; i++)
    {
        cin>>t1>>t2;
        edge[i] = make_pair(t1, t2);
        degree[t1]++;
        degree[t2]++;
    }
    int ans =0;
    while(1)
    {
        vector<pair<int, int>>v; //Contains all the edges removed in one iteration
        bool is_group = false;
        for(i=0; i<m; i++)
        {
            auto currEdge = edge[i];
            if((degree[currEdge.first] == 1 || degree[currEdge.second] == 1) && !visited[currEdge])
            {
                v.push_back(currEdge);
                is_group = true;
            }
        }
        for(j=0; j<v.size(); j++)
        {
            degree[v[j].first]--;
            degree[v[j].second]--;
            visited[v[j]] = true;
        }
        if(is_group == false)
        {
            break;
        }
        else
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    
}
int32_t main() {
    int t=1;
    //cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}