#include<iostream>
using namespace std;
int main()
{
	int c;
	//user input	
	cout <<"what is the length of the base of the triangle(odd)? ";
	cin >> c;
	int k=(c-1)/2;
	int l=c;
	//loop for rows 	
	for (int i=0; i<((c+1)/2); i++)
	{
	int x=k;
	//loop for spaces before stars 
	while (x<(c-1)/2)
	{	
	cout<<" "; 
	x++;
	}	
	int j=0;	
	//loop for stars
	while(j<l)
	{	
	cout<<"*";
	j++;
	}
	cout <<endl;
	l--;
	l--;	
	k--;	
	}



}




