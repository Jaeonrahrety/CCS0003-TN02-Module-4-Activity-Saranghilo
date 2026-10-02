#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mealPrice, serPercentage, subtotal, serCharge, finalBill, sharePerStud;
    int quantityOrd, numStudents;
    
    cout<<"Enter meal price: ";
    cin>>mealPrice;
    
    cout<<"Enter quantity ordered: ";
    cin>>quantityOrd;
    
    cout<<"Enter service charge percentage: ";
    cin>>serPercentage;
    serPercentage= serPercentage/100.0;
    
    cout<<"Enter number of students sharing the bill: ";
    cin>>numStudents;
    
    //subtotal, serCharge, finalBll, sharePerStud
    
    subtotal = mealPrice*quantityOrd;
    serCharge = subtotal*serPercentage;
    finalBill = subtotal+serCharge;
    sharePerStud = finalBill/numStudents;
    
    //output
    
    cout<<"Subtotal = "<<fixed<<setprecision(2)<<subtotal;
    cout<<"; Service Charge = "<<fixed<<setprecision(2)<<serCharge;
    cout<<"; Final Bill = "<<fixed<<setprecision(2)<<finalBill;
    cout<<"; Share/Student = "<<fixed<<setprecision(2)<<sharePerStud;
    return 0;
}
