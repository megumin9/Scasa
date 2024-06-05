
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_01() {
    
  std::forward_list<int> forward_list1(1);
  forward_list1.assign(0,0);
  auto it = forward_list1.begin();
  it++;
 

}
