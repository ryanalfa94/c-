/*  To auto format c++ file
Simple go to command palette using Ctrl+Shift+P
search "format"
and select "Format document with"
and simply select "C/C++"
*/

/*
This program is a simple calculator that uses functions.

Function Declaration and Definition
A C++ function consist of two parts:

Declaration: the return type, the name of the function, and parameters (if any)
Definition: the body of the function (code to be executed)

int main() {
  myFunction();
  return 0;
}

void myFunction() {
  cout << "I just got executed!";
}

 Error

However, it is possible to separate the declaration and the definition of the function - for code optimization.

You will often see C++ programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read:

*/

#include <iostream>
using namespace std;

// functions decelerations :
void print();
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);
double fac(double a);
double pow(double a);
void swapNums(int &x, int &y);
void myFunction(int myNumbers[5]);
int sum(int k);
int plusFunc(int x, int y);
double plusFunc(double x, double y);

int main()
{
    int choice;
    double num1, num2;
    double result = 0.0;
    bool run = true;

    while (run)
    {

        // calling the print method.
        print();
        cin >> choice;
        if (choice > 0 && choice < 5)
        {
            cout << " Enter the first number: \n";
            cin >> num1;
            cout << " Enter the second number: \n";
            cin >> num2;
        }
        else if (choice == 5 || choice == 6)
        {
            cout << " Enter the first number: \n";
            cin >> num1;
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
        }

        switch (choice)
        {
        case 1:
            result = add(num1, num2);
            break;

        case 2:
            result = sub(num1, num2);
            break;

        case 3:
            result = div(num1, num2);
            break;

        case 4:
            result = mul(num1, num2);
            break;

        case 5:
            result = fac(num1);
            break;

        case 6:
            result = pow(num1);
            break;

        default:
            cout << "Invalid choice! Please enter a valid choice or a 0 to Exit. \n";
            print();
            break;
        }
        if (choice > 0 && choice < 7)
        {
            cout << result;
        }
        else
        {
            cin >> choice;
            if (choice == 0)
            {
                run = false;
            }
        }
        cout << "\n";
    }

    cout << "\n\nThis is the swap function that takes pointers as perimeters\n\n";

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: "
         << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: "
         << "\n";
    cout << firstNum << secondNum << "\n";

    // Array And functions.
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction(myNumbers);

    // function overload:
    cout << "\n\n\n";

    // we used the same name for 2 different functions and thats overloading the function
    // since they both add but they add different types
    // in this case we made an int and double
    // see the very last 2 functions for reference.
    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << "\n";

    cout << "\n\n";
    /*here i deal with recursion */

    int answer = sum(10);
    cout << answer;

    return 0;
}

// functions defintion
void print()
{
    cout << "Please enter a choice:\n";
    cout << "1-ADD\n2-SUBTRACT\n3-DIVISION\n4-MULTIPLICATION\n5-FACTORIAL\n6-POWERS\n0-EXIT\n";
}

double add(double a, double b)
{
    cout << "your answer is : ";
    return a + b;
}

double sub(double a, double b)
{
    cout << "your answer is : ";
    return a - b;
}

double mul(double a, double b)
{
    cout << "your answer is : ";
    return a * b;
}

double div(double a, double b)
{
    cout << "your answer is : ";
    return a / b;
}

double fac(double a)
{
    double result = 1;
    for (int i = 1; i <= a; i++)
    {
        result *= i;
    }
    cout << "your answer is : ";
    return result;
}

double pow(double a)
{
    cout << "your answer is : ";
    return a * a;
}

// In the examples from the previous page, we used normal variables when we passed parameters to a function.
//  You can also pass a reference to the function. This can be useful when you need to change the value of the arguments:
//  this function deals with reference as perimeters
void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

// we can also pass an array to a function
void myFunction(int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }
}

/*
Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.
Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.
Adding two numbers together is easy to do, but adding a range of numbers is more complicated.
 In the following example, recursion is used to add a range of numbers together by breaking it down into the simple task of adding two numbers:
*/

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}

/*
With function overloading, multiple functions can have the same name with different parameters:
Instead of defining two functions that should do the same thing, it is better to overload one.
In the example below, we overload the plusFunc function to work for both int and double:
*/

int plusFunc(int x, int y)
{
    return x + y;
}

double plusFunc(double x, double y)
{
    return x + y;
}