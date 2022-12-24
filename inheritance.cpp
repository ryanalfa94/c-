#include <iostream>
#include <string>
using namespace std;

/*
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.

In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):
*/


// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};

// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "\nSome content in another class.\n" ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class
// A class can also be derived from more than one base class, using a comma-separated list:
class MyChildClass: public MyClass, public MyOtherClass, public Car {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

//The third specifier, protected, is similar to private, but it can also be accessed in the inherited class:
// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};


int main() {
    // this part is for the first 2 classes.
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;

// this part for the other 3 classes 
  MyGrandChild myObj;
  myObj.myFunction();

  //using a function in one of the parents classes.  
  MyChildClass child;
  child.honk();

  // this part deals with employee and programmer class

  Programmer prog;
  prog.setSalary(50000);
  prog.bonus = 15000;
  cout << "Salary: " << prog.getSalary() << "\n";
  cout << "Bonus: " << prog.bonus << "\n";


  return 0;
}