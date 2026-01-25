#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int positive = 0, negative = 0, even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;

        if (val % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if (val > 0) {
            positive++;
        } else if (val < 0) {
            negative++;
        }
    }

    
    cout << positive << endl;
    cout << negative << endl;
    cout << even << endl;
    cout << odd << endl;

    return 0;
}