/**
 * struct Msg_Struct description
 *
 * [This file was auto-generated. PLEASE DONT EDIT]
 *
 * @copyright urentech.com
 *
 */



#ifndef MSG_STRUCT_H_
#define MSG_STRUCT_H_

#include <cstring>
#include "Block_Buffer.h"

/*

	角色信息
*/
struct Role_Info {

	int64_t role_id;

	std::string account;

	std::string role_name;

	uint8_t career;

	uint8_t gender;

	uint16_t level;

	Role_Info(void);

	void serialize(Block_Buffer & w) const;

	int deserialize(Block_Buffer & r);

	void reset(void);
};
/*

	物品基本信息

	备注：

	EQUIP_INDEX = 10000,

	PACKAGE_INDEX = EQUIP_INDEX + INDEX_GAP,
*/
struct Item_Basic_Info {

	uint32_t index;/*位置标识符*/

	uint32_t seq;/*序列，绝不重复*/

	uint32_t id;/*道具id（图标id整合到此id）*/

	int32_t amount;/*总量*/

	uint8_t bind;/*是否绑定（0）不绑，（2）已绑 其他值非法*/

	Item_Basic_Info(void);

	void serialize(Block_Buffer & w) const;

	int deserialize(Block_Buffer & r);

	void reset(void);
};
struct Money {

	int32_t bind_copper;/*绑定铜钱*/

	int32_t copper;/*铜钱*/

	int32_t coupon;/*礼卷*/

	int32_t gold;/*元宝*/

	Money(void);

	void serialize(Block_Buffer & w) const;

	int deserialize(Block_Buffer & r);

	void reset(void);
};


#endif
