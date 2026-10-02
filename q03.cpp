#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int passengers;
    double basefare, distance, ratePerKM, tollFee, bookFeePercent, bookFeePercent1;
    double distCharge, preFeeTotal, bookFee, total, perPassenger;
    
    cout<<"Enter base fare: ";
    cin>>basefare;
    
    cout<<"Enter distance (in kilometers): ";
    cin>>distance;
    
    cout<<"Enter rate per kilometer: ";
    cin>>ratePerKM;
    
    cout<<"Enter toll fee: ";
    cin>>tollFee;
    
    cout<<"Enter booking fee percentage: ";
    cin>>bookFeePercent;
    bookFeePercent1 = bookFeePercent/100.0;
    
    cout<<"Enter number of passengers: ";
    cin>>passengers;

    //computation
    
    distCharge = distance*ratePerKM;
    preFeeTotal = basefare + distCharge + tollFee;
    bookFee = preFeeTotal * bookFeePercent1;
    total = preFeeTotal + bookFee;
    perPassenger = total/passengers;
    
    //output
    cout<<endl<<endl;
    
    cout<<"Base = "<<basefare<<"; Distance = "<<distance<<"; Rate = "<<ratePerKM<<"; Toll = "<<tollFee<<"; Fee = "<<bookFeePercent<<"%"<<"; Passengers ="<<passengers;
    cout<<endl<<endl;
    
    cout<<"Distance charge = "<<fixed<<setprecision(2)<<distCharge;
    cout<<"; Pre-fee = "<<preFeeTotal;
    cout<<"; Booking fee = "<<bookFee;
    cout<<"; Total = "<<total;
    cout<<"; Per passenger = "<<perPassenger;
    
    return 0;
}
