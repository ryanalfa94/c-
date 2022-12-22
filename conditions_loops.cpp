#include <iostream>
using namespace std;


int main (){

int num1;
double num2;
double res1 =0;
int num3;
int time = 20;
int day;

// asking the user for 3 numbers.
cout << "Enter a number: \n";
cin >> num1;

cout << "Enter a number: \n";
cin >> num2;

cout << "Enter a number: \n";
cin >> num3;

// if conditions syntax 
// using if - else if - else to do something :
if (num1 >= num2){
    res1 = num2+ num3;
    
}else if (num2 > num1){
    res1 = num1 + num3;
}else {
    res1 = num3;
} 

cout << "The result is: " << res1 << "\n"; 

/*
There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.
 It can be used to replace multiple lines of code with a single line.
  It is often used to replace simple if else statements:

  Syntax:
  variable = (condition) ? expressionTrue : expressionFalse;
*/

// good day will print if condition "(time < 18)" is true.
// good evening will print if the condition "(time < 18)" is false. 
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result << "\n";

cout << "Enter a day: \n";
cin >> day;

// switch cases syntax !
switch (day) {
  case 1:
    cout << "Monday\n";
    break;
  case 2:
    cout << "Tuesday\n";
    break;
  case 3:
    cout << "Wednesday\n";
    break;
  case 4:
    cout << "Thursday\n";
    break;
  case 5:
    cout << "Friday\n";
    break;
  case 6:
    cout << "Saturday\n";
    break;
  case 7:
    cout << "Sunday\n";
    break;
    default:
    cout << "You trying to be a smart ass huh?!\n";
}

// LOOPS!
//WHILE LOOP:

int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}

// printing a new line here.
cout << "\n\n";


// do while loop 
int j = 5;
do {
  cout << j << "\n";
  j++;
}
while (j < 11);

// for loops

cout << "\n\n";

for (int i = 10; i < 15; i++) {
    if (i == 14){
        continue;
    }
  cout << i << "\n";
}

cout << "\n\n";

for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}

cout << i << "\n";

// the for each loop
// we use it to print array elements. 

// array of type int with size 5.
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}

cout << i << "\n";






}

