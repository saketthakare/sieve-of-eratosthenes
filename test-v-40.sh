g++ -std=c++11 -fopenmp sieve-v-40.cpp
sum=0
for run in {1..100}
do
  sum=$(($sum + $(./a.out 8000000) ))
done
echo "Avg time : $((sum / 100)) microseconds"