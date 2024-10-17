#include <fstream> // for filewrite
#include "Matrix.h"

const int BAR_WIDTH = 40;

void testAdd();
void testSub();
void testAddInPlace();
void testSubInPlace();
void testMul();
void printBar(int n);

ofstream myFile; // for filewrite

int main(void) {
  myFile.open("result.txt");
  
  int testCase;
  void (*testCases[]) ()
  {
    testAdd, // testCases[0]
    testSub, // testCases[1]
    testAddInPlace, // testCases[2]
    testSubInPlace, // testCases[3]
    testMul, // testCases[4]
  }; 

  cin >> testCase; // get a value to select an operation
  testCases[testCase](); // call the corresponding test function
  return 0;
}

void testAdd() {
  printBar(BAR_WIDTH);
  int rowsA, colsA, rowsB, colsB;

  cin >> rowsA;
  cin >> colsA;

  Matrix a(rowsA, colsA); // create an object from the Matrix class
  cin >> a; // use the custom >> operator taking values for the object a (row then column)

  cin >> rowsB;
  cin >> colsB;

  Matrix b(rowsB, colsB); // create an object from the Matrix class
  cin >> b; // use the custom >> operator taking values for the object b (row then column)

  myFile << "Matrix A:\n";
  myFile << a; // use the custom << operator to output element values of the object a
  printBar(BAR_WIDTH);

  myFile << "Matrix B:\n";
  myFile << b; // use the custom << operator to output element values of the object b
  printBar(BAR_WIDTH);

  myFile << "Result A + B:\n";
  myFile << a+b; // use the custom + operator and the custom << operator
  printBar(BAR_WIDTH);
}

void testSub() {
  printBar(BAR_WIDTH);
  int rowsA, colsA, rowsB, colsB;

  cin >> rowsA;
  cin >> colsA;

  Matrix a(rowsA, colsA); // create an object from the Matrix class
  cin >> a; // use the custom >> operator taking values for the object a (row then column)

  cin >> rowsB;
  cin >> colsB;

  Matrix b(rowsB, colsB); // create an object from the Matrix class
  cin >> b; // use the custom >> operator taking values for the object b (row then column)

  myFile << "Matrix A:\n";
  myFile << a; // use the custom << operator to output element values of the object a
  printBar(BAR_WIDTH);

  myFile << "Matrix B:\n";
  myFile << b; // use the custom << operator to output element values of the object b
  printBar(BAR_WIDTH);

  myFile << "Result A - B:\n";
  myFile << a-b; // use the custom - operator and the custom << operator
  printBar(BAR_WIDTH);
}

void testAddInPlace() {
  printBar(BAR_WIDTH);
  int rowsA, colsA, rowsB, colsB;

  cin >> rowsA;
  cin >> colsA;

  Matrix a(rowsA, colsA); // create an object from the Matrix class
  cin >> a; // use the custom >> operator taking values for the object a (row then column)

  cin >> rowsB;
  cin >> colsB;

  Matrix b(rowsB, colsB); // create an object from the Matrix class
  cin >> b; // use the custom >> operator taking values for the object b (row then column)

  myFile << "Matrix A\n";
  myFile << a; // use the custom << operator to output element values of the object a
  printBar(BAR_WIDTH);

  myFile << "Matrix B\n";
  myFile << b; // use the custom << operator to output element values of the object b
  printBar(BAR_WIDTH);

  myFile << "Result A += B:\n";
  a += b; // use the custom += operator
  myFile << "Matrix A:\n";
  myFile << a; // use the custom << operator to output element values of the object a
  printBar(BAR_WIDTH);
}

void testSubInPlace() {
  printBar(BAR_WIDTH);

  int rowsA, colsA, rowsB, colsB;

  cin >> rowsA;
  cin >> colsA;

  Matrix a(rowsA, colsA); // create an object from the Matrix class
  cin >> a; // use the custom >> operator taking values for the object a (row then column)

  cin >> rowsB;
  cin >> colsB;

  Matrix b(rowsB, colsB); // create an object from the Matrix class
  cin >> b; // use the custom >> operator taking values for the object b (row then column)

  myFile << "Matrix A:\n";
  myFile << a; // use the custom << operator to output element values of the object a
  printBar(BAR_WIDTH);

  myFile << "Matrix B:\n";
  myFile << b; // use the custom << operator to output element values of the object b
  printBar(BAR_WIDTH);

  myFile << "Result A -= B:\n";
  a -= b; // use the custom -= operator
  myFile << "Matrix A:\n";
  myFile << a; // use the custom << operator to output element values of the object a
  printBar(BAR_WIDTH);
}

void testMul() {
  int rowsA, colsA, rowsB, colsB;
  printBar(BAR_WIDTH);

  cin >> rowsA;
  cin >> colsA;

  Matrix a(rowsA, colsA);
  cin >> a; // use the custom >> operator taking values for the object a (row then column)

  cin >> rowsB;
  cin >> colsB;

  Matrix b(rowsB, colsB);
  cin >> b; // use the custom >> operator taking values for the object b (row then column)

  myFile << "Matrix A:\n";
  myFile << a; // use the custom << operator to output element values of the object a
  printBar(BAR_WIDTH);

  myFile << "Matrix B:\n";
  myFile << b; // use the custom << operator to output element values of the object b
  printBar(BAR_WIDTH);  

  myFile << "Result C = A * B:\n";
  Matrix c = a * b; // use the custom * operator
  myFile << "Matrix C:\n";
  myFile << c; // use the custom << operator to output element values of the object c
  printBar(BAR_WIDTH);
}

void printBar(int n) {
  myFile << string(n, '-') << endl;
}
