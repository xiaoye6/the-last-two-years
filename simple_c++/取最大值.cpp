#include<iostream>
using namespace std;
int a,b,m;
float c,d,e,n;
int main()
{
	int max(int a,int b);
	float max(float c,float d,float e);
	cin>>a>>b;
	cin>>c>>d>>e;
	m=max(a,b);
	n=max(c,d,e);
	cout<<"max_i="<<m<<endl;
	cout<<"max_f="<<n<<endl;
	return 0;
}
int max(int a,int b)
{
	int i;
	a>b?i=a:i=b;
	return(i);
}

float max(float c,float d,float e)
{
	float i;
	if(c>d)
	{
		if(c>e)
		{
			i=c;
		}
		else
		{
			i=e;
		}
	}
	else if(d>e)
	{
		i=d;
	}
	else
	{
		i=e;
	}
	return(i);
}

