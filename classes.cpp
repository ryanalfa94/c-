#include <iostream>
#include <string>
using namespace std;
/*
The class keyword is used to create a class called MyClass.
The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class. You will learn more about access specifiers later.
Inside the class, there is an integer variable myNum and a string variable myString. When variables are declared within a class, they are called attributes.
At last, end the class definition with a semicolon ;.
*/
// Create a Car class with some attributes
class Car
{
public:
  string brand;
  string model;
  int year;
  // we define a function inside the class
  void myMethod()
  { // Method/function defined inside the class
    cout << "Hello World!";
  }

  /*
    If we declare a method inside the class we do it as the above example.
    if we wanna declare it outside, we do it as the below example.
    To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class.
    This is done by specifying the name of the class, followed the scope resolution :: operator, followed by the name of the function:
  */
  void myMethod1(); // Method/function declaration
  int speed(int maxSpeed);


};
// Method/function definition outside the class.
void Car::myMethod1()
{
  cout << "Hello people!";
}

int Car::speed(int maxSpeed){
  return maxSpeed;
}

int main()
{
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

  // calling the 2 methods we created earlier.
  carObj1.myMethod1();
  carObj2.myMethod();
  cout << carObj1.speed(200)<< " Is your max speed.\n";

  return 0;
}