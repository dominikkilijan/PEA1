#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class FileHandler
{
	public:
		void openFile(string); // otwieranie pliku i zapisywanie zawartosci do macierzy
		void generate(int); // generowanie wartosci do pliku
		void print(string); // wyswietla zawartosc pliku

	private:
		fstream file;
};

