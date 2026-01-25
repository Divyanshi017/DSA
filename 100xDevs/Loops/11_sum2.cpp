#include<iostream>
using namespace std;

int main(){
    long long n;
    long long sum=0;
    cin>> n;
    while(n!=0){
        long long r=n%10;
        sum= sum +r;
        n=n/10;
    }
    cout<<sum;
}