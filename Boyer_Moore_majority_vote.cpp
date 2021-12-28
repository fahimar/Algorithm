#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long int

#define tc int t sc cin >> t sc while(t--) 
#define sc ;


ll ans = 0,sum=0;
ll x,y;

ll gcd(ll a , ll b)
{
	while(b)
	{
		a = a%b;
		swap(a,b);
	}
	
	return a;
}
/* Candidate element is the only posible Majority elemnet (if present) * 
 * This technique  always return an element*/
int countFrequency(int a[],int size)
{
	int m_i = 0,c = 1;
	for (int i = 1; i < size; i++)
	{
		if(a[m_i] == a[i] )
		 c++;
		 else
		 c--;
		 
		 if(c==0)
		 { m_i = i; c = 1;}
	}
	
	return a[m_i];
	
	}

bool isMajority(int a[], int size, int candidate)
{
		
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		if(a[i] == candidate)
		{c++;}
	}
	
		if(c > size/2)
		{ return 1;}
		
		else
		return 0;
	
	
	
}


void printMajority(int a[], int size)
{
	int candidate = countFrequency(a, size);
	
	
	if(isMajority(a, size, candidate))
	{ cout << " " << candidate << " ";}
	
	else
	{ cout<< "No Majority Element"; }
	
	
	
	}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	printMajority(a,n);
	
return 0;
	
	}
