// Lab_4 Christian Depablos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    double itemPrice;
    char foodItem;
    char itemSize;
    string itemName;
    string sizeName;

    cout << "Select an item from the menu: " << endl;
    cout << " Items          Small (s)      Medium (m)      Large (l)" << endl
        << " A. Milk        2.50           3.50            4.50" << endl
        << " B. Soda        5.00           7.00            9.00" << endl
        << " C. Fries       2.00           3.00            4.00" << endl
        << " D. Shirt       10.00          15.00           20.00" << endl;

    cin >> foodItem;

    foodItem = toupper(foodItem);

    switch (foodItem)
    {
    case 'A':
        itemName = "Milk";
        cout << "Milk" << endl;
        break;
    case 'B':
        itemName = "Soda";
        cout << "Soda" << endl;
        break;
    case 'C':
        itemName = "Fries";
        cout << "Fries" << endl;
        break;
    case 'D':
        itemName = "Shirt";
        cout << "Shirt" << endl;
        break;
    default:
        cout << "Invalid item selection. Please select a valid item from the menu." << endl;
        return 1;
    }

    cout << "Pick a size: Small (s), Medium (m), Large (l): " << endl;
    cin >> itemSize;

    itemSize = tolower(itemSize);

    switch (itemSize)
    {
    case 's':
        sizeName = "Small";

        if (foodItem == 'A')
            itemPrice = 2.50;
        else if (foodItem == 'B')
            itemPrice = 5.00;
        else if (foodItem == 'C')
            itemPrice = 2.00;
        else if (foodItem == 'D')
            itemPrice = 10.00;

        break;

    case 'm':
        sizeName = "Medium";

        if (foodItem == 'A')
            itemPrice = 3.50;
        else if (foodItem == 'B')
            itemPrice = 7.00;
        else if (foodItem == 'C')
            itemPrice = 3.00;
        else if (foodItem == 'D')
            itemPrice = 15.00;

        break;

    case 'l':
        sizeName = "Large";

        if (foodItem == 'A')
            itemPrice = 4.50;
        else if (foodItem == 'B')
            itemPrice = 9.00;
        else if (foodItem == 'C')
            itemPrice = 4.00;
        else if (foodItem == 'D')
            itemPrice = 20.00;

        break;

    default:
        cout << "Invalid size selection. Please select s, m, or l." << endl;
        return 1;
    }

    int quantity;
    cout << "Enter your amount: ";
    cin >> quantity;

    char member;
    cout << "Are you a member (y/n): ";
    cin >> member;

    string cashierNotes;
    cin.ignore();
    cout << "Enter cashier notes: ";
    getline(cin, cashierNotes);

    double subtotal = itemPrice * quantity;
    double total = subtotal;

    if (member == 'y' || member == 'Y')
    {
        total = total * 0.90;
    }

    double stateTax = total * 0.065;
    double countyTax = total * 0.005;
    double municipalTax = total * 0.02125;

    double taxTotal = stateTax + countyTax + municipalTax;
    double totalWithTax = total + taxTotal;

    cout << endl;
    cout << left << setw(20) << "Item Name"
        << setw(10) << "Size"
        << right << setw(10) << "Price" << endl;

    cout << string(40, '-') << endl;

    cout << left << setw(20) << itemName
        << setw(10) << sizeName
        << right << setw(10) << fixed << setprecision(2) << itemPrice << endl;

    cout << "Cashier notes: " << cashierNotes << endl;

    cout << endl << "Inventory Audit" << endl;
    cout << left << setw(20) << "Item Name"
        << setw(10) << "Quantity"
        << right << setw(10) << "Unit Price"
        << setw(12) << "Subtotal" << endl;

    cout << string(52, '-') << endl;

    cout << left << setw(20) << itemName
        << setw(10) << quantity
        << right << setw(10) << itemPrice
        << setw(12) << subtotal << endl;

    cout << endl << "Taxes" << endl;
    cout << left << setw(25) << "Tax"
        << setw(12) << "Percentage"
        << right << setw(12) << "Amount" << endl;

    cout << string(49, '-') << endl;

    cout << left << setw(25) << "Arkansas State Tax"
        << setw(12) << "6.5%"
        << right << setw(12) << stateTax << endl;

    cout << left << setw(25) << "Faulkner County Tax"
        << setw(12) << "0.5%"
        << right << setw(12) << countyTax << endl;

    cout << left << setw(25) << "Conway Municipal Tax"
        << setw(12) << "2.125%"
        << right << setw(12) << municipalTax << endl;

    cout << left << setw(25) << "Total Tax"
        << setw(12) << ""
        << right << setw(12) << taxTotal << endl;

    cout << endl << "Tip Selection" << endl;
    cout << left << setw(25) << "Amount"
        << right << setw(12) << "Tip" << endl;

    cout << string(37, '-') << endl;

    cout << left << setw(25) << "A. 15%"
        << right << setw(12) << totalWithTax * 0.15 << endl;

    cout << left << setw(25) << "B. 20%"
        << right << setw(12) << totalWithTax * 0.20 << endl;

    cout << left << setw(25) << "C. 25%"
        << right << setw(12) << totalWithTax * 0.25 << endl;

    cout << left << setw(25) << "D. Other Amount"
        << right << setw(12) << "" << endl;

    char tipChoice;
    double tipAmount = 0.0;

    cout << endl << "What tip do you choose? ";
    cin >> tipChoice;

    tipChoice = toupper(tipChoice);

    switch (tipChoice)
    {
    case 'A':
        tipAmount = totalWithTax * 0.15;
        break;

    case 'B':
        tipAmount = totalWithTax * 0.20;
        break;

    case 'C':
        tipAmount = totalWithTax * 0.25;
        break;

    case 'D':
        cout << "How much would you like to tip? ";
        cin >> tipAmount;
        break;

    default:
        cout << "Invalid tip selection." << endl;
        return 1;
    }

    double finalTotal = totalWithTax + tipAmount;

    cout << endl;
    cout << "Subtotal: $" << fixed << setprecision(2) << total << endl;
    cout << "Total Tax: $" << taxTotal << endl;
    cout << "Tip: $" << tipAmount << endl;
    cout << "Final Total: $" << finalTotal << endl;

    return 0;
}