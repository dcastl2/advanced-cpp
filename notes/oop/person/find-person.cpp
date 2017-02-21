#include <iostream>
#include <fstream>
#include <sstream>
#include <climits>
#include "Person.h"

#define N 20

int main(int argc, char **argv) {

  // Allow the user to enter a target, whose similar person is to be found.
  std::string target;
  int targetindex = -1;
  if (argc==2)
    target = std::string(argv[1]);

  // Create a size-N array of Person objects. Open data file for reading.
  Person students[N];
  std::ifstream infile("people.dat");

  std::string name;
  int j=0, personality[10];

  // Read the data into the Person object array.
  while(infile >> name) {
    for (int i=0; i<10; i++)
      infile >> personality[i];
    students[j].setName(name);
    students[j].setPersonality(personality);
    if (argc==2 && name==target)
       targetindex = j; 
    j++;
  }

  // If there is a target, just apply the algorithm to that target.
  if (targetindex > -1) {
    int mindex=0, distance, mindistance = INT_MAX;
    for (int k=0; k<N; k++) {
      if (targetindex!=k) {
        distance = students[targetindex].distance(students[k]);
        if (distance < mindistance) {
          mindistance = distance;
          mindex      = k;
        }
      }
    }
    students[targetindex].describe();
    students[targetindex].summarize();
    students[targetindex].MBTI();
    std::cout << std::endl;
    students[mindex].describe();
    students[mindex].summarize();
    students[mindex].MBTI();
    std::cout << std::endl;
  }

  // If the target is not found, target will still be -1 and argc will be 2.
  // In that case print error message.
  else if (argc==2)
    std::cerr << "Target not found!" << std::endl;

  // Otherwise apply the algorithm to everyone in the file.
  else for (int i=0; i<N; i++) {
    int mindex=0, distance, mindistance = INT_MAX;
    for (int k=0; k<N; k++) {
      if (i!=k) {
        distance = students[i].distance(students[k]);
        if (distance < mindistance) {
          mindistance = distance;
          mindex      = k;
        }
      }
    }
    students[i].print();
    std::cout << " is " << mindistance << " away from ";
    students[mindex].print();
    std::cout << std::endl;
  }

}
