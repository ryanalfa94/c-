#include <iostream>
using namespace std;
#include <string>

// base class
class Animal{
public:
    void animalSound(){
        cout << "the animal makes a sound./n";
    }


};

// derived class

class Pig : public Animal{
    public :
    void pigSound(){
        cout << " The sound that the pig makes is oink oink.\n";
    }
    
};
// derived class
class Cat : public Animal{
    public:
    void catSound(){
        cout <<"The cat sound is meow meow\n";
    }

};
// derived class
class Dog : public Animal{
    void dogSound(){
        cout <<"The sound of a dog is woof woof\n";
    }
};
// derived class
int main(){

    // creating an objects.
    Animal myAnimals;
    Pig myPig;
    Cat myCat;
    Dog myDog;


    myAnimals.animalSound();
    myCat.animalSound();
    myPig.animalSound();
    myPig.pigSound();


    /*
         Why And When To Use "Inheritance" and "Polymorphism"?
         It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
    */

    return 0;
}
