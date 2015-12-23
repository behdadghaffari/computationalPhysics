#include <iostream>
#include <cmath>

int main(){
	float analytic = 0;
	//salam
	analytic= sin(1);
	float series = 0;
	float factor = 1;
	int sign = 1;
	for( int i = 1; i < 80; i++){
		if (i%2!=0){
			series = series + (1/factor)* sign;
			sign = -1 * sign;
			std::cout<< "serie is : "<<series<< "	and the factoriel fucntion is: "<< factor;
			std::cout<< "sign is:"<< sign <<"\n";
		}
		factor = (factor)*(i+1);
	}
	std::cout<<" The analytic value is: "<<analytic;		
	std::cout<<"\n";
	std::cout<< " The amount of sin(1) via power expansion is : " <<series<<"\n";
	return 0;
}
	
