#include <iostream>

using namespace std;

int main()
{
    string CustomerName;
    string itemsBeingsold;
    double vat;
    string attendantsName;
    int ID;
    int price;
    string itemTobuy;
    double quantityTobuy;
    double totalCost,totalAmount;
    double vatAmount;
    double balance;


    cout << "please enter customer's name" << endl;
    cin >> CustomerName;

    vat =0.12;

    cout << "please enter attendant's name" << endl;
    cin >> attendantsName;

    cout << "please enter your ID" << endl;
    cin >> ID;

    cout << "Items For sale" <<endl;
    cout << "1. Printer = $600"<<endl;
    cout << "2. Phone = $200" <<endl;
    cout << "3. Table = $5"<<endl;

    double printerPrice= 600;
    double phonePrice= 200;
    double tablePrice= 5;

    double itemA, itemB, itemC;
    cout <<" please how many printers will you buy" << endl;
    cin >> itemA;
    cout << "please how many phones will you buy" << endl;
    cin >> itemB;
    cout << "Please how many tables will you buy else input 0"<<endl;
    cin>> itemC;

     totalCost = ((printerPrice*itemA) + (phonePrice*itemB) + (tablePrice*itemC));
     vatAmount = (totalCost* vat);
     totalAmount = ((totalCost*vat)+totalCost);

        cout << "RECEIPT" <<endl;
        cout << "Customer Name: "<<ID<<endl;
        cout << "Unique ID: "<<endl;
        cout << "Attendants Name: "<<attendantsName<<endl;
        cout << "Printers bought = "<<itemA<<endl;
        cout << "Phones bought = "<<itemB<<endl;
        cout << "Tables bought = "<<itemC<<endl;
        cout << "Total Cost = $"<<totalCost<<endl;
        cout << "Vat Amount = $"<<vatAmount<<endl;
        cout << "Total Amount = $"<<totalAmount<<endl;


    return 0;
}
