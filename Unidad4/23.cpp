#include <stdio.h> 
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
int sum=0,x; char frase[50];

cout<<"Introduzca una frase: "; 
gets(frase);

for(x = 0; x < 50;x++)
{
if (frase[x]!='\0')
{
frase[x]=frase[x]+3;
}
}

cout<<"\n\nLa nueva frase es:\n\n"<<sum<<endl; 
cout<<"\n\n%s\n\n"<<frase<<endl;
cout<<"\n\n";

system("PAUSE"); 
return 0;
}


