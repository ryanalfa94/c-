#include <iostream>
#include <string>
using namespace std;

int main() {
     /*
        Note that the * sign can be confusing here, as it does two different things in our code:
        When used in declaration (string* ptr), it creates a pointer variable.
        When not used in declaration, it act as a dereference operator.
    */

  string food = "Pizza";  // Variable declaration
  string* ptr = &food;    // Pointer declaration

  // Reference: Output the memory address of food with the pointer
  cout << ptr << "\n"; // prints the address that the pointer pointing at (in this case the address of food).

  // Dereference: Output the value of food with the pointer
  cout << *ptr << "\n"; // prints the value in the address which the value food which is pizza.


  // making another pointer and make it points at a different variable.
  int num = 5;
  int* ptr1 = &num;

  cout << ptr1 << "\t is the address\n ";
  cout << *ptr1 << "\t is the value. \n";
  // You can also change the pointer's value. But note that this will also change the value of the original variable:

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";

  return 0;
}
