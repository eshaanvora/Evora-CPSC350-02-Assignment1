#include "a1.h"

using namespace std;

//Defauult constructor


Assignment1::Assignment1(){}

int Assignment1::countNucleotide(string dnaString, string nucleotide){
  int count = 0;
  string test = "";
  for(int i = 0; i < dnaString.size(); ++i){
    test = toupper(dnaString[i]);
    if(test != "A" && test != "C" && test != "T" && test != "G"){
      cout << "Error. Please check input file for illegal nucleotides! (Only A,C,T,G are legal)" << endl;
      exit(0);
    }
    if(toupper(dnaString[i]) == nucleotide[0])
      count++;
  }
  return count;
}

int Assignment1::totalCountNucleotide(string path, string nucleotide){
  int totalCount = 0;
  string line;
  int count = 0;
  fstream fileRead(path);

  while(getline(fileRead,line)){
    //All nucleotides should be capitalized for evaluation
    for(int i = 0; i < line.size(); ++i ){
      line[i] = toupper(line[i]);
    }
    //If the DnaString length is not even, we add the first nucleotide to the end to make the string even
    if(line.size() % 2 != 0)
      line = line + line[0];

    count = countNucleotide(line,nucleotide);
    totalCount = totalCount + count;
  }
  return totalCount;
}


int Assignment1::countNucleotideBigram(string dnaString, string nucleotide){
  int count = 0;
  string dnaSubString;

  for(int i = 0; i < dnaString.size(); i+=2){
    dnaSubString = "";

    dnaSubString += (dnaString.at(i));
    dnaSubString += (dnaString.at(i+1));

    if(dnaSubString == nucleotide)
      count++;
    }
  return count;
}

int Assignment1::totalCountNucleotideBigram(string path, string nucleotide){
  int totalCount = 0;
  string line;
  int count = 0;
  fstream fileRead(path);

  while(getline(fileRead,line)){
    //All nucleotides should be capitalized for evaluation
    for(int i = 0; i < line.size(); ++i){
      line[i] = toupper(line[i]);
    }
    //If the DnaString length is not even, we add the first nucleotide to the end to make the string even
    if(line.size() % 2 != 0){
      line = line + line[0];
    }

    count = countNucleotideBigram(line,nucleotide);
    totalCount = totalCount + count;
  }
  return totalCount;
}
