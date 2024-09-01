#include <bits/stdc++.h> 
using namespace std; 
int main (){ 
    int n,s;
    cin>>n>>s;
    if(s>9*n||(n>1&&s==0)){
        cout<<-1<<" "<<-1;
        return 0;
    }
    if(n==1&&s<10){
        cout<<s<<" "<<s;
        return 0;
    }
    if(n>1&&s<10){
        cout<<1;
        for(int i=1;i<n-1;i++){
            cout<<0;
        }
        cout<<s-1<<" ";
        cout<<s;
        for(int i=1;i<n;i++){
            cout<<0;
        }
        return 0;
    }
    char x[200];
    int y=s;
    for(int i=0;i<n-1;i++){
        if(s>=10){
            x[i]='9';
            s-=9;
        }else if(s<10&&s>1){
            x[i] = '0'+s-1;
            s = 1;
        }else if(s==1){
            x[i] ='0';
        }
    }
    x[n-1]=s+'0';
    for(int i=n-1;i>=0;i--){
        cout<<x[i];
    }
    cout<<" ";
    for(int i=0;i<n;i++){
        if(y>=10){
            cout<<'9'; y-=9;
        }else{
            cout<<y;
            y =0;
        }
    }
}
