
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_01() {
    
  std::list<int> list1;
  list1.push_front(1);
  auto it = list1.begin();
  it++;//not true
  it++;
 

}
