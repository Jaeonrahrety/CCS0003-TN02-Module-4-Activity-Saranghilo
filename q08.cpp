#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    float T1, T2, T3, diff_1_3, average;
    
    cout<<"Enter three decimal temperature readings: ";
    cin>>T1>>T2>>T3;
    
    cout<<endl<<endl;
    
    cout<<fixed<<setprecision(1)<<"T1 = "<<T1<<"; T2 = "<<T2<<"; T3 = "<<T3;
    
    cout<<endl<<endl;
    
    //calculation
    diff_1_3 = fabs(T3 - T1);
    
    cout<<fixed<<setprecision(3);
    
    average = (T1 + T2 + T3)/3;
    
    //output
    
    cout<<"Average = "<<average;
    cout<<"; |T1-T3| = "<<diff_1_3;
    
    cout<<"; floor = "<<(int)floor(average);
    cout<<"; ceil = "<<(int)ceil(average);
    cout<<"; trunc = "<<(int)trunc(average);
    cout<<"; round = "<<(int)round(average);
    return 0;
}
