g++ -std=c++11 sieve-v-12.cpp
sum=0
for run in {1..100}
do
  sum=$(($sum + $(./a.out 8000000) ))
done
echo "Avg time : $((sum / 100)) microseconds"
