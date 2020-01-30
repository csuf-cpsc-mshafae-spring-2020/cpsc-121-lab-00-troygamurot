// Troy Gamurot
// CPSC 121-03
// troygamurot@csu.fullerton.edu

#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char*argv[]){
  int numprint = stoi(argv[2]);
  if (argc < 2)
    cout<<"Too few arguments"<<endl;
  else
    for (int i = 0; i < numprint; i++){
      cout<<"Hello "<<argv[1]<<endl;
    }
  return 0;
}
