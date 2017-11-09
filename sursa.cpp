#include<fstream>
using namespace std;
ifstream cin("in.txt");
ofstream cout("out.txt");

void citire(int a[],int &m,int b[],int &n)
{
	int i;
	cin>>m>>n;
	for(i=1;i<=m;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		cin>>b[i];
}

void interclasare(int a[],int m,int b[],int n)
{
	int i=1,j=1,k=0,c[202]={};
	while(i<=m && j<=n)
		if(a[i]<b[j])
			c[++k]=a[i++];
		else
			c[++k]=b[j++];
	while(i<=m)
		c[++k]=a[i++];
	while(j<=n)
		c[++k]=b[j++];
	for(i=1;i<=k;i++)
		cout<<c[i]<<" ";
}

int main()
{
	int a[101]={},b[101]={},n,m;
	citire(a,m,b,n);
	interclasare(a,m,b,n);
	return 0;
}
