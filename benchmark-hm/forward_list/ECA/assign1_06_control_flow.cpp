
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static const int STATIC_CONST_FIVE = 5;

void control_flow_06() {
  if (STATIC_CONST_FIVE==5) {
    
  std::forward_list<int> forward_list1(1);
  forward_list1.assign(0,0);
  forward_list1.front();
 

  }
}
