#include <stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
	int x, tabla[100];
	
	for(x=0; x<100; x++)
	{
	tabla[x]=x+1;
	  
    }
    
	cout<<"Numeros en la tabla: "<<endl;
	
	for(x=0;x<100;x++)
	{
    cout<<tabla[x]<<endl;
  
	}
	system("PAUSE");
	return 0;
}
