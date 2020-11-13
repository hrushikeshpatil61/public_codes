#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int row=2;
	int col=2;
	int i,j,num=5;
	vector<vector<int> > vec;
	
	for(int i=0;i<row;i++)
	{
		vector<int> v1;
		for(int j=0;j<col;j++)
		{
			v1.push_back(num);
			num+=5;
		}
		vec.push_back(v1);
	}
	
	//small change made here
	for(i=0;i<row;i++)
	{
		cout<<"\n";
		for(j=0;j<col;j++)
		{
			cout<<vec[i][j]<<"\t";
			
		}
	}
	
	
	
}
