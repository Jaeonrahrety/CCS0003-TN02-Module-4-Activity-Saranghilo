#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float x1, y1, x2, y2, dx, dy, distance;
    
    char comma;
    
    cout<<"Enter start (x y): ";
    cin>>x1>>y1;
    
    cout<<"Enter target (x y): ";
    cin>>x2>>y2;
    
    //computation
    
    dx = x2 - x1; dy = y2 - y1;
    distance = sqrt(pow(dx,2)+pow(dy,2));
    
    //output
    cout<<endl;cout<<endl;
    
    cout<<"Start ("<<x1<<", "<<y1<<")";
    cout<<"; Target ("<<x2<<", "<<y2<<")";
    
    cout<<endl;cout<<endl;
    
    cout<<fixed<<setprecision(3);
    cout<<"dx = "<<dx;
    cout<<"; dy = "<<dy;
    cout<<"; Distance = "<<distance;
    cout<<"; Rounded distance = "<<(int)round(distance);

    return 0;
}
