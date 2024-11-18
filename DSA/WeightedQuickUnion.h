#pragma once
class WeightedQuickUnion {
private:
	int* id;
	int* idSize;
	int size;

public:
	WeightedQuickUnion(const int size);
	~WeightedQuickUnion();

	int findRoot(int i);
	bool isConnected(const int& p, const int& q);
	void makeUnion(const int& p, const int& q);
};

