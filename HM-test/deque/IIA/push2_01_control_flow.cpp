
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_01() {
    
  std::deque<int> deque1;
  auto it = deque1.end();
  deque1.push_front(1);
  *it;
 

}
