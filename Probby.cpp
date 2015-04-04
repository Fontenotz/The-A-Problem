#include<iostream.h>
#include<stdlib.h>
#include<time.h>
#include<iomanip.h>

int x[3];

int main()
{
	x[0]=8,x[1]=6,x[2]=5,x[3]=9;
	for(int y=0;y<1000;y++)
	{
	system("cls");
	cout<<setw(y+3)<<x[0]<<endl;
	cout<<setw(y+2)<<x[0]<<x[1]<<endl;
	cout<<setw(y+1)<<x[0]<<x[1]<<x[2]<<endl;
	cout<<setw(y)<<x[0]<<x[1]<<x[2]<<x[3]<<endl;
	system("cls");
	}

	return 0;
}