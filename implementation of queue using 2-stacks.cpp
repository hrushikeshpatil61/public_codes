#include<iostream>
#include<stack>
using namespace std;

stack <int> s1;
stack <int> s2;
int count=0;

void pop1()
{
	if(count==0)
		 cout<<"empty stack";
	else
	{
		for(int i=0;i<count;++i)
		{
			int a = s1.top();
			s1.pop();
			s2.push(a);
		}
	
	}
}
void pop2()
{
	if(count==0)
		cout<<"empty stack";
	else
	{
		for(int i=0;i<count;i++)
		{
			int a=s2.top();
			s2.pop();
			s1.push(a);
		}
		
	}
}

void enqueue(int x)
{
	
	s1.push(x);
	count++;
	
}

void display()
{
	
	if(count==0)
	{
		cout<<"no elements present"<<endl;
	}
	else
	{
		pop1();
		stack <int> s3=s2;
		pop2();
		for(int i=0;i<count;i++)
		{
			cout<<s3.top()<<"\t";
			s3.pop();	
		}
		cout<<endl;
	}
}

void dequeue()
{
	if(count==0)
		cout<<"queue is empty";
	else
	{
		pop1();
		
		s2.pop();
		count--;
		pop2();
		display();
	}
}
void pop1();
void pop2();
void enqueue(int x);
void display();
void dequeue();
int main()
{
	int ch,x;
	do{
		cout<<"1.enqueue\n2.display\n3.dequeue\n4.exit\n";
		cout<<"enter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"enter data to enqueue:";
				cin>>x;
				enqueue(x);
				break;
			case 2:
				cout<<"data in queue:";
				display();
				break;
			case 3:
				dequeue();
				break;
			case 4:
				cout<<"thank you";
				break;
			default:
				cout<<"choice invalid:";
		}
		
	}while(ch!=4);
	
}
