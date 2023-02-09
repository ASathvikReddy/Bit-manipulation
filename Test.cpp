#include<bits/stdc++.h>
using namespace std;

// bit magic

void print_binary(int n)
{
	for(int i=10;i>=0;i--)
	{
		//if(n&(1<<i)) cout<<1;
		//else cout<<0;
		cout<<((n>>i)&1);
	}
	cout<<endl;
}


int main(){
	int n;
	cin>>n;
	//for(int i=0;i<=n;i++)print_binary(i);

	/*trick - 1  (even or odd)

	if(n&1) cout<<"odd";
	else cout<<"even";
	*/

	// trick - 2 (lowercase to uppercase and vice versa)
	/*
	for(char c='A';c<='D';c++)
	{
		cout<<c<<endl;
		print_binary(c);
	}
	for(char c='a';c<='d';c++)
	{
		cout<<c<<endl;
		print_binary(c);
	}
	*/
	/*
	char c='A';
	//c=(c|(1<<5));
	c=c|' ';
	cout<<c;
	*/
	char c='a';
	c=c&(~(1<<5));
	cout<<c;
}