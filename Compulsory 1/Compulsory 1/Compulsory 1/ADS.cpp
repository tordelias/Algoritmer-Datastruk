#include "ADS.h"
#include <iostream>
#include <ostream>

ADS recursive;

int main()
{

	long double n;
	std::cin >> n;

	recursive.Result = 1;
	recursive.Result1 = 1;
	recursive.Result2= 1;
	long double r = recursive.Recursive(n);
	std::cout << r << std::endl;
	return 0;
}

long double ADS::Recursive(long double X)
{
	long double n = X;
	if (X == 1 || X == 0)
	{
		return Result;
	}
	//factorial//
	//else
	//{
	//	Result *= X;
	//return	Recursive(--X);
	//}
	
	//fibonacci//
	else
	{
		Result1 = Result;
		Result = Result1 + Result2;
		Result2 = Result1;
		return	Recursive(--X);
	}

}


