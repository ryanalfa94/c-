//How do you find the duplicate number on a given integer array?

#include<iostream>
#include <array>
using namespace std;

//  searching for the duplicates in an array
int duplicate (int arr[10]){
int a,b;
for (int i =0; i <10; i++){
    a = arr[i];
    // starting the pointer at the next position after i
    for (int j = i+1; j < 10;j++){
        b = arr[j];
        if (a == b){
            return a;
        }
    }
}

/*
Here is an improved version using only 1 for loop:

int duplicate (int arr[10]){
int a,b;
int j = 0;

//incrementing j until it reaches the last the element and when that happens , we increment i and set j back to 0
for (int i =0; i <10; j++){

    // when j and i are in the same position we skip that number,
    if (j == i){
        continue;
    }else {
        a = arr[i];
        b = arr[j];
        if (a == b){
            return a;
        }
    
        if (j == 10){
            i++;
            j = 0;
        }
        }
    
    // starting the pointer at the next position after i
   
       
    }
    return 0;
}

*/


return 0;
}

int main (){
    int num;
    int arr[] = {1,2,3,4,5,6,7,8,10,6};
    cout<< " this is the duplicate number in the array \n" ;
    // passing an array.
    num = duplicate(arr);
    cout << num;


    return 0;
}