#include <iostream>
using namespace std;
#include<string>

class Car{                  // the class
    public :                // Access specifier 

    string name;            // Atributes 
    int year;
    int speed;
    string color;

    /*  Just like functions, constructors can also be defined outside the class. First, declare the constructor inside the class,
        and then define it outside of the class by specifying the name of the class, followed by the scope resolution :: operator,
        followed by the name of the constructor 
    */

    Car(string x, int y,int z,string e);      // Constructor declaration
    void print();                                           // method declaration

};

// Constructor definition outside the class
Car::Car(string x, int y,int z,string e){ //Constructor with parameters,I ran into an issue when i made the parameters has the same name as the attributes
                                          // so i changed them to x,y,z,e  
    name = x;
    year = y;
    speed = z;
    color = e;
}


int main (){

    // Create Car objects and call the constructor with different values
    Car firstCar("Tesla", 2022,250,"black");
    Car secondCar("Audi",2020,230,"red");


    // printing the object attributes like so :
    cout << firstCar.name << " " << firstCar.year<< "\n";
    cout << secondCar.name << " " << secondCar.color<< "\n";




    return 0;
}

/*
In C++, there are three access specifiers:
public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
*/