#include<iostream>
using namespace std;
double getJudgeData(double& number);
double calculatescore(double n1, double n2, double n3, double n4, double n5);
double findlowest(double n1, double n2, double n3, double n4, double n5);
double findhighest(double n1, double n2, double n3, double n4, double n5);
double printscore(double score);
int main()
{
	double score;
	double  n1, n2, n3, n4, n5;
	getJudgeData(n1);
	getJudgeData(n2);
	getJudgeData(n3);
	getJudgeData(n4);
	getJudgeData(n5);
    calculatescore(n1, n2, n3, n4, n5);
	 printscore(score);
}
double getJudgeData(double& number)
{
	cin >> number;
	while (number < 0 || number>10)
	{
		cout << " Enter the marks between 0 and 10 = " << endl;
		cin >> number;
	}
}
double calculatescore(double n1, double n2, double n3, double n4, double n5)
{
	double average, low, high;
	low = findlowest(n1, n2, n3, n4, n5);
	high = findhighest(n1, n2, n3, n4, n5);
	average = n1 + n2 + n3 + n4 + n5 - high - low;
	average = average / 3;
}
double findlowest(double n1, double n2, double n3, double n4, double n5)
{
int 	low = n1;
if (n2 < low)
	low = n2;
if (n3 < low)
	low = n3;
if (n4 < low)
	low = n4;
if (n5 < low)
	low = n5;
return low;
}

double findhighest(double n1, double n2, double n3, double n4, double n5)
{
	int high = n1;
	if (n2 >high)
		high = n2;
	if (n3 > high)
		high = n3;
	if (n4 > high)
		high = n4;
	if (n5 > high)
		high = n5;
	return high;
}
double printscore(double score) {
	cout << "the final score of contestant is :" << score;
}

