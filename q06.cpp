#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double fileSize, KB, MB, GB;
    
    cout<<"Enter file size in bytes: ";
    cin>>fileSize;
    
    //calculation
    
    KB = (float)fileSize/1024;
    MB = KB/1024;
    GB = MB/1024;
    
    //output
    
    cout<<fixed<<setprecision(2)<<"KB = "<<KB;
    cout<<"; MB = "<<MB;
    cout<<fixed<<setprecision(4)<<"; GB = "<<GB;
    cout<<"; Whole MB = "<<(int)MB;
    
    return 0;
}
