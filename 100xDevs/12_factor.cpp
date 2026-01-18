#include<iostream>
using namespace std;

int main(){
    int n,f;
    cin >> n >> f;
    if(1<=n && n<=1000000000 && 1<=f && f<=1000000000){
        if(n%f == 0)
            cout<< "Yes"<< endl;
        else
            cout<< "No"<< endl;
    }
}