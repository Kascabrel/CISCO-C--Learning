//
// Created by kasca on 6/24/2025.
//

#ifndef CISCO_LEARNIG__PERSON_H
#define CISCO_LEARNIG__PERSON_H
#include <iostream>
#include <string>

class Person {
public:
  std::string firstname;
  std::string lastname;
  std::string email;
  int age;

  void print_my_info();
};

#endif //CISCO_LEARNIG__PERSON_H
