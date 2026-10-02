/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double basefare, distance, ratePerKM, tollFee, bookFeePercent, passengers;
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
    bookFeePercent = bookFeePercent/100.0;
    
    cout<<"Enter number of passengers: ";
    cin>>passengers;

    //computation
    
    distCharge = distance*ratePerKM;
    preFeeTotal = basefare + distCharge + tollFee;
    bookFee = preFeeTotal * bookFeePercent;
    total = preFeeTotal + bookFee;
    perPassenger = total/passengers;
    
    //output
    
    cout<<"Distance charge = "<<fixed<<setprecision(2)<<distCharge;
    cout<<"; Pre-fee = "<<preFeeTotal;
    cout<<"; Booking fee = "<<bookFee;
    cout<<"; Total = "<<total;
    cout<<"; Per passenger = "<<perPassenger;
    
    return 0;
}
