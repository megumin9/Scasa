
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static const int STATIC_CONST_TRUE = 1; /* true */

void control_flow_04() {
  if (STATIC_CONST_TRUE) {
    
  std::list<int> list1;
  std::list<int> list2(1);
  list1.splice(list1.begin(),list2);
  auto it = list1.begin();
  it++;//not true
  it++;
 

  }
}
