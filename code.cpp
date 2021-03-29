#include <bits/stdc++.h>
using namespace std;

int reverse( int n)
{
    int remainder,reversed_number=0;
    while(n>0)
    {
        remainder=n%10;
        reversed_number=reversed_number*10 +remainder;
        n=n/10;
    }
    return(reversed_number);
}
int main() {
	int t,n;
	cin>> t;
	while(t--)
	{
	  cin>>n;
	  cout << reverse(n)<<endl;
	}	
}
