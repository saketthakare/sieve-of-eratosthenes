#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

int eratosthenes(int lastNumber)
{
    bool isPrime[lastNumber + 1];
    for (int i = 0; i <= lastNumber; i++)
        isPrime[i] = true;
    for (int i = 2; i * i <= lastNumber; i++)
        if (isPrime[i])
            for (int j = i * i; j <= lastNumber; j += i)
                isPrime[j] = false;
    int found = 0;
    for (int i = 2; i <= lastNumber; i++)
        if(isPrime[i])
            found++;
    return found;
}

int main(int argc, char *argv[])
{
    int n = 100;
    if (argc > 1)
    {
        try
        {
            n = stoi(argv[1]);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    auto start = high_resolution_clock::now();
    // SieveOfEratosthenes(n);
    eratosthenes(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    // cout << n << " prime numbers in\n";
    // cout << duration.count() << " microseconds" << endl;
    // cerr << duration.count() << endl;
    cout << duration.count();
    return 0;
}

// g++ -std=c++11 basic.cpp && ./a.out