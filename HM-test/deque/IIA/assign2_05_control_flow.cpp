
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
    
  std::deque<int> deque1;
  std::deque<int> deque2(1);
  auto it = deque1.begin();
  deque1.assign(deque2.begin(),deque2.end());
  *it;
 

  }
}
