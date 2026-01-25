#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>> n;
    if(n==0){
        cout<< 0;
    }
    while(n!=0){
        long long r=n%10;
        cout<<r;
        n=n/10;
    }  
}