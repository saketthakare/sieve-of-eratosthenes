#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

int eratosthenes(int lastNumber)
{
    int memorySize = (lastNumber - 1) / 2;
    char *isPrime = new char[memorySize + 1];
    for (int i = 0; i <= memorySize; i++)
        isPrime[i] = 1;
    for (int i = 3; i * i <= lastNumber; i += 2)
        if (isPrime[i / 2])
            for (int j = i * i; j <= lastNumber; j += 2 * i)
                isPrime[j / 2] = 0;
    int found = lastNumber >= 2 ? 1 : 0;
    for (int i = 1; i <= memorySize; i++)
        found += isPrime[i];
    delete[] isPrime;
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
    eratosthenes(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count();
    return 0;
}
// g++ -std=c++11 basic.cpp && ./a.out