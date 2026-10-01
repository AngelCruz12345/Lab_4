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

    //Add basic receipt output and input formatting

    double unitPrice;
    cout << "Enter your price: ";
    cin >> unitPrice;

    char member;
    cout << "Are you a member (y/n): ";
    cin >> member;
    
    string cashierNotes;
    cin.ignore();
    cout << "Enter cashier notes: ";
    getline(cin, cashierNotes);

    double subtotal = unitPrice * quantity;
    double total = subtotal;

    if (member == 'y' || member == 'Y')
    {
        total = total * 0.90;
    }

    double tax = total * 0.08;
    total = total + tax;


    cout << endl;
    cout << left << setw(20) << "Item Name"
        << setw(10) << "Code"
        << right << setw(10) << "Price" << endl;

    cout << string(40, '-') << endl;

    cout << left << setw(20) << foodItem
        << setw(10) << itemCode
        << right << setw(10) << fixed << setprecision(2) << total << endl;

    cout << "Cashier notes: " << cashierNotes << endl;

    cout << endl << "Inventory Audit" << endl;
    cout << left << setw(20) << "Item Name"
        << setw(10) << "Code"
        << right << setw(10) << "Quantity"
        << setw(12) << "Unit Price" << endl;

    cout << string(52, '-') << endl;

    cout << left << setw(20) << foodItem
        << setw(10) << itemCode
        << right << setw(10) << quantity
        << setw(12) << unitPrice << endl;
 
    return 0;
}