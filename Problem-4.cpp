#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // Instead of hardcoding the array, we can also take the size of the array
    // and its elements as input from the user using cin.
    // This makes the program more flexible for different inputs.
    vector<int> arr = {1,2,8,9,12,46,76,82,15,20,30};

    for (int i = 1; i <= 9; i++) {
        int count = 0;
        for (int j = 0; j < arr.size(); j++) {
             int x=arr[j]%i;
            if (x == 0)
                count++;
        }
        cout << i << ": " << count << endl;
    }
    return 0;
}
