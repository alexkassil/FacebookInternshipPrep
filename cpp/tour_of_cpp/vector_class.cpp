#include <iostream>

class Vector{
public:
	Vector(int s) :elem{new double[s]}, sz{s} { }
	double& operator[](int i) { return elem[i]; }
	int size() { return sz; }
private:
	double* elem;
	int sz;
};

double read_and_sum(int s)
// Reads in s doubles and sums them
{
	Vector v(s);
	for (int i = 0; i < v.size(); ++i)
		std::cin >> v[i];

	double sum = 0;
	for (int i = 0; i < v.size(); ++i)
		sum += v[i];
	return sum;
		
}

int main()
{
	int how_many;
	std::cout << "How many doubles do you wanna add?" << std::endl;
	std::cin >> how_many;
	std::cout << "The result is " << read_and_sum(how_many) << std::endl;
}
