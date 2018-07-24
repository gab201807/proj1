#include <iostring>

class HelloWorld
{
public:
  HelloWorld()
  {
    std::cout << "Hello from my Class!" << std::endl;
  }
  ~HelloWorld()
  {
    std::cout << "Bye bye from my Class!" << std::endl;
  }
}
