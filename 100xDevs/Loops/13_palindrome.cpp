#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>> n;
    long long t=n;
    long long rev=0;
    while(n!=0){
        long long r=n%10;
        rev=rev*10+r;
        n=n/10;
    }  
    if(rev==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}