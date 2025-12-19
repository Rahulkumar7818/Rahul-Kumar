#include <iostream>
using namespace std;
class Calculator {
public:
    double calculate(double a, double b, string op) {
        if (op == "+") return a + b;
        else if (op == "-") return a - b;
        else if (op == "*") return a * b;
        else if (op == "/") {
            if (b == 0) {
                cout << "Division by zero not allowed "<<endl;
                return 0;
            }
            return a / b;
        }
        else {
            cout << "Invalid operation"<<endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    string op;
    cin >> a >> b >> op;
    Calculator c;
    cout << c.calculate(a, b, op);
    return 0;
}
