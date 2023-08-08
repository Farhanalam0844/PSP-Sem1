#include<iostream>
using namespace std;
		void getJudgeData(double& n);
		double calcScore(double n1,double n2,double n3,double n4,double n5);
		double findHighest(double n1,double n2,double n3,double n4,double n5);
		double findLowest(double n1,double n2,double n3,double n4,double n5);
		double	printScore(double score);
int main(){
	double n1,n2,n3,n4,n5;
	getJudgeData(n1);
	getJudgeData(n2);
	getJudgeData(n3);
	getJudgeData(n4);
	getJudgeData(n5);
	
	double score=calcScore(n1,n2,n3,n4,n5);
	printScore(score);		
	}

void getJudgeData(double& n){
	cout<<"Enter marks of judge "<<endl;
	cin>>n;
	while(n<0||n>10){
		cout<<"Enter the marks between 0.0 to 10.0 "<<endl ;
		cin>>n;
	}
}
double calcScore(double n1,double n2,double n3,double n4,double n5){
		double low=findLowest(n1,n2,n3,n4,n5);
		double high=findHighest(n1,n2,n3,n4,n5);
		double sum=n1+n2+n3+n4+n5-high-low;
		double avg=sum/3;
			return avg;}
double findLowest(double n1,double n2,double n3,double n4,double n5){
	double low=n1;
	if(n2<low)
	low=n2;
	if(n3<low)
	low=n3;
	if(n4<low)
	low=n4;
	if(n5<low)
	low=n5;
	return low;
}
double findHighest(double n1,double n2,double n3,double n4,double n5){
	double high=n1;
	if(n2>high)
	high=n2;
	if(n3>high)
	high=n3;
	if(n4>high)
	high=n4;
	if(n5>high)
	high=n5;
	cout<<"high is "<<high<<endl;
	return high;
}
double	printScore(double score){
	
	cout<<"Final Score of contestant is "<<score;
}
