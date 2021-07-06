#include "ros/ros.h"
#include "std_msgs/String.h"

//接收消息的回调函数
void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
ROS_INFO("I heard :{%s}",msg->data.c_str());
}

int main(int argc,char **argv)
{
  //初始化ROS结点
  ros::init(argc,argv,"listrner");

  //创建结点句柄
  ros::NodeHandle n;
  //创建一个接受者,订阅名为chatter的话题,注册回调函数chatterCallback 1000代表消息队列的大小
  ros::Subscriber sub = n.subscribe("chatter",1000,chatterCallback);

  //循环等待回调函数
  ros::spin();
return 0;
}
