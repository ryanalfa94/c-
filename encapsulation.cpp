/*
In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

 By default, all members of a class are private if you don't specify an access specifier:
*/

#include <iostream>
using namespace std;
#include<string>

/*
Encapsulation
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
If you want others to read or modify the value of a private member, you can provide public get and set methods.
*/

class Employee{

    // we can specify private or we can just type the salary and it will ne specify to private by default.
    private:
    int salary;

    public:
    // we can declare the method here and define it outside the class like what we did in the classes file
    // or we can declare and define it here like so:

    //setter
    void setSalrty(int s){
        salary =s;
    }
    //getter
    int getSalary(){
        return salary; 
    }


};

    int main() {

        Employee myObj;
        myObj.setSalrty(50000);
        cout << myObj.getSalary();
     return 0;
    }

/*
    The salary attribute is private, which have restricted access.

    The public setSalary() method takes a parameter (s) and assigns it to the salary attribute (salary = s).

    The public getSalary() method returns the value of the private salary attribute.

    Inside main(), we create an object of the Employee class. 
    Now we can use the setSalary() method to set the value of the private attribute to 50000.
    Then we call the getSalary() method on the object to return the value.

    It is considered good practice to declare your class attributes as private (as often as you can).
    Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
    Increased security of data
*/