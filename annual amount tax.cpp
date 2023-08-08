#include<iostream>
using namespace std;
int main(){
	double Start_Bal,Ann_Int_Rate,Tot_Dep_Mon,balance,Tot_With_Mon,Mon_Int_Rate,Avg,Interest_Amount;
	double total_deposit,total_W_draw,t_interest,total_balance;
	cout<<"Enter starting balance of acoount "<<endl;
	cin>>Start_Bal;
	cout<<"Enter annual interest rate "<<endl;
	cin>>Ann_Int_Rate;
	for(int i=1;i<=2;i++){
		cout<<"Enter Total amount deposited during month "<<i<<endl;
		cin>>Tot_Dep_Mon;
		while(Tot_Dep_Mon<0){
			cout<<"Amount should not be negative.\nEnter again "<<endl;
			cin>>Tot_Dep_Mon;
		}
		balance=balance+Tot_Dep_Mon;
		cout<<"Enter the total amount withdrawn from account during month "<<i<<endl;
		cin>>Tot_With_Mon;
		while(Tot_With_Mon<0||Tot_With_Mon>balance){
			cout<<"Withdrawn amount must not be less than zero or greater than balance after deposited balance "<<endl;
			cin>>Tot_With_Mon;	
		}
		
		Mon_Int_Rate=(Ann_Int_Rate/100.0)/12.0;
		Avg=(Start_Bal+balance)/2;
		Interest_Amount=Mon_Int_Rate*Avg;
		balance=balance-Tot_With_Mon;
		total_deposit = total_deposit +Tot_Dep_Mon;
	total_W_draw = total_W_draw +Tot_With_Mon;
	total_balance=Start_Bal+Interest_Amount+total_deposit-total_W_draw;
	t_interest = t_interest + Interest_Amount;
	
}
	cout<<"Starting balance is "<<Start_Bal<<endl;
	cout<<"Total deposit is "<<total_deposit<<endl;
	cout<<"Total withdrawn is "<<total_W_draw<<endl;
	cout<<"Total interest is "<<t_interest<<endl;
	cout<<"Final balance is "<<total_balance;
}
