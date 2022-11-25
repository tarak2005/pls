
#include <iostream>
#include <algorithm>
#include <string>

void Date (std::string & ans);

 
int
main () 
{
  
std::string answer;
  
  do
    {
      
Date (answer);
    
}
  while (answer != "yes");
  
std::cout << "EHE good boi, it starts at 12 30 :} ";	// final message
  return 0;

}


 
void
Date (std::string & ans) 
{
  
std::cout << "Will you watch England vs USA with me :D ? ";
  
std::cin >> ans;
  
std::transform (ans.begin (), ans.end (), ans.begin (),::tolower);
  
if (ans != "yes")
    
std::cout << "****** WORNG ANWSER TRY AGAIN BITH :) " << std::endl;

}


