#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int good= 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x != 0 && 18 % x == 0){
            good++;
            continue;
        }
                
        else if (x % 45 == 0){
            good++;
            continue;
        }
    }

    cout << good << endl; 
}