
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_03() {
  if (5==5) {
    
  std::forward_list<int> forward_list1(1);
  std::forward_list<int> forward_list2;
  forward_list1 = forward_list2;
  auto it = forward_list1.begin();
  it++;
 

  }
}
