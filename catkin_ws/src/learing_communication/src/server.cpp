#include "ros/ros.h"
//添加服务端文件 头文件
#include "learing_communication/AddTwoInts.h"

bool add(learing_communication::AddTwoInts::Request &req, learing_communication::AddTwoInts::Response &res)
{
   //获取客户端的请求参数并相加
   res.sum=req.a+req.b;
   ROS_INFO("request:x=%d,y=%d",(long int)req.a,(long int)req.b);
   ROS_INFO("sum:%d",(long int)res.sum);
}

int main(int argc,char **argv)
{
  //初始化ros结点
  ros::init(argc,argv,"add_two_ints_server");
  
  //创建结点字柄
  ros::NodeHandle n;
  
  //创建一个名为add_two_ints的server,注册回调函数add()
  
  ros::ServiceServer service = n.advertiseService("add_two_ints",add);
  
  //打印日志信息
  ROS_INFO("Read_two_ints:");
  //循环等待回调函数
  ros::spin();
  return 0;
  
}


