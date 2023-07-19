#include<bits/stdc++.h>
using namespace std;
#define Start ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define tc ll t; cin>>t; while(t--)
#define N 200012
 
int indx[N];
 
void solve()
{
    int n;
    cin >> n;
 
    for(int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        indx[x] = i;
    }
 
    if(indx[n] < min(indx[1], indx[2]))
    {
        cout << indx[n] << ' ' << min(indx[1], indx[2]) << '\n';
    }
    else if(indx[n] > max(indx[1], indx[2]))
    {
        cout << indx[n] << ' ' << max(indx[1], indx[2]) << '\n';
    }
    else
    {
        cout << indx[1] << ' ' << indx[2] << '\n';
    }
 
}
int main()
{
    Start
    tc
    {
        solve();
    }
}
