#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, result = 1;
    long long int arr[100001];
    int i = 0;
    cin >> n;
    while (n > 0)
    {
        cin >> arr[i];
        result *= arr[i];
       if(arr[i]==0){
           cout<<"0"<<endl;
           return 0;
       }
        i++;
        n--;
    } if (result>1e18)
        {
            cout << "-1" << endl;
            return 0;
        }
    cout << result << endl;
    return 0;
}