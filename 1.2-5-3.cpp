#include<iostream>
using namespace std;
int main()
{
	int n=10;
	cout<<"please input 10 int numbers:\n";
	int *p;
	p=new int [10];
	int i;
	int positive=0;
	int negative=0;
	for(i=0;i<10;i++)
	{
		int x;
		cin>>x;
//		int positive=0;
//		int negative=0;
		p[i]=x;
		if(x>0)
			positive++;
		if(x<0)
			negative++;
	}
	cout<<"positive="<<positive<<"£»negative="<<negative<<"\n";
	delete []p;
	return 0;
}
