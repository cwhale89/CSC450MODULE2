/*
 * main.cpp
 *
 *  Created on: Jan 22, 2026
 *      Author: christopher whaley
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstString;
    string secondString;
    string combinedString;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Iteration " << i << endl;

        cout << "Enter the first string: ";
        getline(cin, firstString);

        cout << "Enter the second string: ";
        getline(cin, secondString);

        combinedString = firstString + secondString;

        cout << "Concatenated result: " << combinedString << endl;
        cout << endl;
    }

    return 0;
}



