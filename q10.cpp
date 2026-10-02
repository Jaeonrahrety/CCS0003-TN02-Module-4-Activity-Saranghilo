#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    double price, feePerBox, discPercent, subtotal, discount, merchandise, exactBox, shipTotal, amountDue;
    int qty, unitPerBox, boxRequired;
    string name;
    
    cout<<"Enter product name: ";
    getline(cin, name);
    
    cout<<"Enter Unit Price: ";
    cin>>price;
    
    cout<<"Enter Quantity: ";
    cin>>qty;
    
    cout<<"Enter Discount Percentage: ";
    cin>>discPercent;
    
    cout<<"Enter Shipping Fee per box: ";
    cin>>feePerBox;
    
    cout<<"Enter Units per box: ";
    cin>>unitPerBox;
    
    cout<<endl<<endl;
    cout<<"Receipt:";
    cout<<endl<<endl;
    cout<<"Product = "<<name<<
        "\n\tPrice = "<<fixed<<setprecision(2)<<price<<
        "\n\tQty = "<<fixed<<setprecision(0)<<qty<<
        "\n\tDiscount = "<<discPercent<<"%"<<
        "\n\tShip/box = "<<feePerBox<<
        "\n\tUnit/box = "<<unitPerBox;
    
    cout<<endl<<endl;
    
    //calculation
    
    cout<<fixed<<setprecision(2);
    subtotal = price*qty;
    discount = (discPercent/100.0)*subtotal;
    merchandise = subtotal - discount;
    exactBox = (float)qty/unitPerBox;
    boxRequired = ceil(exactBox);
    shipTotal = boxRequired*feePerBox;
    amountDue = shipTotal + merchandise;
    
    //output receipt -last requirement for excercise 10
    
    cout<<"\tSubtotal = "<<subtotal;
    cout<<"\n\tDiscount = "<<discount;
    cout<<"\n\tMerchandise = "<<merchandise;
    cout<<"\n\tExact boxes = "<<exactBox;
    cout<<"\n\tBoxes = "<<boxRequired;
    cout<<"\n\tShipping = "<<shipTotal;
    cout<<"\n\nAmount due = "<<amountDue;
    

    
    

    return 0;
}
