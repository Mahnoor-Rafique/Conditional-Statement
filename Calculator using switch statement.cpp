#include <iostream>
//preprocessor directive
using namespace std;

int main()
main function
{
    double num1, num2, result;
    declaration of variables
    char op;

    cout << "Enter the first number: ";
    //display the first variable
    cin >> num1;
    take input from user

    cout << "Enter an operator (+, -, *, /): ";
    //display the operators
    cin >> op;
    //take input from user

    cout << "Enter the second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            //display it ,if the case is true
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;
    

        default:
        //display it ,if all the above cases becomes false
            cout << "Invalid operator";
            return 0;
    }

    cout << num1 << " " << op << " " << num2 << " = " << result;
    //display the statement

    return 0;
}




