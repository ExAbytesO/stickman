#include "BodyParts.h"


int main()
{
  /*std::string head=buildhead();
  std::cout<<head;
  std::cout<<buildhead();
  buildbody();
  buildrighthand();
  buildlefthand();
  buildrightleg();
  buildleftleg();*/

  std::cout<<std::setfill(' ')<<std::setw(30)<<buildhead();
  std::cout<<std::setfill(' ')<<std::setw(30)<<buildneck();
  std::cout<<std::setfill(' ')<<std::setw(30)<<buildarms();
  std::cout<<std::setfill(' ')<<std::setw(30)<<buildbody();
  std::cout<<std::setfill(' ')<<std::setw(30)<<buildlegs();
  return 0;
}



