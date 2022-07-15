/*  File: Main.cpp
    Author: Nicholas Rains 
    This file is the main file for server finance. It will have the welcome screen and places for people 
    to enter their name and bill info. 
*/
#include <iostream>
#include <fstream>

void printMenu();

using namespace std;

int main(){
    int response = 0;

    cout << "Welcome to Server Finance!\n" << "Your one stop shop for keeping track of your money and where to spend it.";
    printMenu();
    cin >> response;
    while(response < 1 || response > 5){    //for if the reponse is invalid
        cout << "Response is invalid please enter another response.\n";
        printMenu();
        cin >> response;
    }

    cout << "Thank you for using Server Fianace!";

    return 0; 
}

void printMenu(){
    cout << "What would you like to do?" << endl;
    cout << "1. Enter in tips." << endl;
    cout << "2. Enter in savings." << endl;
    cout << "3. Enter in a new bill." << endl;
    cout << "4. Check total tips amount." << endl;
    cout << "5. Exit" << endl;
    cout << "Reponse: ";
}