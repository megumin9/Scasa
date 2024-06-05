
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>


void control_flow_01() {
    
  std::forward_list<int> forward_list1;
  std::forward_list<int> forward_list2(1);
  forward_list1.splice_after(forward_list1.begin(),forward_list2,forward_list2.begin());
  auto it = forward_list1.begin();
  it++;//not true
  it++; 
 

}
