#include <iostream>
#include "person.h"

int main() {
  std::cout << "Start point" << std::endl;
  Person steve;

  steve.firstname = "kamguia";
  steve.lastname = "steve cabrel";
  steve.email = "myemail@gmail.com";
  steve.age = 25;

  steve.print_my_info();

}

