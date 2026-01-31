#include<iostream>
using namespace std;

void prime(long long n){
    if(n<=1){
        cout<<"Not Prime";
        return;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Not Prime";
            return;
        }
    }
    cout<<"Prime";
}
int main(){
    long long n;
    cin>>n;
    prime(n);
}