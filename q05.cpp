#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int numAttend, seatPerTable, tableReq, totalAvailSeat, unusedSeat;
    double exactTableReq;
    
    cout<<"Enter number of attendees: ";
    cin>>numAttend;
    
    cout<<"Enter seats per table: ";
    cin>>seatPerTable;
    
    //computation
    exactTableReq = (float)numAttend/seatPerTable;
    tableReq = ceil(exactTableReq);
    totalAvailSeat = tableReq * seatPerTable;
    unusedSeat = totalAvailSeat - numAttend;
    
    //output
    
    cout<<fixed<<setprecision(2)<<"Exact tables = "<<exactTableReq;
    cout<<"; Tables required = "<<tableReq;
    cout<<"; Total seats = "<<totalAvailSeat;
    cout<<"; Unused seats = "<<unusedSeat;
    

    return 0;
}
