#pragma once
class QuickUnion {
private:
	int* id;
	int size;

public:
	QuickUnion(const int& n);
	const int findRoot(int i);
	const bool isConnected(const int& p, const int& q);
	void makeUnion(const int& p, const int& q);
};

