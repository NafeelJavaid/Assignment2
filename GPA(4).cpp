#include<iostream>
using namespace std;
int main()
{
	//declearing
float GPA;
float Attendance;
//asking gpa ad attendance
cout<< "Plz tell your GPA " ;
cin>> GPA;
cout<< " Plz tell your Attendence percentange " ;
cin>>Attendance;
if(GPA>=3.5 && Attendance>=80){
	cout<< "You are eligible";
}
else{
	cout<< "You are not eligible";
}
return 0;
}