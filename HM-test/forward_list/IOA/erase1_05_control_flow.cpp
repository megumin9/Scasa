
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
    
  std::forward_list<int> forward_list1(1);
  forward_list1.erase_after(forward_list1.begin());
  auto it = forward_list1.begin();
  it++;
 

  }
}
