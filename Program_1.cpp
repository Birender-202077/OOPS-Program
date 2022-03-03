#include <iostream>
using namespace std;
int matrix[10][10];

void read_matrix(int a, int b)
{
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cout<<"Enter Element at matrix["<<i<<"]["<<j<<"]= ";
			cin>>matrix[i][j];
		}
		cout<<endl;
	}
}

void display_matrix(int a, int b)
{
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main()
{
	int m,n;
	cout<<"Enter number of rows: ";
	cin>>m;
	cout<<"Enter number of columns: ";
	cin>>n;
	read_matrix(m,n);
	cout<<"Displaying the required 2-D Matrix"<<endl;
     display_matrix(m,n);
	 return 0;	
}
