//rectangle row pattern
#include<iostream>
using namespace std;
int main (){
	int k,l;
	//user input
	cout << " what are the number of rows? ";
	cin >>l;
	cout<< "what are the number of columns? ";
	cin>>k ;
	//starting the loop for rows 
	for (int i=0;i<l ;i++)
	{
	int j=0;
	//starting the loop for columns
	//nested loop
	while (j<k)
	{
	cout << "*";	
	j++;
		
	}
	cout << endl;
	 	
	}	
}
