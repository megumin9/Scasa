
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
    
  std::vector<int> list1;
  std::vector<int> list2(list1.begin(),list1.end());
  auto it = list2.begin();
  it++;
 

  }
}
