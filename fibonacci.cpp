//Fibonacci Series using Recursion
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}

int main ()
{
	int n = 9;
	cout << fib(n);
	getchar();
	return 0;
}



// C++ program for Fibonacci Series
// using Dynamic Programming
#include<bits/stdc++.h>
using namespace std;

class GFG{
	
public:
int fib(int n)
{
	
	
	int f[n + 2];
	int i;


	f[0] = 0;
	f[1] = 1;

	for(i = 2; i <= n; i++)
	{
	f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
	}
};

int main ()
{
	GFG g;
	int n = 9;
	
	cout << g.fib(n);
	return 0;
}

