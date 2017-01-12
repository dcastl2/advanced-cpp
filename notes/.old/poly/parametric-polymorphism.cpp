#include <iostream> 

class Animal {
  public:
    int cuteness;
    virtual std::string noise() {
      return "?";
    }
};

class Owl : public Animal {
  public:
    std::string noise() {
      return "Hoot!";
    }
};

class Fox : public Animal {
};

int main() {

  Owl JustinChampagne;
  std::cout << JustinChampagne.noise()  << std::endl;

  Fox NihalAgrawal;
  std::cout << NihalAgrawal.noise() << std::endl;

}
