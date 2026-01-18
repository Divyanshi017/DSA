#include<iostream>>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if(1<=n && n<=1000 && 1<=m && m<=1000){
        int a= n%10;
        int b= m%10;
        cout<<  a+b <<endl;
    }
}