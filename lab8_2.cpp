#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int x, int y)
{
	int i,j;
	if(x<=0||y<=0)
		cout<<"Invalid input";
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
		{
			cout<<"o";
		}
		cout<<"\n";
	}
	
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
