#include<iostream>
using namespace std;
void mostrar(int v[], int n);
void poner(int v[], int n);
int main(){
	int v[1000];
	for(int i=2;i<1000;i++)
	  v[i]=1;
	poner(v,1000);
	mostrar(v,1000);
	cin.get();
	cin.get();
}
void poner(int v[], int n)
{
	for(int i=2;i<1000;i++)
	{
		if(v[i]==1)
		{
			for(int j=i+1;j<1000;j++)
			{
				if(j%i==0)
					 v[j]=0;
			}
		}
	}
}
void mostrar(int v[], int n)
{
	for(int i=0;i<1000;i++)
	{
		if(v[i]==1)
	      		cout<<i<<endl;
	}

}
