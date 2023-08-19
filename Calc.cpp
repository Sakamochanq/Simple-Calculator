#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char op;
  
    cout << "Enter equation: ";
    //// reading a number followed by a char followed by another number from the user
    cin >> num1 >> op >> num2; 
    //// result computes the math operation that the user has chosen (op)
    
    
    double result = (op == '+') ? num1 + num2 :
                    (op == '-') ? num1 - num2 :
                    (op == '*') ? num1 * num2 :
                    (op == '/') ? num1 / num2 :
                    (op == '^') ? pow(num1, num2) :
                    NAN;
   //// If it is not in the previous possible choices it prints ("Invalid operator")
    /*
    In C++, the isnan function is used to determine whether a given floating-point value is a "Not-a-Number" 
    (NaN) value or not. NaN is a special value that represents the result of undefined or indeterminate mathematical operations, 
    such as dividing zero by zero or taking the square root of a negative number.
    */
    if (isnan(result)) {
        cout << "Invalid operator" << endl;
    } else {
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;

        system("pause");
    }

    return 0;
}
