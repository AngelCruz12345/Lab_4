// Lab_4 Christian Depablos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string foodItem;
    cout << "Enter your food: ";
    getline(cin, foodItem);

    char itemCode;
    cout << "Enter item code: ";
    cin >> itemCode;

    int quantity;
    cout << "Enter your amount: ";
    cin >> quantity;

    double unitPrice;
    cout << "Enter your price: ";
    cin >> unitPrice;

    char member;
    cout << "Are you a member (y/n): ";
    cin >> member;

    double total = unitPrice * quantity;

    if (member == 'y')
    {
        total = total / 2;
    }

    cout << endl;
    cout << left << setw(20) << "Item Name"
        << setw(10) << "Code"
        << right << setw(10) << "Price" << endl;

    cout << string(40, '-') << endl;

    cout << left << setw(20) << foodItem
        << setw(10) << itemCode
        << right << setw(10) << fixed << setprecision(2) << total << endl;

    return 0;
}