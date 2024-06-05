
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
    
  std::vector<int> list1;
  std::vector<int> list2(list1.begin(),list1.end());
  auto it = list2.begin();
  it++;
 

  }
}
