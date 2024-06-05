
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
  deque1.insert(deque1.begin(),deque2.begin(),deque2.end());
  deque1[1];
 

  }
}
