#include <iostream>
#include <cmath>
int main(){
	double result = 0;
	double result_frac = 0;
	double p = 1000;
	double q = 1e-10;
	result = -1 *p + sqrt(p*p + q);
	result_frac = q/(p + sqrt( p*p + q));
	std::cout<<" the result by delta function is: " << result;
	std::cout<<" the result by fraction is: " << result_frac;
	std :: cout << "\n";
	return 0;
}
