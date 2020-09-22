#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <time.h>

using namespace std;

class Assignment1{

public:
  Assignment1(); //Default constructor

  int countNucleotide(string dnaString, string nucleotide);
  int countNucleotideBigram(string dnaString, string nucleotide);
  int totalCountNucleotide(string path, string nucleotide);
  int totalCountNucleotideBigram(string path, string nucleotide);

};
