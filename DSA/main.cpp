#include <iostream>
#include "QuickFind.h"

void quickFind() {
	QuickFind quickF(10);
	quickF.makeUnion(0, 9);
	quickF.makeUnion(0, 3);
	quickF.makeUnion(4, 8);
	quickF.makeUnion(1, 8);
	quickF.makeUnion(0, 4);

	std::cout << "Connected: " << quickF.isConnected(9, 1);
}

int main(int argc, char* argv[]) {
	quickFind();

	return EXIT_SUCCESS;
}