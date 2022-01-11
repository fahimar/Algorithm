
// problem link  http://www.codah.club/tasks.php?show_task=5000000336
#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long 

#define tc int t sc cin >> t sc while(t--) 
#define sc ;
#define fi first
#define se second

ll n,x,ans;

int main()
{
	fast;

    tc{
	   cin >> n;
	   
	   double roundd =  (-1+sqrt(1+(8*(n-1))))/2; 
	   
	  // cout << roundd <<'\n';
	   if((int)roundd == roundd)
	   { cout<<("1 ");}
	   else
	   { cout<<("0 ");}	
		
	}


  return 0;
}
