#include "Person.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>

// Qualities as adjectives
std::string qualities[10] = { "reserved",      "trusting",
                              "lazy",          "relaxed",
                              "unartistic",    "sociable", 
                              "fault-finding", "conscientious", 
                              "anxiety-prone", "imaginative" };

// Modifiers according to score
std::string modifiers[5] = { "not at all ", "not ", "", "", "very " };
std::string big5[5]      = {"open to experience",
                            "conscientious",
                            "extraverted",
                            "agreeable",
                            "neurotic"};


// Default constructor
Person::Person() {
}

// Construct a person
Person::Person(std::string name, int personality[10]) {
  for (int i=0; i<10; i++)
    this->personality[i] = personality[i];
  this->name = name;
}

// Set name
void Person::setName(std::string name) {
  this->name = name;
}

// Copy personality
void Person::setPersonality(int personality[10]) {
  for (int i=0; i<10; i++)
    this->personality[i] = personality[i];
}

// Print information
void Person::print() {
  std::cout << name << "(";
  for (int i=0; i<10; i++)
    if (i<9) std::cout << this->personality[i] << ",";
    else     std::cout << this->personality[i];
  std::cout << ")";
}


// English-language description
void Person::describe() {
  std::cout << name << " is ";
  for (int i=0; i<10; i++)
    if (personality[i] != 3)
      std::cout << std::endl 
                << "  * " 
                << modifiers[personality[i]-1] << qualities[i];
      std::cout << std::endl;
}

// Summarization
int *Person::summary() {
  int *sum = (int *) malloc(5*sizeof(int));
  sum[0] = (personality[9]+(6-personality[4]));
  sum[1] = (personality[7]+(6-personality[2]));
  sum[2] = (personality[5]+(6-personality[0]));
  sum[3] = (personality[1]+(6-personality[6]));
  sum[4] = (personality[8]+(6-personality[3]));
  return sum;
}

// English-language summary
void Person::summarize() {
  int *sum = summary();
  for (int i=0; i<5; i++)
    sum[i] = sum[i]/2 - 1;
  std::cout << "In big5, " << name << " is ";
  for (int i=0; i<5; i++)
    if (sum[i] != 3)
      std::cout << std::endl 
                << "  * " << modifiers[sum[i]] << big5[i];
  std::cout << std::endl;
  free(sum);
}

// Guess of the MBTI
void Person::MBTI() {
  int *sum = summary();
  std::string mbti;
       if (sum[3] > 6) mbti+="E";
  else if (sum[3] < 6) mbti+="I";
  else                 mbti+="X";
       if (sum[0] > 6) mbti+="N";
  else if (sum[0] < 6) mbti+="S";
  else                 mbti+="X";
       if (sum[4] > 6) mbti+="F";
  else if (sum[4] < 6) mbti+="T";
  else                 mbti+="X";
       if (sum[1] > 6) mbti+="J";
  else if (sum[1] < 6) mbti+="P";
  else                 mbti+="X";
  free(sum);
  std::cout << name << " is probably an " << mbti << "." << std::endl;
}

// Return personality array
int *Person::getPersonality() {
  return this->personality;
}

// Return Manhattan distance
int Person::distance(Person p) {
  int d = 0;
  int *other = p.getPersonality();
  for (int i=0; i<10; i++)
    d += std::abs(personality[i] - other[i]);
  return d;
}
