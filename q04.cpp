#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    
    double wallWidth, wallHeight, covPerCan;
    int numOfCoat, cansToBuy;
    double wallArea, paintArea, exactNumOfCan;
    
    cout<<"Enter wall width: ";
    cin>>wallWidth;
    
    cout<<"Enter wall height: ";
    cin>>wallHeight;
    
    cout<<"Enter number of coats: ";
    cin>>numOfCoat;
    
    cout<<"Enter coverage per can (in square meters): ";
    cin>>covPerCan;
    
    //computation
    
    wallArea = wallWidth*wallHeight;
    paintArea = wallArea*numOfCoat;
    exactNumOfCan = paintArea/covPerCan;
    cansToBuy = ceil(exactNumOfCan);
    //output
    cout<<endl<<endl;
    
    cout<<"Width = "<<wallWidth<<"; Height = "<<wallHeight<<"; Coats = "<<numOfCoat<<"; Coverage = "<<covPerCan;
    
    cout<<endl<<endl;
    
    cout<<fixed<<setprecision(2)<<"Wall Area = "<<wallArea;
    cout<<"; Total paint area = "<<paintArea;
    cout<<"; Exact cans = "<<exactNumOfCan;
    cout<<"; Cans to buy = "<<cansToBuy;
    
    return 0;
}
