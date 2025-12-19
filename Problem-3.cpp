#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int numberofterms;
    if(a%2==0){
         numberofterms=a-1;
    }
    else{
          numberofterms=a;
    }
    for (int i = 1; i <= numberofterms; i++) {
         int x=2 * i - 1;
         cout<<x;
        if (i != numberofterms) cout << ", ";
    }
    return 0;
}
