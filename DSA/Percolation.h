#pragma once
class Percolation {
	struct site {
		int xID;
		int yID;
		unsigned int isOpen : 1;
		unsigned int isFull : 1;
	};

public:
	Percolation();
	~Percolation();

	void init();
	void open();
	void findRoot(const int& i);
	void makeUnion(const int& p, const int& q);
	void openRandomSite();

};

