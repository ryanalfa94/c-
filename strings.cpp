#include <iostream>
using namespace std; 

// string library.
#include <string>

int main(){

    string firstName; 
    string lastName; 
    string fullName;
    string fullName1;
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string fullName2;
    string line;

    cout << "Please enter a line: \n";
    // we didn't need >> ws here because there was no cin before it.  
    getline(cin,line);
    cout << line << "\n";


    cout << "Please enter a first name: \n";
    cin >> firstName; 

    cout << "Please enter a last name: \n";
    cin >> lastName;

    // we can add 2 strings by using + 
    // we need a space between the names so we add an empty string in between them. 
    fullName = firstName + " " + lastName;

    cout << fullName << " is the full name. \n";

    // we can also use the library like so:
    fullName1 = firstName.append(lastName); 
    cout << fullName1 << " the answer!"; 

    
    cout << "The length of the txt string is: " << txt.length() << "\n";

    // You can access the characters in a string by referring to its index number inside square brackets []
    cout << fullName1[1] << "\n";

    /*
         cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words):
         That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:
    */
    // reading a whole line! we use getline (cin, name)
    // getline (cin, fullName2);    would be how we get the line if there was no cin in the previous lines.
    cout << "Enter a full name: \n";

    /*
        when we use cin first and getline after, we will run into a problem 
        where getline take the space after cin as an input,
        so we can fix it by using 
        Usage of std::ws will extract
        all  the whitespace character
        getline(cin >> ws, name);
    */
    getline (cin >> ws, fullName2);

    cout << "This is your full name "<< fullName2 << "\n";

    return 0;
}
