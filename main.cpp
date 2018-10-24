//
//  main.cpp
//  Bar Graph Plotter
//
//  Created by Tomás González on 2016-10-13.
//  Copyright © 2016 Tomás González. All rights reserved.
//

#include <iostream>
#include <cmath>
//#include <AppKit/AppKit.h> //To allow the kit to play sound in OSX
//#include <math.h>
using namespace std;


int main() {
    /* This will input a positive floating point or a whole number between 0.0 and 50.0 and plot it into an horizontal bar
    Here we will ask the user for that input
    */
    double number, n;
    cout << "Enter a positive floating point or a whole number between 0.0 and 50.0 (If you want to exit enter a negative value) :";
    cin >> number;
    
    //If its bigger than 50 the program will keep asking to enter a valid input unless is minus than 0 and the program will exit
    if (number > 50) {
        //void NSBeep (void); //This will enable a Beep from default from the API
        cout << "ERROR: " << number << " TOO Large!" << endl;
        do {
            cout << "Enter a positive floating point or a whole number between 0.0 and 50.0: ";
            cin >> number;
            
        } //While number is bigger than 50 or simple a character
        while (number > 50);
    }
    
    
    //This will work while number are from 0 to 50 for integer or double inputs
    else if (((number >= 0.0 || (number >= 0)) && (number <= 50.0 || number <= 50))) {
        string output;  // the final output its gonna be a string what it means a literal value
        n = round(number); // the number entered by the user will be rounded and assigned to a new variable called n, previously declared as a double value
        int i; // i is going to be our repetition counter
        for (i=1; i <= n; i++) { //this loop will count from 1 to the value of n and will increase 1 by 1 till the value goes further than n and the loop do not execute the block
            if (i % 10 == 0) {  // This will draw a | on every 10 steps
                output += "|";
            }
            else if ((i % 5 == 0) && (i % 2 != 0)) { //This will draw a + on every 5, 15, 25 and so on
                output += "+";
            }
            else if (i == n) { //whenever the value of i reaches n will display >
                output += ">";
            }
            else {
                output += "="; // otherwise we will always draw = symbols
            }
        }
        cout << "| " << output << " " << number << endl; //once the loop is exited we will get a initial | by default and then the value of string output and the initial input number
    }
//if user enter a negative value it will terminate the program
    else {
        cout << "Exit Program" << endl;
    }
    
    return 0;
}


