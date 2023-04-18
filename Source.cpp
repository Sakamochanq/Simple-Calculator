#include <stdio.h>
#include <iostream>

int num1, num2, result;

char op;

using namespace std;

int main() {

    printf("[  Simple Calculator v1.2  ] \n");

    std::cout << "> ";
    std::cin >> num1;

    std::cout << "[+] [-] [*] [/] > ";
    std::cin >> op;

    std::cout << "> ";
    std::cin >> num2;

    if (op == '+')
    {
        result = num1 + num2;

        std::cout << num1 << " + " << num2 << " = " << result << endl;

        system("pause");
    }

    else if (op == '-')
    {
        result = num1 - num2;

        std::cout << num1 << " - " << num2 << " = " << result << endl;

        system("pause");
    }

    else if (op == '*')
    {
        result = num1 * num2;

        std::cout << num1 << " + " << num2 << " = " << result << endl;

        system("pause");
    }

    else if (op == '/')
    {
        result = num1 / num2;

        std::cout << num1 << " / " << num2 << " = " << result << endl;

        system("pause");
    }

    else 
    {
        std::cout << "Error" << endl;

        system("pause");

        return 0;
    }
}
