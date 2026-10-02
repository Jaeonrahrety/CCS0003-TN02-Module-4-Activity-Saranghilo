/******************************************************************************

quizzes 20%, laboratory 25%, project 25%, examination 30%.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double quiz, laboratory, project, examination, grade;
    
    cout<<"Enter quizzes' score: ";
    cin>>quiz;
    quiz = quiz * 0.20;
    
    cout<<"Enter laboratory score: ";
    cin>>laboratory;
    laboratory = laboratory * 0.25;
    
    cout<<"Enter project score: ";
    cin>>project;
    project = project * 0.25;
    
    cout<<"Enter examination score: ";
    cin>>examination;
    examination = examination * 0.30;
    
    //calculation
    grade = (quiz + laboratory + project + examination);
    
    //output
    
    cout<<"Weighted grade = "<<fixed<<setprecision(2)<<grade; //weighted grade (2decimals)
    cout<<"; Rounded = "<<(int)round(grade);
    cout<<"; Cast to int = "<<(int)grade;
    
    return 0;
}
