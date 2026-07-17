#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n , m ;
    cin>>n>>m ;
    int ans= 0 ;
    int mini = INT_MAX ;
    int b = 1 ;
    while(n>=b){
        mini = min(m , n/b) ;
        ans+=mini ;
        n-= mini*b ;
        b *=2 ;
    }
    cout<<ans<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}