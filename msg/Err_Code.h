/*
 * Error_Code.h
 *
 *  Created on: 2015年12月23日
 *      Author: zhangyalei
 */

#ifndef _ERRCODE_H_
#define _ERRCODE_H_

enum Error_Code {
	ERROR_SERVER_INNER 							= 10000,				//服务器内部错误
	ERROR_CLIENT_SESSION 						= 10001,				//session错误
	ERROR_CONNECT_TIMEOUT 					= 10002,				//连接超时
	ERROR_VERIFY_MSG_SERIAL 				= 10003,				//包序列号错误
	ERROR_VERIFY_MSG_TIME 					= 10004,				//包时间错误
	ERROR_DISCONNECT_RELOGIN				= 10005,				//账号在其它地方登陆
	ERROR_DISCONNECT_RECOVERING 			= 10006,				//角色回收中,刷新再试
	ERROR_DISCONNECT_ACCOUNT 				= 10007,				//账号已被封禁
	ERROR_DISCONNECT_SELF 					= 10008,				//服务重启中,稍候再试
	ERROR_CLIENT_OPERATE 						= 10009,				//非法操作
	ERROR_CLIENT_PARAM 							= 10010,				//消息参数非法
	ERROR_CONFIG_NOT_EXIST 					= 10011,				//配置文件错误
	ERROR_REGISTER_VERIFY_FAIL				= 10012,				//注册验证失败
	ERROR_LOGIN_VERIFY_FAIL					= 10013,				//登录验证失败

	ERROR_LEVEL_NOT_ENOUGH 					= 10100,				//角色等级不足
	ERROR_ROLE_NOT_EXIST 						= 10101,				//角色不存在
	ERROR_ROLE_NAME_EXIST 					= 10102,				//角色名已存在
	ERROR_ROLE_OFFLINE 							= 10103,				//玩家已离线
	ERROR_VITALITY_TIMES_NOT_ENOUGH	=	10104,				//购买体力次数不足

	ERROR_BAG_FULL									= 10200,				//背包已满
	ERROR_ITEM_NOT_EXIST						= 10201,				//物品不存在
	ERROR_ITEM_NOT_ENOUGH						= 10202,				//物品不足
	ERROR_COPPER_NOT_ENOUGH					= 10203,				//铜钱不足
	ERROR_GOLD_NOT_ENOUGH						= 10204,				//元宝不足
};

#endif /* _ERRCODE_H_ */
