#include <iostream>
#include <cstdlib>
#include <string>
#include "word.hpp"

using namespace std;

bool check_dup(word *head, string check_word);

/*void update_count(word *head, string check_word){
  //int i = 0;

  while (head != nullptr){
    //cout << i << endl;
    //i++;

    if (*head == check_word){
      head -> count += 1;
      
    }
    head = head -> next;
  }
}*/

bool check_dup(word *head, string check_word){
    while (head != nullptr){
    //cout << i << endl;
    //i++;

    if (*head == check_word){
      head -> count += 1;
      return false;
    }
    head = head -> next;
  }
  return true;
}


int main(){
  string current_word;
  bool check;

  word *node = new word();
  word *head = node;


  //setting up the linked list wiht the head at the start
  while (cin.eof() == false) {

    cin >> current_word;

    if(cin.fail()){
      cout << "An error occurred" << endl;
    return 0;
    }
  
    //update_count(head, current_word);
    check = check_dup(head, current_word);
    if (check ==false){
      
    }
    else{
    node -> assign(current_word);
    word *node_link = new word();
    node -> next = node_link;
    //cout << "The word is \"" << *node << "\". "  << current_word << endl;
    node = node_link;
    }
  }


  //reading out the linked list
  while (*head != ""){
    cout << "\"" << *head << "\" ";
    cout << head->count << endl;
    head = head -> next;
  }

  return 0;
}



