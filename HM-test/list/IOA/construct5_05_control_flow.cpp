
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static int staticTrue = 1; /* true */

void control_flow_05() {
  if (staticTrue) {
    
  std::vector<int> list1;
  std::vector<int> list2(list1.begin(),list1.end());
  auto it = list2.begin();
  it++;
 

  }
}
