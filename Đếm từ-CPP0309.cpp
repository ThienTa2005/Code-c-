
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int n; 
    cin >> n;
    cin.ignore();
    while(n--){
        vector<string> v ;
        string s; 
        getline(cin, s);
        stringstream ss(s); // Khởi tạo một stringstream từ dòng văn bản đã đọc
        string w; // Biến để lưu từng từ tách ra từ dòng văn bản
        // Tách các từ ra từ stringstream và lưu vào vector v
        while(ss >> w){
            v.push_back(w);
        }
        cout << v.size() << endl;
    }
}


