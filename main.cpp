//
//  main.cpp
//  C++
//
//  Created by Gunnar Beck on 11/19/24.
//
//libraries
#include <iostream> //enables the program to perform input and output
using namespace std;
//main function
int main(int argc, const char * argv[]) {
    /*
     We will be adding integers
     */
    
    //first initalize--declare variables (can be of any type here--this time we will do integers)
    int numberOne, numberTwo, sum;
    
    //Other initalization of your data types:
    /*
     int numberOne{0};
     int numberTwo{0};
     int sum{0};
     
     int numberOne{0}, numberTwo{0}, sum{0}
     
     int numberOne = 0;
     int numberTwo = 0;
     int sum = 0;
     
     int numberOne, numberTwo, sum;
     */
    
    //Variable: a location in the computer's memory where a value can be stored for use by a program
    // The data types we use are integers (considered whole numbers)
    
    // The following brackets we have used {} are to initalize a list (commonly introducted in C++ 11
    
    cout << "Enter the first integer: ";  //asking for the integer
    cin >> numberOne; //accept the frist number
    
    cout << "Enter the second integer: ";
    cin >> numberTwo;
    
    sum = numberOne + numberTwo;
    
    cout << "Sum is " << sum << endl;
    
    return 0; //stating program has ran successfully
}
