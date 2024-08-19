
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
    
  std::forward_list<int> forward_list1;
  std::forward_list<int> forward_list2(forward_list1);
  forward_list2.front();
 

  }
}
