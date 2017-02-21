#ifndef STAR_H
#define STAR_H

#include <string>

class Star {

  private:
    float radius;
    float temperature;
    float density;
    std::string name;

  public:

    float getRadius();
    float getTemperature();
    float getDensity();
    std::string getName();

    float setRadius(float);
    float setTemperature(float);
    float setDensity(float);
    void setName(std::string);

    void describe();

    Star(std::string name, float radius, float temperature, float density);
    Star();

};

#endif
