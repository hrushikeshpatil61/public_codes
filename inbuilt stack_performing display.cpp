#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int i,n;
	stack <int> s2;
	s2.push(1);
	s2.push(2);
	s2.push(3);
	n=s2.size();
	stack <int> ss=s2;
	for(i=0;i<3;i++)
	{
		cout<<ss.top()<<endl;
		ss.pop();
	}
	for(i=0;i<n;++i)
	{
		cout<<s2.top();
		s2.pop();
	}
	return 0;
}
