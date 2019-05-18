#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

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
	// for (int p=2; p<=n; p++) 
	// if (prime[p]) 
	// 	cout << ""; 
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
    auto start = high_resolution_clock::now(); 
	SieveOfEratosthenes(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << n << " prime numbers in\n"
         << duration.count() << " microseconds" << endl;
    return 0; 
}

// g++ -std=c++11 basic.cpp && ./a.out