#ifndef CAT_H
#define CAT_H

#include <string>

 class Cat {

   private:
    std::string name;
    float weight;

   public:
    std::string getName();
    void setName(std::string name);
    void describe();
    float getWeight();
    float gainPounds(float pounds);
    Cat(std::string, float);

 };

#endif
