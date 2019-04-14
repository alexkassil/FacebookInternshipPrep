#include <iostream>

struct Vector {
	int sz;
	double* elem;
};

void vector_init(Vector& v, int s)
{
	v.elem = new double[s];
	v.sz = s;
}

double read_and_sum(int s)
// Reads in s doubles and sums them
{
	Vector v;
	vector_init(v, s);
	for (int i = 0; i < s; ++i)
		std::cin >> v.elem[i];

	double sum = 0;
	for (int i = 0; i < s; ++i)
		sum += v.elem[i];
	return sum;
		
}

int main()
{
	int how_many;
	std::cout << "How many doubles do you wanna add?" << std::endl;
	std::cin >> how_many;
	std::cout << "The result is " << read_and_sum(how_many) << std::endl;
}
