
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_03() {
  if (5==5) {
    
  std::list<int> list1;
  std::list<int> list2(1);
  list1.splice(list1.begin(),list2,list2.begin());
  auto it = list1.begin();
  it++;//not true
  it++;
 

  }
}
