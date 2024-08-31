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
