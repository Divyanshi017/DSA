#include<bits/stdc++.h>
using namespace std;
void PPair(){
    pair<int,int>p={1,3};
    cout<< p.first<< " " << p.second<< endl; 

    pair<int, pair<int,int>>p1={1,{3,4}};
    cout<< p1.second.second<< " " << p1.second.first<< endl;
}
int main(){
    PPair();
}