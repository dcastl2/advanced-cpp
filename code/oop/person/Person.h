#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {

  private:
    int personality[10];
    std::string name;

  public:
    Person();
    Person(std::string name, int personality[10]);
    void print();
    void describe();
    void summarize();
    void setName(std::string name);
    void setPersonality(int personality[10]);
    void MBTI();
    int *summary();
    int *getPersonality();
    int  distance(Person p);
};

#endif
