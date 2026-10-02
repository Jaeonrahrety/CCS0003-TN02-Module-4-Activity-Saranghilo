#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double baseTuition, feePercent, downPayment, processingFee, adjTuition, balance, monthlyIns;
    int months;
    
    cout<<"Enter base tuition: ";
    cin>>baseTuition;
    
    cout<<"Enter processing fee percentage: ";
    cin>>feePercent;
    
    cout<<"Enter down-payment amount: ";
    cin>>downPayment;
    
    cout<<"Enter number of monthly installments: ";
    cin>>months;
    
    cout<<endl<<endl;
    
    cout<<"Tuition = "<<baseTuition<<"; Fee = "<<feePercent<<"%"<<"; Down = "<<downPayment<<"; Months = "<<months;
    
    cout<<endl<<endl;
    
    //calculation
    
    cout<<fixed<<setprecision(2);
    processingFee = (feePercent/100.0)*baseTuition;
    adjTuition = baseTuition+processingFee;
    balance = adjTuition - downPayment;
    monthlyIns = balance / months;
    
    //output
    
    cout<<"Processing fee = "<<processingFee<<"; Adjusted tuition = "<<adjTuition<<"; Balance = "<<balance<<"; Monthly = "<<monthlyIns;
    

    return 0;
}
