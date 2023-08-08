#include<iostream>
using namespace std;
int Input_Data (double& days_no,double& daily_rate,double& H_M_charges,double& H_S_charges);
double Cal_Tot_charges(double Tot_charges,double days_no,double daily_rate,double H_M_charges,double H_S_charges);
int	Input_Data(double& H_M_charges,double& H_S_charges);
double	Cal_Tot_charges(double Tot_charges,double H_M_charges,double H_S_charges);
int main(){
	int patient;
	double Tot_charges,days_no,daily_rate,H_M_charges,H_S_charges;
	cout<<"Enter 1 if patient is in_patient and 0 for out_patient"<<endl; 
	cin>>patient;
	while(patient!=0&&patient!=1){
		cout<<"You must enter 1 or 0 "<<endl;
		cin>>patient;
	}
	if(patient){
		Input_Data(days_no,daily_rate,H_M_charges,H_S_charges);
		cout<<Cal_Tot_charges(Tot_charges,days_no,daily_rate,H_M_charges,H_S_charges);
		}
	else {
		Input_Data(H_M_charges,H_S_charges);
		cout<<Cal_Tot_charges(Tot_charges,H_M_charges,H_S_charges)<<endl;	
	}
		
}
int Input_Data(double& days_no,double& daily_rate,double& H_M_charges,double& H_S_charges)
{
	cout<<"Enter days no"<<endl;
	cin>>days_no;
	cout<<"Enter daily rate "<<endl;
	cin>>daily_rate;
	daily_rate=daily_rate*days_no;
	cout<<"Enter Hospital Medication charges "<<endl;
	cin>>H_M_charges;
	cout<<"Enter charges for hospital services"<<endl;
	cin>>H_S_charges;
	return 0;
}
double Cal_Tot_charges(double days_no,double Tot_charges,double daily_rate,double H_M_charges,double H_S_charges)
{
	Tot_charges=days_no+daily_rate+H_M_charges+H_S_charges;
	return Tot_charges;

}
int	Input_Data(double& H_M_charges,double& H_S_charges){
	cout<<"Enter Hostel Medication charges "<<endl;
	cin>>H_M_charges;
	cout<<"Enter Hostel Service chrges "<<endl;
	cin>>H_S_charges;
	return 0;
}
double	Cal_Tot_charges(double Tot_charges,double H_M_charges,double H_S_charges){
	Tot_charges=H_M_charges+ H_S_charges;
	return Tot_charges;
}







