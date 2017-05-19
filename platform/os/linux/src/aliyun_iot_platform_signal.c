#include <signal.h>
#include <unistd.h>
#include "aliyun_iot_platform_signal.h"

/***********************************************************
* 函数名称: aliyun_iot_send_SIGPIPE_signal
* 描       述: 发送网络PIPE信号
* 输入参数:
* 输出参数:
* 返 回  值: 同linux系统调用signal的返回值
* 说       明: linux系统下signal接口实现发送SIGPIPE信号
*           mbedtls中使用
************************************************************/
INT32 aliyun_iot_send_SIGPIPE_signal(void)
{
    signal(SIGPIPE,SIG_IGN);
    return 0;
}

