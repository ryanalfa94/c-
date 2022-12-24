/*
The fstream library allows us to work with files.

To use the fstream library, include both the standard <iostream> AND the <fstream> header file:

Example
#include <iostream>
#include <fstream>
There are three classes included in the fstream library, which are used to create, write or read files:

Class	Description
ofstream	Creates and writes to files
ifstream	Reads from files
fstream	A combination of ofstream and ifstream: creates, reads, and writes to files
*/

#include <iostream>
#include <fstream>
using namespace std;

int main (){
    // create and open a text file 
    ofstream names("filename.txt");


    // write to a file 
    names << "My name is Ryan Alfa.\n";
    names << "My name is bryan Alfa.\n";
    names << "My name is kira Alfa.\n";
    names << "My name is abo Alfa.\n";


    // close the file
    //Why do we close the file?
    //It is considered good practice, and it can clean up unnecessary memory space.
    names.close();

    /*
        Read a File
        To read from a file, use either the ifstream or fstream class, and the name of the file.

        Note that we also use a while loop together with the getline() function (which belongs to the ifstream class) to read the file line by line, and to print the content of the file:
    */

   // Create a text string, which is used to output the text file
    string name;

    // Read from the text file
    ifstream fileread("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (fileread,name)){
        // Output the text from the file
        cout << name << "\n";
    }
    // Close the file
    fileread.close();

}

