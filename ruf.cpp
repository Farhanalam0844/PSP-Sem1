#include<iostream>
using namespace std;
int main(){
	const int NUM_ROADS=7;
	char roads[NUM_ROADS][20]={"Jinnah Ave","Faisal Ave","Park Road","Constitution Ave","Margalla Road","Hill Road","7th Ave"};
	cout<<roads[1]<<endl;
	cout<<&roads[4][9]<<endl<<(char)(roads[0][1]-32)<<endl<<--roads[6][0]<<endl<<roads[3][0]<<endl;
	roads[5][1]=roads[6][6];
	cout<<roads[5]<<endl;
}

