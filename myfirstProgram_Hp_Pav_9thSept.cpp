/*
#include<bits/stdc++.h>
using namespace std;
/*
int fib(int n){
    int ans;
    if(n==1 || n==2 )return (n-1);
    else
        return (fib(n-1)+fib(n-2));

}
*/
/*
int main(){
    /*
    for(int i=1;i<10;i++){
        cout<<i<<'\n';
    }
    */
   /*
   int n;
   cin>>n;
   int dp[n];
   dp[1]=0;
   dp[2]=1;
   for(int i=3;i<=n;i++){
    dp[i]=dp[i-2]+dp[i-1];
    cout<<dp[i]<<'\n';
   }
   cout<<'\n';
   cout<<dp[n]<<'\n';
/*    cout<<fib(n);
   cout<<'\n'; */
/*
    return 0;
}
*/


#include <bits/stdc++.h>
using namespace std;
int dp[1000];
int fib(int n)
{
	if (n <= 1)
		return n;

	// temporary variables to store
	// values of fib(n-1) & fib(n-2)
	int first, second;

	if (dp[n - 1] != -1)
		first = dp[n - 1];
	else
		first = fib(n - 1);

	if (dp[n - 2] != -1)
		second = dp[n - 2];
	else
		second = fib(n - 2);

	// memoization
	return dp[n] = first + second;
}

// Driver Code
int main()
{
	int n=55;

	memset(dp, -1, sizeof(dp));

	cout << fib(n);
	getchar();
	return 0;
}

