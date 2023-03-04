#include<bits/stdc++.h>
using namespace std;
bool check(int a[], int n){
    int sumL, sumR;
    for(int i =0; i < n; i++){
        sumL = 0, sumR = 0;
        for(int p = 0; p < i; p++){
            sumL+=a[p];
        }
        for(int p = i+1; p < n; p++){
            sumR+=a[p];
        }
        if(sumL == sumR) return true ;
    }
    return false ;
}
int main(){
    int t ;
    cin >> t ;
    int n ;
    while(t--){
        cin >> n ;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(check(a, n)) cout <<"YES";
        else cout <<"NO";

    }
    return 0;

}
