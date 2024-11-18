#include "WeightedQuickUnion.h"
#include <iostream>

WeightedQuickUnion::WeightedQuickUnion(const int size) 
	: id(nullptr), idSize(nullptr), size(0) {
	if (size <= 0) {
		std::cout << "Size must be positive!" << '\n';
		return;
	}

	this->size = size;
	
	id = new int[this->size];
	idSize = new int[this->size];

	for (int i = 0; i < this->size; i++) {
		id[i] = i;
		idSize[i] = 1;
	}
}

WeightedQuickUnion::~WeightedQuickUnion() {
	delete[] id;
	delete[] idSize;
}

int WeightedQuickUnion::findRoot(int i) {
	while (i != id[i]) {
		id[i] = id[id[i]];
		i = id[i];
	}
	return i;
}

bool WeightedQuickUnion::isConnected(const int& p, const int& q) {
	return findRoot(p) == findRoot(q);
}

void WeightedQuickUnion::makeUnion(const int& p, const int& q) {
	int pID = findRoot(p);
	int qID = findRoot(q);

	if (idSize[pID] < idSize[qID]) {
		id[pID] = qID;
		idSize[qID] += idSize[pID];
	} else {
		id[qID] = pID;
		idSize[pID] += idSize[qID];
	}
}