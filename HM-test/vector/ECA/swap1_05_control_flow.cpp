
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
    
  std::vector<int> vector1(1);
  std::vector<int> vector2;
  vector1.swap(vector2);
  vector1.front();
 

  }
}
