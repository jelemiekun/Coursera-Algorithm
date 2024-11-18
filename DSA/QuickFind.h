#pragma once
#include <iostream>

class QuickFind {
private:
	int* id;
	int size;

public:
	QuickFind(const int& n);

	const bool& isConnected(const int& p, const int& q);

	void makeUnion(const int& p, const int& q);
};

