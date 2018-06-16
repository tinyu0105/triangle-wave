#include<iostream>
using namespace std;
int n,A,F,z=1,v;

void triangle(){
	
		cin>>A;
		cin>>F;

for(int j=1;j<=F;j++)
{
	if(A<=9)
	{
			v=A-1;
		for(int i=1;i<=A;i++)
		{
			for(int k=1;k<=i;k++)
			{
				cout<<z;
			}
			z++;
			cout<<endl;
		}
		for(int x=A-1;x>=A-(A-1);x--)
		{
			for(int b=x;b>=1;b--)
			{
				if(v>0)
				{
					cout<<v;
				}
			}
			v--;
			cout<<endl;
		}
	}
 z=1;
 v=1;
} 
cout<<endl;
		
}

int main(){
int i=1;
	cin>>n;	
	while(i<=n){	
	triangle();
	i++;
	}
} 
