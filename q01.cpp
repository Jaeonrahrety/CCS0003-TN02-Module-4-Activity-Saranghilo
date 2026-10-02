#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mealPrice, serPercentage, serPercentage1, subtotal, serCharge, finalBill, sharePerStud;
    int quantityOrd, numStudents;
    
    cout<<"Enter meal price: ";
    cin>>mealPrice;
    
    cout<<"Enter quantity ordered: ";
    cin>>quantityOrd;
    
    cout<<"Enter service charge percentage: ";
    cin>>serPercentage;
    serPercentage1= serPercentage/100.0;
    
    cout<<"Enter number of students sharing the bill: ";
    cin>>numStudents;
    
    //subtotal, serCharge, finalBll, sharePerStud
    
    subtotal = mealPrice*quantityOrd;
    serCharge = subtotal*serPercentage1;
    finalBill = subtotal+serCharge;
    sharePerStud = finalBill/numStudents;
    
    //output
    cout<<endl<<endl;
    
    cout<<fixed<<setprecision(2)<<"Meal Price = "<<mealPrice<<"; Quantity = "<<(int)quantityOrd<<"; Service = "<<(int)serPercentage<<"%"<<"; Students = "<<numStudents;
    
    cout<<endl<<endl;
    
    cout<<"Subtotal = "<<fixed<<setprecision(2)<<subtotal;
    cout<<"; Service Charge = "<<fixed<<setprecision(2)<<serCharge;
    cout<<"; Final Bill = "<<fixed<<setprecision(2)<<finalBill;
    cout<<"; Share/Student = "<<fixed<<setprecision(2)<<sharePerStud;
    return 0;
}
