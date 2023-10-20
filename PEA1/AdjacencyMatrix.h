#pragma once
#include <fstream>

using namespace std;

class AdjacencyMatrix
{
	public:
		~AdjacencyMatrix();

		void fillFromFile(fstream*);
		void printAdjacencyMatrix();
		void deleteAdjacencyMatrix();
		void createAdjacencyMatrix();

	private:
		int N;
		int** matrix;


};

