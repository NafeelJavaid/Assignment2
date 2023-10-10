#include<iostream>
using namespace std;
int main()
{
int marks;
//Asking marks
cout<< "Tell your marks out of 100 " ;
cin>> marks;
//Declearing the marks
if(marks <=100 && marks>=90)
{
cout<< "You have got A grade";
}
else if (marks<90 && marks >=75)
{
cout<< "You have got B grade";}
else if(marks<75  && marks >=60){
cout<< "You have got C grade";}
else if(marks<60 && marks >=45){
cout<< "You have got D grade";}
else if  (marks<<45){
cout<< "You have got F grade";}
return 0;
}
