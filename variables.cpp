// so i don't need to use std everytime i wanna print. 
#include <iostream>
using namespace std;

int main(){

    cout << "THIS PROGRAM DEALS WITH EVERYTHING RELATED TO VARIABLES! \n";
    cout << "ALSO ASK FOR AN INPUT FROM THE USER \n\n\n\n";
    


    //Names cannot contain whitespaces or special characters like !, #, %, etc.

    double result = 0;
    int a = 5;
    double b =4.5;
    char letter = 's';
    bool checker = true; 
    string line = "this hoe has juicy pussy that i like to eat and a big ass that i love to hit";
    int z,e;
    int q =0;

    // Alternatively, you can use ASCII values to display certain characters:
    char ascii = 65;
    cout << ascii << " \tthis is how we print a letter from the ASCII table!\n";

    // const represents a value that will never changes!
    // The precision of a floating point value indicates how many digits the value can have after the decimal point.
    // The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits.
    // Therefore it is safer to use double for most calculations.
    const float PI = 3.14;

    //A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << "\tthis is in scientific number with 3 zeros using float \n";
    cout << d1 << "\tthis is in scientific number with 4 zeros using doubles \n";




    result = a + b *(a - b);
    cout << "This answer is \n";
    // this is how you print a variable!
    // also this is how you print multiple bullshits in one line !
    cout << result << "\n" << letter << "\n" << "\n" << line << "\n"; 
    cout << checker << "\t return 1 for true and 0 for false. \n";
    

    cout << "Type a number: \n"; // Type a number and press enter
    // cin is used to ask the user for an input!
    cin >> z; // Get user input from the keyboard
    cout << "Type another number: \n";
    cin >> e;

    q = z+e;
    cout<< q << "\tthis is what you get as an answer. \n";

    q +=q; 
    cout<< q << "\tis the answer. \n";

    /*
        && 	Logical AND	Returns true if both statements are true	                         x < 5 &&  x < 10	
        || 	Logical OR	Returns true if one of the statements is true	                    x < 5 || x < 4	
        !	Logical NOT	Reverse the result, returns false if the result is true	            !(x < 5 && x < 10)
    */    
    


    /*
        reference variable 
        A reference variable is a "reference" to an existing variable, and it is created with the & operator:
        
    */


    cout << "\nReference Vaeiable\n\n";
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza

    /*
        Memory Address
        In the example from the previous page, the & operator was used to create a reference variable.
        But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

        When a variable is created in C++, a memory address is assigned to the variable.
        And when we assign a value to the variable, it is stored in this memory address.

        To access it, use the & operator, and the result will represent where the variable is stored:
    */
    
    cout << &food << "\n"; // Outputs 0x4be33ffd90 (something like that because the address will always change.)

    return 0;
}