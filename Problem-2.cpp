
#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        int x=2 * i - 1;
        cout<<x;
        if (i != a) cout << ", ";
    }
    return 0;
}
