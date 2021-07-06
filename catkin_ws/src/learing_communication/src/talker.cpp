//添加ROS包
#include "ros/ros.h"
//添加ROS string变量
#include "std_msgs/String.h"

int main(int argc, char **argv)
{

 //ROS结点初始化
 //创建talker结点
 ros::init(argc,argv,"talker");
 
 //创建结点句柄
 ros::NodeHandle n;
 
 //创建一个Publisher,发布名为chatter的话题,消息类型为std_msgs::String
 ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter",1000);
 //设置循环的频率 10HZ
 ros::Rate loop_rate(10);

 int count = 0;
 while(ros::ok())
{
 //初始化std_msgs::String 类型的消息
 std_msgs::String msg;
 std::stringstream ss;
 ss<<"hello world"<<count;
 msg.data = ss.str();

//发布消息
ROS_INFO("%s",msg.data.c_str());
chatter_pub.publish(msg);

//循环等待回调函数
ros::spinOnce();

//注意在循环中一定要有延时函数
//按照循环频率延时
loop_rate.sleep();
++count;
}
return 0;
}

