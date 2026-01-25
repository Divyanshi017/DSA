#include<iostream>
using namespace std;

int main(){
    int length,breadth;
    cin >> length >>breadth;
    if(1<=length && breadth<=1000){
        int area=length*breadth;
        cout<< "Area = "<< area<< endl;
        int peri= 2*(length+breadth);
        cout<< "Perimeter = "<< peri<< endl;
    }
}