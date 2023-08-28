#include <iostream>
#include "poly2.h"

int main(int argc, const char* argv[]){
	std::cout << "Root-finding started..." << std::endl;

    float a, b, c;

	while (std::cin >> a >> b >> c){
		Poly2 poly(a, b, c);
		int numRoots;
		float root1, root2;
		poly.findRoots(numRoots, root1, root2);

		std::cout << "Number of roots: " << numRoots << std::endl;

		if(numRoots == 1){
			std::cout << "One root: " << root1 << std::endl;
			std::cout << "Verification: " << poly.eval(root1) << std::endl;
		} 
		else if (numRoots == 2){
			std::cout << "Two roots: " << root1 << " and " << root2 << std::endl;
			std::cout << "Verification for root1: " << poly.eval(root1) << std::endl;
			std::cout << "Verification for root2: " << poly.eval(root2) << std::endl;
		}
		else{
			std::cout << "No real roots" << std::endl;
		}
		
		std::cout << "--------------------------" << std::endl;
	}
	return 0;
}
