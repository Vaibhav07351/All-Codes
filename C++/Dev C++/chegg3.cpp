// Function to take order
// Time Complexity - O(n)
#include<bits/stdc++.h>
//#include "Header.cpp"
void foodType ::take_order()
{
system("cls");
int i;
int num;
bool found = false;
int choice, quantity, price, None;
string str1 = "**********************************************************\n";
string str2 = "+-------+-----------------+-------------------------------\n";

cout << "-----------------";
cout << "\nAdd Order Details\n";
cout << "-----------------\n\n";

node *temp;
temp = new node;

cout << str1;
cout << " ID "
<< "\t Burgers & Pizzas"
<< "\tPRICE ($)" << endl;
cout << str1;
cout << "0001"
<< "\tCheese Burger"
<< "\t\t"
<< " 6$" << endl;
cout << str2;
cout << "0002"
<< "\tClassic Burger"
<< "\t\t"
<< " 5$" << endl;
cout << str2;
cout << "0003"
<< "\tMozzarella Pizza"
<< "\t"
<< " 12$"<< endl;
cout << str2;
cout << "0004"
<< "\tPineapple Pizza"
<< "\t\t"
<< " 13$" << endl;
cout << str2;
cout << "0005"
<< "\tVegetable Pizza"
<< "\t\t"
<< " 10$"<< endl;

cout << str1;
cout << " " << endl;

temp = new node;

string str = "-------------------------------------------\n";

cout << str;

cout << "Type Order No: "<< temp->receipt_number << endl;


cout << "Enter Customer Name: ";
cin >> temp->customerName;

cout << "Enter Date: ";
cin >> temp->date;

cout << str;

cout << "\nHow much would you like to order?";
cout << "\n(Maximum order is 10: ";
cin >> temp->x;

cout << endl;

if (temp->x <= 0)
{
cout << "\nInvalid order!!!\n";
cout << str;
system("pause");
}

else if (temp->x > 10)
{
cout << "\nYour order exceeds the maximum amount of order!!!\n";
cout << str;
system("pause");
}

else
{
cout << str;

cout << "\t Enter Item ID\n";

for (i = 0; i < temp->x; i++)
{
cout << str;

cout << "Please Enter Your Selection: ";
cin >> temp->menu2[i];

cout << "\nOrder Name: " << temp->itemName[temp->menu2[i] - 1] << endl;

cout << "\nHow many do you want?: ";
cin >> temp->quantity[i];

temp->amount[i] = temp->quantity[i] * temp->Price[temp->menu2[i] - 1];
cout << "\nThe amount You need to pay is: $ " << temp->amount[i] << "/-" << endl;

string str = "\t\t===========================================\n";

temp->total = temp->amount[0] + temp->amount[1] + temp->amount[2] + temp->amount[3] + temp->amount[4] + temp->amount[5] + temp->amount[6] + temp->amount[7] + temp->amount[8] + temp->amount[9];
cout << "\nTotal Bill: " << temp->total << ".00/- Rs.";


cout << str << endl;

system("PAUSE");
}

cout << "================================================================================================" << endl;
cout << "\t\t\t\t Here is the Receipt\n";
cout << "================================================================================================\n"
<< endl;

cout << "Receipt Number : " << temp->receipt_number << endl;
cout << "Customer Name : " << temp->customerName << endl;
cout << "Order Date : " << temp->date << endl;

cout << "\n\n";

cout << "\n===========================================================================" << endl;
cout << " Order Taken Successfully..." << endl;
cout << "===========================================================================" << endl;
cout << " Go to Receipt Menu to Pay The Bill" << endl;
cout << "===========================================================================\n" << endl;

system("PAUSE");

temp->next = NULL;

if (start_ptr != NULL)
temp->next = start_ptr;

start_ptr = temp;

system("cls");
}

} // End function take_order
#include <chrono>

//Construct node
struct node
{

int receipt_number = 100 + rand()%900; // gives a value between [100, 999]

int x;

string customerName, date;


int quantity[10], menu2[10];

int amount[10], total;
string type[10] = {"8GB", "4GB", "4GB", "8GB", "8GB", "8GB", "4GB", "8GB", "4GB", "8GB"};

string itemName[10] ={"Cheese Burger", "Classic Burger", "Mozzarella Pizza","Pineapple Pizza","Vegetable pizza"};

int Price [10]= {6, 5, 12,13, 10};

// node *prev;
node *next;

} *q, *temp; // Pointer declaration

node *start_ptr = NULL;
node *head = NULL;
node *last = NULL;
