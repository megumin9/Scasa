
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

void control_flow_02(){
    if (1) {
      
  std::list<int> list1(1);
  std::list<int> list2;
  list1.swap(list2);
  auto it = list1.begin();
  it++;
 

    }
}
