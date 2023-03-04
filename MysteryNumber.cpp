#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int n ;
    cin >> n ;
    int a[n], b[n+1];
    set <int> se ;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }

    for(int i = 0; i < n+1; i++){
        cin >> b[i];
        if(se.count(b[i])==0){
            cout << b[i];
            return 0;
        }
    }
    return 0;
}

