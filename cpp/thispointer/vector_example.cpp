#include <iostream>
#include <numeric>
#include <vector>

int main() {
	std::vector<int> vecOfInts;
	std::vector<int> x(10);
	std::iota(std::begin(x), std::end(x), 0);

	for (int i : x)
		vecOfInts.push_back(i);

	auto it = vecOfInts.begin();
	while (it != vecOfInts.end()) 
		std::cout << *(it++) << " , ";
	std::cout<<std::endl;

	for (int i : vecOfInts)
		std::cout<<vecOfInts[i] << " , ";

	std::cout<<std::endl;

	return 0;
}
