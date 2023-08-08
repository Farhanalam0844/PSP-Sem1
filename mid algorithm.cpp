#include<iostream>
using namespace std;
int main()
{
	int start_bal, total_dep_month, total_withdraw;
	double annual_interest = 0.0, monthly_interest=0.0, interest_amount=0.0, final_balance = 0.0;
	int end_balance=0,  average;
	int total_deposit=0, total_W_draw=0,t_interest=0;
	cout << "enter strarting balance of account :" << endl;
	cin >> start_bal;
	cout << "Enter the annual interest rate :" << endl;
	cin >> annual_interest;
	for (int i = 1; i <= 6; i++)
	{
		cout << "enter total amount deposited during month :" << i << endl;
		cin >> total_dep_month;
		while (total_dep_month < 0)
		{	
			cout << "enter always positive numbers :" << endl;
			cin >> total_dep_month;
		}
		end_balance = end_balance + total_dep_month;

		cout << "enter total amount withdrawn during  that month :" << endl;
		cin >> total_withdraw;
		while (total_withdraw<0 || total_withdraw>end_balance)
		{
			cout << "withdrawn amount must be greater than zero and the balance after deposited :" << endl;
			cin >> total_withdraw;
		}
		end_balance = end_balance - total_withdraw;
		monthly_interest = (annual_interest /100) / 12.0;
		average = (start_bal + end_balance) / 2;
		interest_amount = monthly_interest * average;
	total_deposit = total_deposit + total_dep_month;
	total_W_draw = total_W_draw + total_withdraw;
	t_interest = t_interest + interest_amount;
	}
	cout << " your starting balance will be :" << start_bal << endl;
	cout << "total deposit made during six months will be :" << total_deposit<<endl;
	cout << "total withdraw made during six months will be :" << total_W_draw<<endl;
	cout << "total interest made during six months will be :" << t_interest << endl;
	final_balance = start_bal + total_deposit;
	final_balance = final_balance - total_W_draw;
	final_balance = final_balance + t_interest;
	cout << "The final balance after six months: " << final_balance << endl;

}
