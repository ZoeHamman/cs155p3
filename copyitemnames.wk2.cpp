/*
Some of the parts that rely on windows were added without running
becuase I have a macbook. It wouldn't let me run it so i just added them last.
So I am not sure if certain things have errors
so just let me know if there is an error and I will fix it.
*/
#include<iostream>
#include<iomanip>
#include<cmath>
#include<windows.h>
using namespace std;

int main()
{
//variables
string item1, item2, item3;
double price1, price2, price3;
double subt, total, tax;

//This will get the item names
cout<<"What's the first item:"<<endl;
item1[0] = toupper(item1[0]);
cin>>item1;
cout<<"What's the second item:"<<endl;
item2[0] = toupper(item2[0]);
cin>>item2;
cout<<"What's the third item:"<<endl;
item3[0] = toupper(item3[0]);
cin>>item3;

//This will get the prices of the items
cout<<"Price of "<<item1<<": ";
cin>>price1;

cout<<"Price of "<<item2<<": ";
cin>>price2;

cout<<"Price of "<<item3<<": ";
cin>>price3;

//This will clear the screen, change the color, and beep
system("CLS");
system("color 86");
beep(880,100);

//This will calculate the total
subt = 1.00 * (price1 + price2 + price3);
total = subt + tax;
tax = subt * .05;

//This will print the receipt
cout<<"Receipt"<<endl;
cout<<item1<<": $"<<price1*1.00<<endl;
cout<<item2<<": $"<<price2*1.00<<endl;
cout<<item3<<": $"<<price3*1.00<<endl;

cout<<endl<<"Subtotal: $"<<subt;
cout<<endl<<"Tax: $"<<round(tax*100.0) / 100.0;
cout<<endl<<"Total: $"<<round(total*100.0) / 100.0;

cout << endl << endl;
return 0;
}
