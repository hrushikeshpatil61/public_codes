#include<bits/stdc++.h>

using namespace std;
class Box
{

        int l,b,h;
    public:
        Box()
        {
            l=0;
            b=0;
            h=0;
        }
        Box(int length,int breath,int height)
        {
            l=length;
            b=breath;
            h=height;
        }
        Box(Box &B)
        {
            l=B.l;
            b=B.b;
            h=B.h;        
        }
    int getLength()
    {
        return l;
    }
    int getBreath()
    {
        return b;
    }
    int getheight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        long long v=l*b*h;
        return v;
    }
    
};
ostream & operator <<(ostream &out,Box &d);
bool operator <(Box &a,Box &b)
{
   
    if((a.getLength()<b.getLength())||(a.getBreath()<b.getBreath())&&(a.getLength()==b.getLength())||(a.getheight()<b.getheight())&&(a.getBreath()==b.getBreath())&&(a.getLength()==b.getLength()))
    
    return true;
    else
    return false;
}

ostream & operator <<(ostream &out,Box &d)
{
    return out<<d.getLength()<<" "<<d.getBreath()<<" "<<d.getheight();     
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}


