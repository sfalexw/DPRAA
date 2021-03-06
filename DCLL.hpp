// project/DCLL.hpp
// Doubly Circular Linked List
// ----------------------------------------------
// Authors:  Jasjeet Dhaliwal, Sui Fung Alex Wong
// Date:     11/23/2015

#ifndef DCLL_HPP
#define DCLL_HPP

// include libraries

#include <iostream>

#include "DCLLNode.hpp"
#include "Process.hpp"

class DCLL {
   private:
      // variables
      DCLLNode *_head, *_tail;
      int _size;

   public:
      // constructor
      DCLL() {
         _size = 0;
         _head = NULL;
         _tail = NULL;
      }

      // destructor
      ~DCLL() {
         _size = 0;
         _head = NULL;
         _tail = NULL;
      }

      // function declarations
      void insertNode(Process * data);
      void removeNode(DCLLNode * node);
      DCLLNode * getHead();
      DCLLNode * getTail();
      int getSize();
      bool isEmpty();
      int getTotalTime();
};

#endif // DCLL_HPP
