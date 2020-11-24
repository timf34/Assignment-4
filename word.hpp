#pragma once
#include <string>

class word : public std::string {
  public:
  //attributes
  word *next; // use this to link to the next object in the linked list
  int count=1;


  //methods
  //word(word *next_word); //convenience constructor to try once this works
  //~word();
  void set_count();
};

