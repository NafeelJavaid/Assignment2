#include<iostream>
using namespace std;
int main()
{
//declearing variable
int x;
cout<< "plz tell the year" ;
//asking the year
cin>> x;
if(x%4==0){
	cout<<"It is a Leap year";
}
else{
	cout<< "It is not a Leap year";
}
return 0;
}