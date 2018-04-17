#include "BodyParts.h"

//TODO Make stickman adjustable
std::string buildhead()
{
  std::string head;
  head.append(" *********\n *\t *\n *\t *\n *\t *\n *********\n");
  return head;
}

std::string buildneck()
{
  std::string neck;
  neck.append("     |\n");
  neck+="     |\n";
  neck+="     |\n";
  neck+="     |\n";
  neck+="     |\n";
  return neck;
}

std::string buildbody()
{
  std::string body;
  body.append("   |   |\n");
  body+="   |   |\n";
  body+="   |   |\n";
  body+="   |   |\n";
  body+="   |   |\n";
  return body;
}

 
std::string buildarms()
{
  std::string arms="     *\n";
  arms+="    * *\n";
  arms+="   *   *\n";
  arms+="  *     *\n";
  arms+=" *       *\n";
  arms+="*         *\n";
  return arms;
} 

std::string buildlegs()
{
   std::string legs="     *\n";
   legs+="    * *\n";
   legs+="   *   *\n";
   legs+="  *     *\n";
   legs+=" *       *\n";
   legs+="*         *\n";
   return legs;
}
/*std::string buildlefthand() 
{
  std::string lh="      *\n";
  lh+="*";
  lh+="    *";
  lh+="   *";
  lh+="  *";
  lh+=" *";
  lh+="*";
  return lh;
}          

std::string buildleftleg()
{
   std::string lLeg="     *\n";
   lLeg+="    *\n";
   lLeg+="   *\n";
   lLeg+="  *\n";
   lLeg+=" *\n";
   lLeg+="*\n";
   return lLeg;
}

std::string buildrightleg()
{
  std::string rLeg="*\n";
  rLeg+=" *\n";
  rLeg+="  *\n";
  rLeg+="   *\n";
  rLeg+="    *\n";
  rLeg+="     *\n";
  rLeg+="      *\n";
  return rLeg;
}

string stickmanbuilder()
{
  std::string stickman;
  
}*/




