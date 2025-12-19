#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double PrevBalance,Interest,Total,Payment,NewBalance,Newinterest;
	cout << "Enter initial loan: ";
	cin >> PrevBalance ;
	cout << "Enter interest rate per year (%): ";
	cin >> Interest ;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int i = 1;
	NewBalance = 1 ;
	while (NewBalance > 0)
	{
	Newinterest = PrevBalance * Interest/100 ;
	Total = PrevBalance + Newinterest ;
	NewBalance = Total - Payment ;
	if (NewBalance < 0){
		NewBalance = 0 ;
	}
	if(Total < Payment){
		Payment = Total ;
	}
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Newinterest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";
	PrevBalance = NewBalance;
	i++;

	}
	
	return 0;
}
