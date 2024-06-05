
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

static int staticReturnsTrue()
{
    return 1;
}

void control_flow_08() {
  if (staticReturnsTrue()) {
    
  std::forward_list<int> forward_list1;
  std::forward_list<int> forward_list2(1);
  forward_list1.splice_after(forward_list1.begin(),forward_list2);
  auto it = forward_list1.begin();
  it++;//not true
  it++; 
 

  }
}
