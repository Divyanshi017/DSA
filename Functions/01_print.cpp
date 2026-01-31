#include<iostream>
using namespace std;

int print(int n){
    for(int i=0; i<n; i++){
        cout<< "I am learning functions"<<endl;
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    print(n);
}