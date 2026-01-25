#include<iostream>
using namespace std;

int main(){
    long long n;
    long long rev=0;
    cin>> n;
    while(n!=0){
        long long r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<rev;
}