#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t ; 
    cin>>t ;
    while(t--){
        int a,b,n,S ;
        cin>>a>>b>>n>>S ;
        
        int chance = S/n ;
        if(min(a, chance)*n + b >= S) cout<<"YES"<<endl ;
        else cout<<"NO"<<endl ;
    }
}
