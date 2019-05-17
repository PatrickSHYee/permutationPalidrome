// permutationPalidrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

// swap the values at 2 pointers or position
void swap(char *x, char *y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}

// Get the permutation and store it in a temp string.
void permute(char *a, int start, int end) {
	int i;

	if (start == end) {
		cout << a << endl;
	}
	else {
		for (i = start; i <= end; i++) {
			swap(a+1, a + i);
			permute(a, start+1, end);
			swap(a+1, a + i);
		}
	}
}

bool solution(string s) {
	bool palidrome = false;
	return palidrome;
}

int main()
{
	char str[] = "ABC";
	permute(str, 0, 2);
	return 0;
}
