#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n>> m;
    if(1<=n && n<=1000000000 && 1<=m && m<=1000000000){
        if(n<m){
            cout<<"Min = "<< n << endl;
            cout<<"Max = "<<m<< endl;
        }
        else{
            cout<<"Min = "<< m<<endl;
            cout<<"Max = "<<n<< endl;
        }
    }
}