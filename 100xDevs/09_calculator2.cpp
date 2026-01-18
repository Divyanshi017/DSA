#include<iostream>
using namespace std;

int main(){
    long long n;
    long long m;
    cin >> n;
    cin >> m;
    if(1<=n && m<=1000000000){
        cout << n << " + " << m << " = " << n+m << endl;
        cout<< endl;
        cout << n << " - " << m << " = " << n-m << endl;
        cout<< endl;
        cout << n << " * " << m << " = " << n*m << endl;
        cout<< endl;
        cout << n << " / " << m << " = " << n/m << endl;
        cout<< endl;
        cout << n << " % " << m << " = " << n%m << endl;
        cout<< endl;
    }
}