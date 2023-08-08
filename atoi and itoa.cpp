#include<iostream>
using namespace std;
int main(){
	char str[]="123456";
	int i,n=0;
	for(i=0;str[i]!='\0';i++){
		n=n*10+str[i]-'0';
	}
	cout<<n<<endl;
	int len;
	n=567432;
	char n1[10];
int rem=1,div;
while(rem>0){
	int i;
	div=n/10;
	rem=n%10;
	n=div;
	n1[i]=rem+'0';
	i++;
}
n1[i]='\0';
cout<<n1;
}
