#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double Loan(double loan,double rate,double pay)
{
	double pre,it,total,pm,nb;
	int year=1;
	nb=loan;
	while(year!=0)
	{
		pre=nb;
		it=pre*rate/100;
		total=pre+it;
		if(total<=pay) pm=total;
		else pm=pay;
		nb=total-pm;
		if(total==0) break;
		cout << setw(13) << left << year; 
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << pre;
		cout << setw(13) << left << it;
		cout << setw(13) << left << total;
		cout << setw(13) << left << pm;
		cout << setw(13) << left << nb;
		cout << "\n";
		year++;	
	}
}

int main(){	
	double loan,rate,pay,now;
	cout<<"Enter initial loan: ";
	cin>>loan;
	cout<<"Enter interest rate per year (%): ";
	cin>>rate;
	cout<<"Enter amout you can pay per year: ";
	cin>>pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	/* cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	*/
	
	Loan(loan,rate,pay);

	return 0;
}
