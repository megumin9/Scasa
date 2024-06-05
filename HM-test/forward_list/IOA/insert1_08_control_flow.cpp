
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
  forward_list1.insert_after(forward_list1.begin(),1);
  auto it = forward_list1.begin();
  it++; //not true
  it++; 
 

  }
}
