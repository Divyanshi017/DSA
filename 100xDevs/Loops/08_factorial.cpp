#include<iostream>
using namespace std;

int main(){
    long long f=1;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        f=f*i;
    }
    cout<<f;
}