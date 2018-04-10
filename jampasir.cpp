//jam pasir
// Sarah Rosdiana Tambunan

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main () {
  int i, j, x;
  string kondisi;
  
  cin >> x;
  cin >> kondisi;
  x=x+1;
  
  for(i=x;i>1;i--)
  {
  	for(j=0; j<x-i+1;j++)
  	{
  		cout << " ";
	}
  	for(j=0; j<(2*i)-1; j++)
  	{
  		if(kondisi == "PENUH")
  		{
  			if(j==0 || j==(2*i)-2 || i==x)
  			cout << "*";
  			else
  			{
  				cout << " ";
			}
		}
		if(kondisi == "KOSONG")
			cout << "*";
	}
	cout << endl;
  }
  
  for(i=x;i>0;i--)
  {
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<=2*(x-i);j++){
			if(kondisi == "KOSONG")
			{
				if(j==0 || i==1 || j==2*(x-i) )
	  			cout << "*";
	  			else
	  			{
	  				cout << " ";
				}	
			}
			else
				cout << "*";
		}
		printf("\n");
  }
  
}
