
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
    
  std::vector<int> forward_list1;
  std::vector<int> forward_list2(forward_list1.begin(),forward_list1.end());
  auto it = forward_list2.begin();
  it++;
 

  }
}
