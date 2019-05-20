echo "Testing v1.0 : Base code with boolean array."
bash test-v-10.sh

echo -e "\nTesting v1.1 : Replacing boolean array with char array."
bash test-v-11.sh

echo -e "\nTesting v1.2 : Computing only odd numbers."
bash test-v-12.sh

echo -e "\nTesting v2.0 : Parallelizing the code."
bash test-v-20.sh

echo -e "\nTesting v2.1 : Adding schedule(auto) for multiple search"
bash test-v-21.sh

echo -e "\nTesting v2.2 : Replaced auto with static"
bash test-v-22.sh

echo -e "\nTesting v2.3 : Replaced static with dynamic"
bash test-v-23.sh

echo -e "\nTesting v2.4 : Add reduction(+:found) in parallel block"
bash test-v-24.sh

echo -e "\nTesting v3.0 : Block-wise."
bash test-v-30.sh

echo -e "\nTesting v4.0 : Parallelizing block-wise."
bash test-v-40.sh