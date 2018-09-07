//inverted right triangle star pattern
#include<iostream>
using namespace std;
int main ()
{	
	int j;		
	//user input
	cout <<"what is the number of columns? ";
	cin>>j;
	//loop for number of columns
	while (j>0)
	{
	int i=0;
	//loop for making the row
	while (i<j)
	{
	cout <<"*";
	i++;
	}
	cout <<endl;
	//decreasing the number of columns for next row
	j--;
	

	}





}
