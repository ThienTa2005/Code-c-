#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int t ; 
    cin >> t ; 
    cin.ignore() ; 
    while(t--) { 
        string check = "abcdefghijklmnopqrstuvwxyz" ; 
        string s ; getline( cin , s ) ; 
        int k ; cin >> k ; cin.ignore() ; 
        set<char>se; for( char &x : s ) { 
            se.insert(x) ; 
            } 
            int cnt = 0 ; 
            for( char x : check ) { 
                if( se.find(x) == se.end() ) { 
                    cnt++ ; 
                    } 
                } 
                
                cnt <= k ? cout << "1\n" : cout << "0\n" ; 
                } 
                }


