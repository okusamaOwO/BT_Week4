#include<bits/stdc++.h>
using namespace std ;
string reverseString (string s0){
    string s = "";
    int n = s0.length();
    for(int i =n-1; i >= 0; i--){
        s += s0[i];
    }
    return s ;
}
int main(){
    int n ;
    cin >> n ;
    string s ;
    vector <string> v ;
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, s);
        v.push_back(s);
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] == reverseString(v[j])){
                int m = v[i].length();
                cout << m << " " << v[i][m/2];
            }
        }
    }
}
