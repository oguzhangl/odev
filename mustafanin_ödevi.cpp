#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL,"turkish");
int a,carp=1,top=0;
cout<<"istenilen üst sýnýrý giriniz"<<endl;	cin>>a;
for (int i=1;i<=a;i++)
{
	carp=1;
	for (int j=1;j<=i;j++) 
		carp*=j;
	top+=carp;
}
cout<<top<<endl;
system("pause");
}