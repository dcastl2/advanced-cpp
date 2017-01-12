#include "Cat.h"
#include <iostream>

std::string Cat::getName() {
 return name;
}

void Cat::setName(std::string name) {
 this->name = name;
}

float Cat::getWeight() {
 return weight;
}

float Cat::gainPounds(float pounds) {
 this->weight += pounds;
}

void Cat::describe() {
  std::cout << "(" << name << ", " << weight << ")" << std::endl;
}

Cat::Cat(std::string name, float weight) {
 this->name   = name;
 this->weight = weight;
}

