#include <iostream>
#include <string.h>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set <int> myset;
    int n,s;
    cin>> n;
    for(int i=0;i<n;i++){
        cin >>s;
        myset.insert(s);
    }
    cout<<myset.size();
    






    return 0;
}