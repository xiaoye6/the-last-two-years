#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	//void func_ji(n/2);
	//void func_ou(n/2);
    int a[n],b[n/2],c[n/2];
	for(i=0,k=0,j=0;i<n;i++)
	{
		a[i]=i+1;
		if((i+1)%2!=0)
		{
			//ÆæÊý
			b[j]=a[i];
			j++; 
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	printf("ÆæÊý£º");
	for(i=0;i<(n/2+1);i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	printf("Å¼Êý£º");
	for(i=0;i<n/2;i++)
	{
		printf("%d ",c[i]);	
	} 
	printf("\n");
	return 0;
}

void func(int n)
{
	int a[n];
}

void func2(int n)
{
	int b[n]; 
}

