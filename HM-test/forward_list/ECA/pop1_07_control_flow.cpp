
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static int staticFive = 5;

void control_flow_07() {
  if (staticFive==5) {
    
  std::forward_list<int> forward_list1(1);
  forward_list1.pop_front();
  forward_list1.front();
 

  }
}
