
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static int staticTrue = 1; /* true */

void control_flow_05() {
  if (staticTrue) {
    
  std::forward_list<int> forward_list1(1);
  std::forward_list<int> forward_list2;
  forward_list1.assign(forward_list2.begin(),forward_list2.end());
  forward_list1.front();
 

  }
}
