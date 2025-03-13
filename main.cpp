#include <iostream>
using namespace std;
int main(int argc, char** argv)
{

//	void add(int a, int b)
//	{
//		cout<<"sum="<< (a+b);
//	}
//	void add(double a, double b)
//	{
//		cout<<endl<<"sum =" << (a+b);
//	}
//	int main()
//	{
//	
//	add(29,89);
//	add(1.7,79.9);
	int rows,cols;
	cout<<"Enter Numbe rof Rows :";
	cin>>rows;
	cout<<"Enter number of columns :";
	cin>>cols;
	int Data[rows][cols];
	 for ( int r=0;r<rows; r++)
	 {
	 	cout<<"Enter Data in Row "<<r+1<<endl;
		 for(int c=0; c<cols; c++)
		 {
		 
	 	cout<<"Data["<<r<<"]["<<c<<"]"<<endl;
	 	cin>>Data[r][c];
	
		 }
	 	}
	 	cout<<"Data in Matrix:"<<endl;
		 for(int r=0; r<rows; r++)
		 {
		 for(int c=0;c<cols;c++)
	{
	
		 	cout<<Data[r][c]<<"/t";
		 }
		 cout<<"/n";
	}
	return 0;
}
		 	
	 
	 	
	 	
	 
	
	
	
	
	
	
	
	
