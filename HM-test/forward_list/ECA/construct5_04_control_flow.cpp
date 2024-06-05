
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
    
  std::vector<int> forward_list1;
  std::vector<int> forward_list2(forward_list1.begin(),forward_list1.end());
  forward_list2.front();
 

  }
}
