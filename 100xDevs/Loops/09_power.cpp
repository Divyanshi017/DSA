#include<iostream>
using namespace std;

int main(){
    int n;
    int p;
    long long result=1;
    cin >> n >>p;
    for(int i=1;i<=p;i++){
        result=result*n;
    }
    cout<< result;
}