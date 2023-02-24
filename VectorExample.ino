#include <Vector.h>
// #include <Vector.cpp>

Vector<int> myVec;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myVec.pushBack(20);
  myVec.pushBack(30);
  myVec.pushBack(1024);
  myVec.pushBack(0);
  Serial.print("Index of 0 is: (if it returns -1 does not exist): ");
  Serial.println(myVec.getIndex(0));
  int myInt = Serial.pop() // Pops the last item
  myVec.printVec();
}

void loop() {
  // put your main code here, to run repeatedly:

}
