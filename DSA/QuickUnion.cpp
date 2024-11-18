#include "QuickUnion.h"
#include <iostream>

QuickUnion::QuickUnion(const int& n) : id(nullptr), size(0) {
	if (n <= 0) {
		std::cout << "Size must be positive!" << '\n';
		return;
	}

	size = n;
	id = new int[size];

	for (int i = 0; i < size; i++) {
		id[i] = i;
	}
}

const int QuickUnion::findRoot(int i) {
	while (i != id[i]) {
		i = id[i];
	}
	return i;
}

const bool QuickUnion::isConnected(const int& p, const int& q) {
	return findRoot(p) == findRoot(q);
}

void QuickUnion::makeUnion(const int& p, const int& q) {
	int i = findRoot(p);
	int j = findRoot(q);
	id[i] = j;
}