#include "Star.h"    
#include <string>
#include <iostream>

std::string Star::getName() {
  return name;
}
    
float Star::getRadius() {
  return radius;
}

float Star::getTemperature() {
  return temperature;
}

float Star::getDensity() {
  return density;
}

void Star::setName(std::string name) {
  this->name = name;
}

float Star::setRadius(float radius) {
  this->radius = radius;
}

float Star::setTemperature(float temperature) {
  this->temperature = temperature;
}

float Star::setDensity(float density) {
  this->density = density;
}

void Star::describe() {
  std::cout 
            << "("  << name
            << ", " << radius
            << ", " << temperature
            << ", " << density
            << ")"  << std::endl;
}

Star::Star(std::string name, float radius, float temperature, float density) {
  this->name = name;
  this->radius = radius;
  this->temperature = temperature;
  this->density = density;
}

Star::Star() {
  this->name        = "Brad Pitt";
  this->radius      = 1;
  this->temperature = 5077;
  this->density     = 1410;
}
