// Program Name: Line Numbers
// Program: Write a program that asks the user for the name of a file. 
//          The program should display the contents of the file on the screen. 
//          By using the function getline, each line of screen output should 
//          be preceded with a (nicely formatted) line number, followed by a colon. 
//          The line numbering should start at 1. To be clear, the number must 
//          be right-aligned with enough padding to handle at least up to 999 lines 
//          and followed by a colon and a space. The output might look different for 
//          different example files. And don't forget to check if the file opened 
//          and then close the file at the end!
// Author: Maryam Cheema
// Date Last Modified: 10/18/2024

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inFile;
    char inName[100];
    string inputLine = " ";
    int lineNumber = 1;

    cout << "Enter the input file names: ";
    cin >> inName;

    inFile.open(inName);

    if (!inFile)
    {
        cout << "Error opening file!" << inName << endl;

        return 81;
    }

    while (!inFile.eof())
    {
        getline(inFile, inputLine, '\n');

        cout << setw(4) << right << lineNumber << ": " << inputLine << endl;

        lineNumber++;
    }

    inFile.close();

    return 0;
}