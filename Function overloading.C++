#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int Hilal(int a,int b){
	int v=a/b;
	cout<<"The Division is "<<v<<endl;
}
int Hilal(float a,int b){
	int v=a*b;
	cout<<"The Multi is "<<v<<endl;
}

int main(int argc, char** argv) {
	int x,y;
	float z;
 cout<<"Enter First Number :";
 cin>>x;
 cout<<"enter Second Number :";
 cin>>y;
 cout<<"Enter third Number :";
 cin>>z;
 Hilal(x,y);
 Hilal(z,y);
 
	return 0;
}