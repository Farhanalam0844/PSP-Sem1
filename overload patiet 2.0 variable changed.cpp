#include<iostream>
using namespace std;
int Input_Data (double& days_no,double& daily_rate,double& h_med_c,double& h_sec_c);
double Cal_Tot_charges(double T_charge,double days_no,double daily_rate,double h_med_c,double h_sec_c);
int	Input_Data(double& h_med_c,double& h_sec_c);
double	Cal_Tot_charges(double h_med_c,double h_sec_c,double T_charge);
int main(){
	int pat;
	double T_charge,days_no,daily_rate,h_med_c,h_sec_c;
	cout<<"Enter 1 if patient is in_patient and 2 for out_patient"<<endl; 
	cin>>pat;
	while(pat!=1 &&pat!=2){
		cout<<"You must enter 1 or 0 "<<endl;
		cin>>pat;
	}
	if(pat==1){
		Input_Data(days_no,daily_rate,h_med_c,h_sec_c);
		cout<<Cal_Tot_charges(T_charge,days_no,daily_rate,h_med_c,h_sec_c);
		}
	else {
		Input_Data(h_med_c,h_sec_c);
		cout<<Cal_Tot_charges(T_charge,h_med_c,h_sec_c)<<endl;	
	}
		
}
int Input_Data(double& days_no,double& daily_rate,double& h_med_c,double& h_sec_c)
{
	cout<<"Enter days no"<<endl;
	cin>>days_no;
	cout<<"Enter daily rate "<<endl;
	cin>>daily_rate;
	daily_rate=daily_rate*days_no;
	cout<<"Enter Hospital Medication charges "<<endl;
	cin>>h_med_c;
	cout<<"Enter charges for hospital services"<<endl;
	cin>>h_sec_c;
	return 0;
}
double Cal_Tot_charges(double days_no,double T_charge,double daily_rate,double h_med_c,double h_sec_c)
{
	T_charge=days_no+daily_rate+h_med_c+h_sec_c;
	return T_charge;

}
int	Input_Data(double& h_med_c,double& h_sec_c){
	cout<<"Enter Hostel Medication charges "<<endl;
	cin>>h_med_c;
	cout<<"Enter Hostel Service chrges "<<endl;
	cin>>h_sec_c;
	return 0;
}
double	Cal_Tot_charges(double T_charge,double h_med_c,double h_sec_c){
	T_charge=h_med_c+h_sec_c;
	return T_charge;
}







