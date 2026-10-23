#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;
ll n;
ll a[int(1e6)];
void print()
{
    for(ll i=1;i<=n;i++)
    {
        cout<<a[i];
    }
    cout<<"\n";
}
void backtracking(ll i)
{
    for(ll j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n) print();
        else backtracking(i+1);
    }

}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    backtracking(1);
}