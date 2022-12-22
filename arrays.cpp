#include <iostream>
using namespace std;

int main (){
    // EVERYTHING -ISH ABOUT ARRAYS

    string names[3] = {"ryan","alfa","Kira"};
    char letters[3] = {'r','a','k'};
    int num[5] = {1,2,3,4,5};

    //we can specify the size of the array or just add the elements directly.
    double temp[] = {1.1,1.2,1.3,1.4,1.5,1.6};


    
    // printing the int array with for each loop
    for ( int i : num){
        cout << i << "\n";
    }

    // printing letters and name arrays :

    //we can get the size of array by using 
    //sizeof(array name) function 

    /*
        int myNumbers[5] = {10, 20, 30, 40, 50};
        cout << sizeof(myNumbers);
        result is 20

        the sizeof() operator returns the size of a type in bytes.

        You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

        To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:
        like so :
    */
    for (int i =0; i < sizeof(letters) / sizeof(char);i++){
        cout<< letters[i] << "\n";

    }

      for (int i =0; i < sizeof(names) / sizeof(string);i++){
        cout<< names[i] << "\n";


    }

    /*
      Multi-Dimensional Arrays

      Why Multi-Dimensional Arrays?
      Multi-dimensional arrays are great at representing grids.
      

      2 is the number of rows
      4 is the number of columns.
    */ 

    string letter[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << "\nDimensional  array\n\n ";
// printing a specific element by specifying which row and which column
// in this example i choose letter F which is in row 2 column 2 
// so it is in position [1][1] because array elements starts at 0 
cout << letter [1][1] << "\n";

// if we want to print them,
for (int i =0; i < 2;i++){
  for (int j=0; j < 4;j++){
    cout << letter[i][j];
  }
}

}

// check battle Ship file for a demonstration of the use of Multi-Dimensional Arrays.