// permutationPalidrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

// Get the permutation and store it in a temp string.
void permut(string a, int end, string temp) {
	//// base condition for the permutation
	//if (end == 1) {
	//	//cout << temp + a << endl;
	//}
	//else {

	//	// Process each character of the string
	//	for (int i = 0; i < end; i++) {
	//		permut(a.substr(1), end - 1, temp + a[0]);
	//		rotate(a.begin(), a.begin() + 1, a.end());
	//	}
	//}
	if (end != 1) {
		// Process each character of the string
		for (int i = 0; i < end; i++) {
			permut(a.substr(1), end - 1, temp + a[0]);
			rotate(a.begin(), a.begin() + 1, a.end());
		}
	}
	cout << temp << a << endl;
}

bool solution(string s) {
	// still want to figure it out using this method
	//bool palidrome = false;
	//string temp;
	//double end = s.size();
	//if(end == 1) {
	//	// check if palidrome
	//	return true;
	//}
	//else {
	//	// Process each character of the string
	//	for (int i = 0; i < end; i++) {
	//		permut(s.substr(1), end - 1, temp + a[0]);
	//		rotate(s.begin(), s.begin() + 1, s.end());
	//	}
	//}
	//permut(s, s.size(), temp);
	//cout << temp << endl;
	//return false;
	// checking if the length is great than 2 and is not an even number.
	if (s.length() <= 2 || s.length() % 2 == 0) {
		return false;
	}

	int n = s.length();
	bool isPal = false;
	do {
		for (int i = 0; i <= n; i++) {
			if (tolower(s[i]) == tolower(s[n])){
				isPal = true;
			}
			else {
				isPal = false;
			}
			n--;
		}
		if (isPal)
			return true;
		n = s.length();
	} while (next_permutation(s.begin(), s.end()));
}

int main()
{
	string str = "racecar";

	cout << solution(str) << endl;
	return 0;
}
