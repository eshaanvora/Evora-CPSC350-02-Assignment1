Eshaan Vora
CPSC350-02
09/22/20
Assignment 1
Files Included: a1.h, a1.cpp, Main.cpp, Makefile

COMMENTS:
If a DnaString has an odd number of nucleotides, the first nucleotide in the string is added to the end to make it even. The reasoning behind this is that if the DnaString has an even number of nucleotides, we will be able to generate Nucleotide Bigrams where ACTG would be the bigrams AC and TG. Moreover, a DnaString that says ACT would be broken into bigrams AC and TA as per the aforementioned rules. 

In addition, when counting line lengths, I included the nucleotides I appended to the end of the DnaString with odd number of nucleotides. I did this so that when computing relative frequencies of the bigrams I am using a denominator that includes the added nucleotides needed to make counting the bigrams possible. This explains why the total length (sum) of DnaStrings that is on the .txt file may be slightly different. (I used the length after adding the missing nucleotides in all my calculations)

REFERENCES:
Stackoverflow: Used for overcoming common errors / understanding why code does not work via other posters with similar concerns (https://stackoverflow.com/questions/11248672/cant-read-file-more-than-once-in-c)

Cplusplus.com or Javatpoint.com W3schools.com: Review functions (what they are used for, arguments, what is returned) in their libraries. (I refreshed on string functions/operations, user input, and loops)

programiz.com: Review math library and other important libraries & their components

Google or Informit: Error search or help with small subtasks of code such as reading a file (file io)
