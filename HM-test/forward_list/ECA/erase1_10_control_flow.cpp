
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_10() {
  while(1){
    
  std::forward_list<int> forward_list1(1);
  forward_list1.erase_after(forward_list1.begin());
  forward_list1.front();
 

  }
}
