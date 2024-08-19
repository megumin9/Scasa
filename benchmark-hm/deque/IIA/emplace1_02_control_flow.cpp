
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

void control_flow_02(){
    if (1) {
      
  std::deque<int> deque1;
  auto it = deque1.end();
  deque1.emplace(deque1.begin(),1);
  *it;
 

    }
}
