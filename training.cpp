#include <iostream> //function calls
#include <vector> // vectors
#include <string> // strings
#include <fstream> // file io

using namespace std;

void printInt(int number){
  cout << "number: " << number << endl;
}

void printStr(string str){
  cout << "string: " << str << endl;
}

void printBool(bool boolValue){
  cout << "boolean: " << boolValue << endl;
}

void variables() {
  cout << "Hello World" << endl;
  
  const double PI = 3.145926535;
  
  // 1 byte
  char myGrade = 'A';
  
  bool isHappy = 0;
  
  int myAge = 27;
  
  // 6 decimal point
  float favNum = 3.141592;
  
  // 10 decimal point
  double otherFavNum = 1.6180339887;
  
  //largest integer that can be used
  int largestInt = 2147483647;
  
  //short int : At least 16 bits
  //long int : At least 32 bits
  //long long int : At least 64 bits 
  //unsigned int : Same size as signed
  //long double : Not less than double
  
  cout << "Favorite Number " << favNum << endl;
  
  cout << "Size of int " << sizeof(myAge) << endl; 
  cout << "Size of char " << sizeof(myGrade) << endl; 
  cout << "Size of float " << sizeof(favNum) << endl; 
  cout << "Size of double " << sizeof(otherFavNum) << endl; 
  cout << "Size of boolean " << sizeof(isHappy) << endl; 
  cout << "Size of const double " << sizeof(PI) << endl; 
  cout << "Size of largest int " << largestInt << endl; 
  cout << "Size of largest int + 1" << largestInt + 1 << endl; 
  
}

void calculation() {
  int five = 5;
  cout << "five++ " << five++ << endl;
  cout << "++five " << ++five << endl;
  
  //order of operation / and * first
  cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
  cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl;
  
  //casting
  cout << "4 / 5 = " << 4 / 5 << endl;
  cout << "4 / 5 = " << (double) 4 / 5 << endl;
}

void ifElseStatement(){
  // && , || , !
  // standard fare, can skip
  // switch case
  // same as Java and other programming languages
  
  // ternary condition
  int largestNum = (5>2) ? 5: 2;
  cout << "largestNum = (5>2)?5:2 " << largestNum << endl;
}

void arrays() {
  int hello[3] = {1, 2, 3};
  cout << hello[1] << endl;
}

void loopings(){
  // for loop - same 
  // while loop - when don't know ahead of time when it's going to end
  srand(time(NULL)); // to put seeds
  int randNum = (rand() % 100) + 1;
  cout << randNum << ", ";  
  while (randNum != 100) {
    /* code */
    randNum = (rand() % 100) + 1;
    cout << randNum << ", ";  
  }
  cout << endl;
  // do while loop, want to execute at least once
  string numberGuessed;
  int intNumberGuessed = 0;
  do {
    cout << "Guess between 1 and 10: ";
    getline(cin, numberGuessed);
    intNumberGuessed = stoi(numberGuessed);
    cout << intNumberGuessed << endl;
  } while (intNumberGuessed != 4);
  cout << "YOU WIN " << endl;
}

void cppString() {
  //c way 
  char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
  
  string birthdayString = " Birthday";
  
  cout << happyArray + birthdayString << endl;
  
  double eulersConstant = .57721;
  string eulerGuess;
  double eulerGuessDouble;
  
  cout << "What is Euler's Contstant? ";
  getline(cin, eulerGuess);
  
  eulerGuessDouble = stod(eulerGuess);
  
  if(eulerGuessDouble == eulersConstant) {
    cout << "You are right" << endl;
  } else {
    cout << "You are wrong" << endl;
  }
  
  // string functions
  // size
  printInt(eulerGuess.size());
  printBool(eulerGuess.empty());
  //compare strings
  string dogString = "dog";
  string catString = "cat";
  
  printInt(dogString.compare(catString));
  printInt(dogString.compare(dogString));
  printInt(catString.compare(dogString));
  
  // assign -> copy
  // find -> get index
  // insert(index, strToReplace) -> insert string
  // erase(numOfChars, startingAtIndex) -> delete text
  // replace(numOfChars, startingAtIndex)
}

void vectors(){
  //vectors == ArrayList where array can't change their size. vectors can.
  vector <int> lotteryNumVect(10);
  //put array in vector
  int lotteryNumArray[5]  {4, 42, 22, 33, 55};
  lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
  
  lotteryNumVect.push_back(999);
  cout << lotteryNumVect.back() << endl;
  // insert
  // push_back = insert at last index
  // back = get last index
  // empty = see if vectors are empty
  // pop_back = remove the last value;
}

int summation(int num1, int num2 = 1){
  return num1 + num2;
}

int fileHandle(){
  string jtQuote = "Yay what is this!";
  ofstream writer("jtquote.txt");
  if (!writer) {
    cout << "Error opening file" << endl;
    return -1;
  } else {
    writer << jtQuote << endl;
    writer.close();
  }
  
  ofstream writer2("jtquote.txt", ios::app);
  //ios::app : apend to what's there
  //ios::binary : Treat file as binary
  //ios::in Open a file to read input
  //ios::trunc : default
  //ios::out : Open a file to write output

  if (!writer2) {
    cout << "Error opening file" << endl;
    return -1;
  } else {
    writer2 << "\n - JT is cool"<< endl;
    writer2.close();
  }
  
  char letter;
  ifstream reader("jtquote.txt");
  if(!reader){
    cout << "Error opening file" << endl;
    return -1;
  } else {
    for (int i = 0; ! reader.eof(); i++){
      reader.get(letter);
      cout << letter;
    }
    cout << endl;
    reader.close();
  }
  return 0;
}



int main(int argc, char const *argv[]) {
  //variables();
  //calculation();
  // ifElseStatement();
  //arrays();
  // loopings();
  // cppString();
  // functions -- can have default value
  // vectors();
  // int number = summation(1, 44);
  // cout << number << endl;
  fileHandle();
  
  return 0;
}
