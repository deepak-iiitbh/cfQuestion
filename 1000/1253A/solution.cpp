#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        vector < int > v(a), b(a);
        for (int i = 0; i < a; i++) cin >> v[i];
        for (int i = 0; i < a; i++) cin >> b[i];
        bool flag = true;
        vector < int > temp(a+2);
        temp[0] = 0 ;
        temp[a+1] = 0 ;
        
        for (int i = 0; i < a; i++) {
            temp[i+1] = b[i] - v[i];
            
            if (temp[i+1] < 0) flag = false;
        }
        if (flag == false) {
            cout << "NO" << endl;
        }
        else {
            int totalcount = 0;
            for (int i = 0; i < temp.size()-1; i++) {
                if (temp[i] != temp[i + 1]) totalcount++;
            }
            if (totalcount > 2 ) {
                cout << "NO" << endl;
            }
            else cout << "YES" << endl;
        }


    }
}