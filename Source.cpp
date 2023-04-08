# include <iostream>
# include <stdio.h>

using namespace std;

int main() {

    printf("[ Simple Calculator v1.0 ]\n");

    char Selc;

    float num1, num2;

    cout << "Enter the Options : [+], [-], [*], [/]" << "\n";
    cin >> Selc;

    cout << "Enter the two Operandrs" << "\n";
    cin >> num1 >> num2 ;

    switch (Selc)
    {
        case '+' /* constant-expression */:
            cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
            break;

        case '-' /* constant-expression */:
            cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
            break;

        case '*' /* constant-expression */:
            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
            break;

        case '/' /* constant-expression */:
            cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
            break;
    
    default:

        cout << "Error !";
    }

    system("pause");

    return 0;
}
