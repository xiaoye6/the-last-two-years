#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;
int main()
{
	int n,j,i;
	stack<char>s;
	char str1[20],str2[20];
	while(cin>>n)
	{
		while(!s.empty())
		{
			s.pop();	
		}
		cin>>str1>>str2;
		for(i=0,j=0;i<n;i++)
		{
			s.push(str1[i]); 
			while(!s.empty()&&s.top()==str2[j])
			{
				s.pop();
				j++;
			}
		}
		if(!s.empty())
		{
			cout<<"No."<<endl;
		}
		else
		{
			cout<<"Yes."<<endl;
			for(i=0,j=0;i<n;i++)
			{
				s.push(str1[i]);
			
				cout<<"in"<<endl;
				while(!s.empty()&&s.top()==str2[j])
				{
					s.pop();
					cout<<"out"<<endl;
					j++;
				}	
			}
		} 
		cout<<"Finish"<<endl;
	return 0;
	}
}

////////////////////////////
//n���������Ĵ�С 
//��ջ�� 
//��ջ�� 
//�ж��ܷ�ͨ������ջ���������һ��õ��ڶ������������ 
