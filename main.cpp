#include <iostream>
#include <cstdlib>
#include <string>
#include "word.hpp"

using namespace std;

void check_replicate(word *head, string check_word);

int main() {
  string current_word;
  //bool check;

  word *node = new word();
  word *head = node;


  //setting up the linked list wiht the head at the start
  while (cin.eof() == false) {
    
    cin >> current_word;

    if(cin.fail()){
      cout << "An error occurred" << endl;
    return 0;
    }
  
    check_replicate(head, current_word);
    /*if (check ==false){
      //cout << "yes " << current_word << " " << *node << endl;
      node->count += 1;
    }
    else{*/
    node -> assign(current_word);
    word *node_link = new word();
    node -> next = node_link;
    //cout << "The word is \"" << *node << "\". "  << current_word << endl;
    node = node_link;
    
  }


  //reading out the linked list
  while (*head != ""){
    cout << "\"" << *head << "\" ";
    cout << head->count << endl;
    head = head -> next;
  }

return 0;
}

void check_replicate(word *head, string check_word){
  //int i = 0;

  while (head != nullptr){
    //cout << i << endl;
    //i++;

    if (*head == check_word){
      head -> count += 1;
      
    }
    head = head -> next;
  }
}