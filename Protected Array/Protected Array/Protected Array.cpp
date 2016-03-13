// Protected Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "protectedArr.h"

int _tmain(int argc, _TCHAR* argv[])
{
	try {
		proArr<int> arr(3);
		for (int i = 0; i < arr.getSize(); ++i) {
			std::cout << arr[i] << std::endl;
		}
		proArr<char> charr(5);
		char* str = "Hello";
		proArr<char>* pCharr = &charr;
		for (int i = 0; i < charr.getSize(); ++i) {
			pCharr->operator[](i) = str[i];
			//*pCharr = str[i];
			//++pCharr;
			std::cout << charr[i];
		}
	}
	catch (int Err) {
		if (Err == 0) {
			std::cout << "Error: Index out of range!" << std::endl;
		}
	}
	getchar();
	return 0;
}