
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
  auto it = deque1.end();
  deque1.push_front(1);
  *it;
 

  }
}
