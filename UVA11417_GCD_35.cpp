/*
Sample Input
10
100
500
0
Sample Output
67
13015
442011
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int gcd(int a,int b) //�̰� �׳� ����gcd 3���� ���� github�� �� �����ڽ��ϴ�;
{
    while(a!=0&&b!=0)
    {
    	while(b!=0)
    	{
    		int temp;
			temp=b;
    		b=a%b;
    		a=temp;
		}
		return a;
	}	
}
	
int main()
{
	int n,i,j,g;
	while(cin>>n) //�̰� �������� �� ����; 
	{
		if(n==0)
		{
			break;
		}
		g=0;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				g+=gcd(i,j);
			}	
		}
		cout<<g<<endl;
	}

return 0;
}

