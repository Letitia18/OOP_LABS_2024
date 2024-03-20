#include <iostream>
#include <algorithm>
#include "Math.h"
int main()
{

	printf("Add(1, 2) = %d\n", Math::Add(1, 2));
	printf("Add(1, 2, 3) = %d\n", Math::Add(1, 2, 3));
	printf("Add(1.5, 2.5) = %d\n", Math::Add(1.5, 2.5));
	printf("Add(1.2, 2.3, 3.4) = %d\n", Math::Add(1.2, 2.3, 3.4));
	printf("Mul(2, 3) = %d\n", Math::Mul(2, 3));
	printf("Mul(2, 3, 4) = %d\n", Math::Mul(2, 3, 4));
	printf("Mul(2.2, 3.3) = %d\n", Math::Mul(2.2, 3.3));
	printf("Mul(2.2, 3.3, 4.4) = %d\n", Math::Mul(2.2, 3.3, 4.4));
	printf("Add(5, 3, 4, 5, 6, 7, 8, 9, 10) = %d\n", Math::Add(9, 5, 3, 4, 5, 6, 7, 8, 9, 10));
	printf("Add(5, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14) = %d\n", Math::Add(13, 5, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14));
	printf("Add(5, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16) = %d\n", Math::Add(15, 5, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16));

}