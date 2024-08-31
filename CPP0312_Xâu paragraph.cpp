Cách 1:
#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int t ; 
    cin >> t ; 
    cin.ignore() ; 
    while(t--) { 
        string check = "abcdefghijklmnopqrstuvwxyz" ; 
        string s ; 
        getline( cin , s ) ;   
        int k ; 
        cin >> k ; 
        cin.ignore() ; 
        set<char> se; // Tạo set để lưu trữ các ký tự duy nhất trong chuỗi s
        for(char &x : s) { 
            se.insert(x) ; // Thêm mỗi ký tự trong chuỗi s vào set
        } 
        int cnt = 0 ; // Biến đếm số lượng chữ cái còn thiếu để tạo thành pangram
        for(char x : check) { 
            if(se.find(x) == se.end()) { 
                cnt++ ; // Nếu ký tự trong bảng chữ cái không có trong set, tăng biến đếm
            } 
        } 
        cnt <= k ? cout << "1\n" : cout << "0\n" ; 
    } 
}
Cách 2: 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int n; 
    cin >> n;
    cin.ignore();
    while(n--){
        map <char ,int> m;
        string s;
        cin>>s;
        int t;
        cin>>t; cin.ignore();

        for(char x:s){
            m[x]++;
        }
        int count=0;
        for(char x='a';x<='z';x++){
            if(m[x]>=1) count++;
        }
        if(26-count<=t) cout<<1;
        else cout<<0;
        cout<<endl;
    }
}
