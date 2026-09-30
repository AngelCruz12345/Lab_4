// Lab_4 Christian Depablos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double itemPrice;
    char foodItem;
    cout << "Select an item from the menu: " << endl;
    cout << " Items			Small (s)		Medium (m)		Large (l)" << endl
    << " A. Milk		2.50			3.50			4.50" << endl
    << " B. Soda		5.00			7.00			9.00" << endl
    << " C. Fries		2.00			3.00			4.00" << endl
        << " D. Shirt		10.00			15.00			20.00" << endl;

    cin >> foodItem;

    
    switch (tolower(foodItem))
    {
    case 'A':
        cout << "Milk" << endl;
        break;
    case 'B':
        cout << "Soda" << endl;
        break;
    case 'C':
        cout << "Fries" << endl;
        break;
    case 'D':
        cout << "Shirt" << endl;
        break;
    default:
        cout << "Invalid item selection. Please select a valid item from the menu." << endl;
        return 1;
    }
    if (foodItem == 'A') {
        cout << "Pick a size: Small (s), Medium (m), Large (l): " << endl;
        char itemSize;
        cin >> itemSize;

        

        switch (tolower(itemSize)) {
        case 's':
            itemPrice = 2.50;
            break;

        case 'm':
            itemPrice = 3.50;
            break;

        case 'l':
            itemPrice = 4.50;
            break;

        }

    }
    else if (foodItem == 'B') {
        cout << "Pick a size: Small (s), Medium (m), Large (l): " << endl;
        char itemSize;
        cin >> itemSize;


        switch (tolower(itemSize)) {
        case 's':
            itemPrice = 5.00;
            break;

        case 'm':
            itemPrice = 7.00;
            break;

        case 'l':
            itemPrice = 9.00;
            break;

        }
    }
    else if (foodItem == 'C') {
        cout << "Pick a size: Small (s), Medium (m), Large (l): " << endl;
        char itemSize;
        cin >> itemSize;


        switch (tolower(itemSize)) {
        case 's':
            itemPrice = 2.00;
            break;

        case 'm':
            itemPrice = 3.00;
            break;

        case 'l':
            itemPrice = 4.00;
            break;

        }
    }
    else if (foodItem == 'D') {
        cout << "Pick a size: Small (s), Medium (m), Large (l): " << endl;
        char itemSize;
        cin >> itemSize;


        switch (tolower(itemSize)) {
        case 's':
            itemPrice = 10.00;
            break;

        case 'm':
            itemPrice = 15.00;
            break;

        case 'l':
            itemPrice = 20.00;
            break;

        }
    }
    else    
    {
        cout << "Invalid item selection. Please select a valid item from the menu." << endl;
        return 0;
	}

 
    


    int quantity;
    cout << "Enter your amount: ";
    cin >> quantity;

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

   /* cout << left << setw(20) << foodItem
        << setw(10) << itemCode
        << right << setw(10) << fixed << setprecision(2) << total << endl;

    cout << "Cashier notes: " << cashierNotes << endl;*/

    cout << endl << "Inventory Audit" << endl;
    cout << left << setw(20) << "Item Name"
        << setw(10) << "Code"
        << right << setw(10) << "Quantity"
        << setw(12) << "Unit Price" << endl;

    cout << string(52, '-') << endl;

   /* cout << left << setw(20) << foodItem
        << setw(10) << itemCode
        << right << setw(10) << quantity
        << setw(12) << unitPrice << endl;*/
 
    return 0;
}