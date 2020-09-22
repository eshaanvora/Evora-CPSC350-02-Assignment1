//Eshaan Vora
//CPSC350-02
//Late Assignment1

#include "a1.h"
using namespace std;

int main(int argc, char** argv){


  if(argc != 2){
    cout <<"Invalid Usage. Please enter only your file path as argument" << endl;
    exit(1);
  }

  srand (time(NULL));

  float mean = 0;
  float variance = 0;
  float stDev = 0;
  string line = "";
  //string line2 = "";
  float totalLength = 0;
  int lineLength = 0;
  int lineCount = 0;
  float relFreqA = 0;
  float relFreqC = 0;
  float relFreqT = 0;
  float relFreqG = 0;
  string path = "";
  int DoloopCounter = 0;
  bool doBool;

  Assignment1 *newObj = new Assignment1();

  do{

  if(DoloopCounter == 0){
    path = argv[1];
  }
  DoloopCounter += 1;

  fstream fileRead(path);
  ofstream fileWrite("Eshaan.txt");
  fileWrite << "Eshaan Vora | ID: 2318955" << endl;


  //Make sure the file read object is open to check if the file Readwas initialized with correct file/path
  if(fileRead.is_open()){

    while(fileRead >> line){
      lineCount += 1;
      //If the DnaString length is not even, we add the first nucleotide to the end to make the string even
      if(line.size() % 2 != 0){
        line = line + line[0];
      }

      lineLength = line.size();
      totalLength += lineLength;
    }

    //Change pointer back to beginning of filestream
    fileRead.clear();
    fileRead.seekg(0, fileRead.beg);

    while(fileRead >> line){
      //If the DnaString length is not even, we add the first nucleotide to the end to make the string even
      if(line.size() % 2 != 0){
        line = line + line[0];
      }
      lineLength = line.size();

      stDev += pow(lineLength - (totalLength/lineCount), 2);
    }


    //Calculate values
    stDev = sqrt(stDev/(lineCount-1));
    mean = totalLength / lineCount;
    variance = pow(stDev,2);



    fileWrite << "Sum (After adding nucleotides to uneven DnaStrings): " << totalLength << endl;
    fileWrite << "Mean: " << mean << endl;
    fileWrite << "Standard Deviation: " << stDev << endl;
    fileWrite << "Variance: " << variance << "\n" <<endl;


    int countA = 0;
    countA = newObj->totalCountNucleotide(argv[1],"A");
    relFreqA = countA / totalLength;

    int countC = 0;
    countC = newObj->totalCountNucleotide(argv[1],"C");
    relFreqC = countC / totalLength;

    int countT = 0;
    countT = newObj->totalCountNucleotide(argv[1],"T");
    relFreqT = countT / totalLength;

    int countG = 0;
    countG = newObj->totalCountNucleotide(argv[1],"G");
    relFreqG = countG / totalLength;

    fileWrite << "Relative Frequency A: " << relFreqA << "\n" << "Relative Frequency C: " << relFreqC << "\n" << "Relative Frequency T: " << relFreqT << "\n" << "Relative Frequency G: " << relFreqG << endl;

    //Output relative frequencies of bigrams via filestream
    int countAA = 0;
    countAA = newObj->totalCountNucleotideBigram(argv[1],"AA");
    fileWrite << "\n" << "Relative Frequency AA: " << countAA / (totalLength/2) << endl;

    int countAC = 0;
    countAC = newObj->totalCountNucleotideBigram(argv[1],"AC");
    fileWrite << "Relative Frequency AC: " << countAC / (totalLength/2) << endl;

    int countAT = 0;
    countAT = newObj->totalCountNucleotideBigram(argv[1],"AT");
    fileWrite << "Relative Frequency AT: " << countAT / (totalLength/2) << endl;

    int countAG = 0;
    countAG = newObj->totalCountNucleotideBigram(argv[1],"AG");
    fileWrite << "Relative Frequency AG: " << countAG / (totalLength/2) << endl;

    int countCA = 0;
    countCA = newObj->totalCountNucleotideBigram(argv[1],"CA");
    fileWrite << "Relative Frequency CA: " << countCA / (totalLength/2) << endl;

    int countCC = 0;
    countCC = newObj->totalCountNucleotideBigram(argv[1],"CC");
    fileWrite << "Relative Frequency CC: " << countCC / (totalLength/2) << endl;

    int countCT = 0;
    countCT = newObj->totalCountNucleotideBigram(argv[1],"CT");
    fileWrite << "Relative Frequency CT: " << countCT / (totalLength/2) << endl;

    int countCG = 0;
    countCG = newObj->totalCountNucleotideBigram(argv[1],"CG");
    fileWrite << "Relative Frequency CG: " << countCG / (totalLength/2) << endl;

    int countTA = 0;
    countTA = newObj->totalCountNucleotideBigram(argv[1],"TA");
    fileWrite << "Relative Frequency TA: " << countTA / (totalLength/2) << endl;

    int countTC = 0;
    countTC = newObj->totalCountNucleotideBigram(argv[1],"TC");
    fileWrite << "Relative Frequency TC: " << countTC / (totalLength/2) << endl;

    int countTT = 0;
    countTT = newObj->totalCountNucleotideBigram(argv[1],"TT");
    fileWrite << "Relative Frequency TT: " << countTT / (totalLength/2) << endl;

    int countTG = 0;
    countTG = newObj->totalCountNucleotideBigram(argv[1],"TG");
    fileWrite << "Relative Frequency TG: " << countTG / (totalLength/2) << endl;

    int countGA = 0;
    countGA = newObj->totalCountNucleotideBigram(argv[1],"GA");
    fileWrite << "Relative Frequency GA: " << countGA / (totalLength/2) << endl;

    int countGC = 0;
    countGC = newObj->totalCountNucleotideBigram(argv[1],"GC");
    fileWrite << "Relative Frequency GC: " << countGC / (totalLength/2) << endl;

    int countGT = 0;
    countGT = newObj->totalCountNucleotideBigram(argv[1],"GT");
    fileWrite << "Relative Frequency GT: " << countGT / (totalLength/2) << endl;

    int countGG = 0;
    countGG = newObj->totalCountNucleotideBigram(argv[1],"GG");
    fileWrite << "Relative Frequency GG: " << countGG / (totalLength/2) << "\n" << endl;

    float d;
    float randomNum = 0;

    for(int i = 0; i < 1000; i++){
      string outputString = "";

      float r1;
      r1 = (float)rand() / RAND_MAX;
      float r2;
      r2 = (float)rand() / RAND_MAX;
      float c;
      c = sqrt(-2 * log(r1)) * cos(r2);
      d = (stDev * c) + mean;
      d = round(d);

      for(int t = 0; t < d; t++){
        float randomNum;
        randomNum = (float)rand() / RAND_MAX;

        if(randomNum < relFreqA){
          outputString += "A";
          //cout << randomNum << "is less than" << relFreqA << endl;
        }
        if(relFreqA < randomNum && randomNum < (relFreqA + relFreqC)){
          outputString += "C";
          //cout << randomNum << "is between:" << relFreqA << "and "<<(relFreqA + relFreqC) << endl;
        }
        if((relFreqA + relFreqC) < randomNum && randomNum < (relFreqA + relFreqC + relFreqG)){
          outputString += "G";
          //cout << randomNum << "is between:" << (relFreqA + relFreqC) << "and "<< (relFreqA + relFreqC + relFreqG) << endl;
        }
        if((relFreqA + relFreqC + relFreqG) < randomNum && randomNum < 1){
          outputString += "T";
          //cout << randomNum << "is between:" << (relFreqA + relFreqC + relFreqG) << "and "<< (relFreqA + relFreqC + relFreqG + relFreqT) << endl;
        }
      }
      fileWrite << outputString << endl;
    }
  }else{
    cout << "Error. File not found!" << endl;
    return 0;

  }
    string input;
    cout << "Do you want to enter another file? (Y/N)" << endl;
    cin >> input;
    if(input != "Y"){
      doBool = false;
    }else{
      cout << "Enter file name: " << endl;
      cin >> input;
      path = input;
      doBool = true;
    }
  } while(doBool);
  delete newObj;
  return 0;
}
