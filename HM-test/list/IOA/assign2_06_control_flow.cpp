
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
    
  std::list<int> list1(1);
  std::list<int> list2;
  list1.assign(list2.begin(),list2.end());
  auto it = list1.begin();
  it++;
 

  }
}
