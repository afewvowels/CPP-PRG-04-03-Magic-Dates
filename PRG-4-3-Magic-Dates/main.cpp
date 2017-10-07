//
//  main.cpp
//  PRG-4-3-Magic-Dates
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  The date June 10, 1960 is special because when we write it in the following format, the
//  month times the day equals the year.
//
//  6/10/60
//
//  Write a program that asks the user to enter a month (in numeric form), a day, and a
//  two-digit year. The program should then determine whether the month times the day
//  is equal to the year. If so, it should display a message saying the date is magic.
//  Otherwise, it should display a message saying the date is not magic.

#include <iostream>

using namespace std;

int main()
{
    int intMonth,
        intDay,
        intYear;
    
    cout << "Please enter a month: \n";
    cin >> intMonth;
    while(!cin || intMonth < 1 || intMonth > 12)
    {
        cout << "Please enter a valid number for month (between 1 and 12):\n";
        cin.clear();
        cin.ignore();
        cin >> intMonth;
    }
    
    cout << "Please enter a day: \n";
    cin >> intDay;
    while(!cin || intDay < 1 || intDay > 31)
    {
        cout << "Please enter a valid number of days (between 1 and 31):\n";
        cin.clear();
        cin.ignore();
        cin >> intDay;
    }
    
    cout << "Please enter a two-digit year: \n";
    cin >> intYear;
    while(!cin || intYear < 1 || intYear > 99)
    {
        cout << "Please enter a valid year (between 00 and 99):\n";
        cin.clear();
        cin.ignore();
        cin >> intYear;
    }
    
    if (intMonth * intDay == intYear)
    {
        cout << "That date is magic!";
    }
    
    else
    {
        cout << "There is nothing special about the date " << intDay << "/" << intMonth << "/" << intYear << ".\n";
    }
    
    return 0;
}


