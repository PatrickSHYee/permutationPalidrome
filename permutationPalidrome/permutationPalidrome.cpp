// permutationPalidrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

// Get the permutation and store it in a temp string.
void permut(string a, int start, int end) {
	// base condition for the permutation
	if (start == end - 1) {
		printf("%s\n", a);
		return;
	}

	// Process each character of the string
	for (int j = start; j < end; j++) {
		swap(a[start], a[j]);
	}
}

bool solution(string s) {
	bool palidrome = false;
	permut(s, 0, 2);
	return palidrome;
}

int main()
{
	string str = "ABC";
	solution(str);
	return 0;
}
