
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
      
  std::list<int> list1(1);
  std::list<int> list2;
  list1.assign(list2.begin(),list2.end());
  auto it = list1.begin();
  it++;
 

    }
    break;
    default:
      break;
  }
}
