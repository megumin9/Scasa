
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static const int STATIC_CONST_TRUE = 1; /* true */

void control_flow_04() {
  if (STATIC_CONST_TRUE) {
    
  std::deque<int> deque1(1);
  std::deque<int> deque2;
  deque1.assign(deque2.begin(),deque2.end());
  deque1.front();
 

  }
}
