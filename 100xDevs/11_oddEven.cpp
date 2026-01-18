#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    if(1<=n && n<=1000000000){
        if(n%2==0)
            cout<< "Even"<<endl;
        else
            cout<< "Odd"<<endl;
    }
}