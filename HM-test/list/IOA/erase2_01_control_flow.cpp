
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_01() {
    
  std::list<int> list1(1);
  list1.erase(list1.begin(),list1.end());
  auto it = list1.begin();
  it++;
 

}
