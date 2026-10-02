/******************************************************************************

Ask for x1, y1, x2, and y2 as floating-point values.
Compute dx = x2 - x1 and dy = y2 - y1.
Use the distance formula sqrt(pow(dx,2) + pow(dy,2)).
Display dx, dy, and final distance to three decimal places.
Also display the rounded whole-unit distance using round().

*******************************************************************************/
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
    cout<<endl<<endl;
    
    cout<<"Attendees = "<<numAttend; cout<<"; Seat/table = "<<seatPerTable;
    
    cout<<endl<<endl;
    
    cout<<fixed<<setprecision(2)<<"Exact tables = "<<exactTableReq;
    cout<<"; Tables required = "<<tableReq;
    cout<<"; Total seats = "<<totalAvailSeat;
    cout<<"; Unused seats = "<<unusedSeat;
    

    return 0;
}
