// hollow rectangle star pattern
#include<iostream>
using namespace std;
int main (){
	int l, k;
	//user input
	cout << " what are the number of rows? ";
	cin >>l;
	cout <<"what are the numbers of columns? ";
	cin>> k;
	int i=0,j=0,p=0;
	//loop for first row with no spaces 	
	while(j<k) 
	{	
	cout <<"*";
	j++;
	}
	cout<<endl;	
	//loop for the rows except first and last with spaces 
	while (i<(l-2))
	{
	//first star of every hollow row	
	cout <<"*";
	int o=0;
	while(o<(k-2))
	//nested loop for the hollow spaces
	{
	cout<<" ";
	o++;
	}
	//last star of every hollow row
	cout<<"*";
	cout << endl;	
	 i++;
	}
	//loop for th last row of stars
	while(p<k) 
	{	
	cout <<"*";
	p++;
	}	
	cout<<endl;	
	
		
}
