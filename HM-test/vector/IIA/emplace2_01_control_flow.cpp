
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_01() {
    
  std::vector<int> vector1;
  auto it = vector1.end();
  vector1.emplace_back(1);
  *it;
 

}
