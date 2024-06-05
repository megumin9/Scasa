
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
    
  std::vector<int> vector1;
  std::vector<int> vector2(1);
  auto it = vector1.begin();
  vector1.assign(vector2.begin(),vector2.end());
  *it;
 

  }
}
