
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_09() {
  switch(6){
    case 6:{
      
  std::vector<int> forward_list1;
  std::vector<int> forward_list2(forward_list1.begin(),forward_list1.end());
  auto it = forward_list2.begin();
  it++;
 

    }
    break;
    default:
      break;
  }
}
