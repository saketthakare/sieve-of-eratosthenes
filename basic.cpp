#include <bits/stdc++.h>
// #include <chrono>

using namespace std; 

void SieveOfEratosthenes(int n) 
{ 
	bool prime[n+1]; 
	memset(prime, true, sizeof(prime)); 
	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p] == true) 
		{ 
			for (int i=p*2; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 
	for (int p=2; p<=n; p++) 
	if (prime[p]) 
		cout << p << " "; 
} 

int main(int argc, char *argv[])
{
    int n = 100;
    if(argc > 1){
        try
        {
            n = stoi(argv[1]);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
	SieveOfEratosthenes(n);
    return 0; 
}

// g++ -std=c++11 basic.cpp && ./a.out