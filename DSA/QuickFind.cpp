#include "QuickFind.h"

QuickFind::QuickFind(const int& n) {
	if (n <= 0) {
		std::cout << "Size must be positive." << '\n';
		return;
	}

	size = n;
	id = new int[size];

	for (int i = 0; i < size; i++) {
		id[i] = i;
		std::cout << id[i] << '\n';
	}
}

const bool& QuickFind::isConnected(const int& p, const int& q) {
	return id[p] == id[q];
}

void QuickFind::makeUnion(const int& p, const int& q) {
	int pID = id[p];
	int qID = id[q];

	if (pID == qID) {
		std::cout << "Already connected!" << '\n';
		return;
	} else {
		for (int i = 0; i < size; i++) {
			if (id[i] == pID) id[i] = qID;
		}
	}
}