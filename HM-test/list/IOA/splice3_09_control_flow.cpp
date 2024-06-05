
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
      
  std::list<int> list1;
  std::list<int> list2(1);
  list1.splice(list1.begin(),list2,list2.begin(),list2.end());
  auto it = list1.begin();
  it++;//not true
  it++;
 

    }
    break;
    default:
      break;
  }
}
