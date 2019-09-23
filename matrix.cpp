//define aclass matrix with data member two dimentional array for 3*3 matrix member function
//to read matrix to display matrix in matrix format to multiply teo matrix
#include<iostream> 
using namespace std;
class matrix
{
	int a[3][3],b[3][3],mul[3][3];
	int i,j,k;
	public:
		void readmatrix();
		void displaymatrix();
		void mulmatrix();
		void outmatrix();
		
};
void matrix::readmatrix()
{
	cout<<"enter the values for thr first matrix";
	cout<<"\n matrix 1,row 1:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the values for the second matrix";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
}
void matrix::displaymatrix()
{
	cout<<"the values for the first matrix is:";
	cout<<"\n matrix 1 row 1:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"the values for the second matrix is:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<"\n";
	}
}
void matrix::mulmatrix()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0; 
			for(k=0;k<3;k++)
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[i][j];
			}
		}
	}
}
void matrix::outmatrix()
{
	cout<<"the resultant matrix is:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<mul[i][j];
		}
		cout<<"\n";
	}
	int main()
		matrix m;
		m.readmatrix();
		m.displaymatrix();
		m.mulmatrix();
		m.outmatrix();
		return 0;
	
	
}
		

