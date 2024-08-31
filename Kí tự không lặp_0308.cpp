#include<bits/stdc++.h>
using namespace std;
int main (){
    int t; 
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        map<char, int> m; // map để lưu tần suất xuất hiện của ký tự
        for (char x : s)  m[x]++;
        // Duyệt qua từng ký tự của chuỗi s và in ra các ký tự xuất hiện đúng một lần
       for (char x : s){
            if (m[x] == 1) 
                cout << x;// In ký tự x nếu nó xuất hiện đúng một lần trong chuỗi s
        }
        cout << endl;
    }
}

