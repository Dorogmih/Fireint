#pragma once
#include <iostream> //including useful libraries
#include <cmath>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>

#define str std::string
#define input std::cin >>
#define output std::cout <<

using ll = long long;
using i3t = int32_t;
using uns = unsigned;
using bl = bool;
using cr = char;
using szt = size_t;

std::vector<int> fillzero(int b) { //fill vector via b zeros
	std::vector<int> a;
	for (int i = 0; i < b; i++) {
		a.push_back(0);
	}
	return a;
}

std::vector<int> fillinput(int b) { //fill vector via b input numbers
	std::vector<int> a;
	for (int i = 0; i < b; i++) {
		int j;
		std::cin >> j;
		a.push_back(j);
	}
	return a;
}
