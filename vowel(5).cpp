#include<iostream>
using namespace std;
int main()
{
	char y;
		cout<< "Plz tell the alphabet " ;
	cin>> y;
	if(y=='a' || y=='e' || y=='i' || y=='o' || y=='u')
	{
		cout<< "It is a vowel";
	}
	else{
		cout<< " It is a consonent";	
	}
	return 0;
}