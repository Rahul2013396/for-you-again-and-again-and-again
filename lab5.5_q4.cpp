//rhombus star pattern
#include<iostream>
using namespace std;
int main ()
{ 
	int l,k ,o=0;
	//user input
	cout << "what are the number of rows? ";
	cin >> l;	
	cout << "what are the numbers of columns? ";
	cin >> k;
	//loop for rows
	for(int i=0; i<l; i++)
	{
	int j=0 ;
	//nested loop for spaces
	while(j<(k-o))
	{
	cout<< " ";
	j++;	
	}
	int p=0;	
	//nested loop for stars
	while(p<k)
	{
	cout <<"*";
	p++;	
	}
	//decrasing "o" by 1 to decrease the number of spaces by 1 
	o++;
	//ending line
	cout << endl;	
	}

}
