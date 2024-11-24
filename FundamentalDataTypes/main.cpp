//
//  main.cpp
//  CharacterTypes
//
//  Created by Gunnar Beck on 11/23/24.
//

#include <iostream>
#include <string>

using namespace std;

/*
 
 Fundamental Types
 
 Double = 3.1416
    (floating numbers used for accurate representation)
    --64 bits in memory
 
 Int = 2
    (whole numbers)
    --4 bytes in memory
 
 Char = A single character
    (Ex: 'A')
    --8 bits in memory
    Signed
    Unsigned
 
 String = Sequence of characters
    (Ex: "Michael")
    ~Overhead (Starting memory) 24 bytes
    ~Subject to the size of the string: n + 1 bytes
 
 Boolean = true or false
    (Ex: Truth or dare game)
    -1 byte in memory
 
 All can be used as functions, but must return something
 
 cout---C Out (Output)
 cin---C In (Input)
 
 Void function--can be used without needing to return anything, but used greatly to create actions, call upon other actions, ex: printing out, or recursion (learn later)
 
 Bool functions--often used for comparisons or logical decisions
 
 */

// Double Function
double calculateCircleArea(double radius) {
    const double pi = 3.1416; // Constant value for Pi
    return pi * radius * radius; // Formula: π * r^2
}

// Function to demonstrate `int` (calculating the sum of two numbers)
int addNumbers(int a, int b) {
    return a + b; // Returns the sum of two integers
}

// Function for `char` (returning a single initial)
char createInitial(char initial) {
    return initial; // Returns the input character
}

// Function to demonstrate `string` (concatenating first and last names)
string createFullName(string firstName, string lastName) {
    return firstName + " " + lastName; // Returns the full name
}

// Void function to demonstrate `char` (printing a character)
void repeatCharacter(char c) {
    cout << "The character is: " << c << "\n\n"; // Output the character
}

// Boolean function to compare coffee and tea preferences
bool isCoffeeBetterThanTea(bool preference) {
    return preference; // Returns the input preference (true for coffee, false for tea)
}

int main() {
    // Example 1: Using `double`
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = calculateCircleArea(radius); // Calculate area
    cout << "The area of the circle with radius " << radius << " is " << area << "\n\n";

    // Example 2: Using `int`
    int num1, num2;
    cout << "Enter two integers to add: ";
    cin >> num1 >> num2;
    int sum = addNumbers(num1, num2); // Calculate sum
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "\n\n";

    // Example 3: Using `char` (returning a single initial)
    char firstInitial;
    cout << "Enter the first initial of your first name: ";
    cin >> firstInitial;
    char returnedInitial = createInitial(firstInitial); // Use the char function
    cout << "The returned initial is: " << returnedInitial << "\n\n";

    // Example 4: Using `char` (simple output of a character)
    char symbol;
    cout << "Enter a character to display: ";
    cin >> symbol;
    repeatCharacter(symbol); // Display the character

    // Example 5: Using `string`
    string firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    string fullName = createFullName(firstName, lastName); // Concatenate names
    cout << "Your full name is: " << fullName << "\n\n";

    // Example 6: Using `bool` (comparing coffee and tea preferences)
    bool coffeePreference;
    cout << "Do you think coffee is better than tea? (1 for Yes, 0 for No): ";
    cin >> coffeePreference;
    if (isCoffeeBetterThanTea(coffeePreference)) {
        cout << "You prefer coffee over tea.\n";
    } else {
        cout << "You prefer tea over coffee.\n";
    }

    return 0;
}
