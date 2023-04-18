#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter equation: ";
    cin >> num1 >> op >> num2;

    double result = (op == '+') ? num1 + num2 :
                    (op == '-') ? num1 - num2 :
                    (op == '*') ? num1 * num2 :
                    (op == '/') ? num1 / num2 :
                    (op == '^') ? pow(num1, num2) :
                    NAN;

    if (isnan(result)) {
        cout << "Invalid operator" << endl;
    } else {
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;

        system("pause");
    }

    return 0;
}
