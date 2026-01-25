#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if(1<=n && m<=1000){
        cout<< n<<" + "<<m<<" = "<<n+m<<endl;
        cout<< n<<" - "<<m<<" = "<<n-m<<endl;
        cout<< n<<" * "<<m<<" = "<<n*m<<endl;
        cout<< n<<" / "<<m<<" = "<<n/m<<endl;
        cout<< n<<" % "<<m<<" = "<<n%m<<endl;
    }

}