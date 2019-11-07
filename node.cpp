#include "ros/ros.h"                                                                                                        
#include <iostream>                                                                                                        
using namespace std;                                                                                                        
#include "std_msgs/Int32.h"                                                                                                
                                                                                                                           
int main(int argc, char **argv)                                                                                            
                                                                                                                           
{                                                                                                                          
  ros::init(argc, argv, "node");                                                                                            
                                                                                                                           
  ros::NodeHandle n;                                                                                                        
  ros::Publisher chatter_pub = n.advertise<std_msgs::Int32>("/topic", 1000);                                                
  ros::Rate loop_rate(1);                                                                                                  
  int a;                                                                                                                    
  while (cin >> a)                                                                                                          
  {std_msgs::Int32 msg;                                                                                                    
  msg.data = a;                                                                                                          
  chatter_pub.publish(msg);                                                                                                  
  loop_rate.sleep();                                                                                                      
  }                                                                                                                       
ros::spinOnce();                                                                                                           
  return 0;                                                                                                                
}  
