#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {

  public:
    float x, y, r;

    Circle() {}; // Default constructor 
    Circle(int x, int y, int r);
    Circle(const Circle& c);
    float area();
    float circumference();
    void  describe();

};

#endif
