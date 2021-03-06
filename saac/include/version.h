#ifndef __VERSION_H__
#define __VERSION_H__

/* 请将控制专案的 definition 放在这个档案
 * 然後藉由 remark/unmark 来开关功能
 */
 
#define SERVER_VERSION "17CSA版SAAC服务端v2.4.2.8 for WIN 修复版"

/* -------------------------------------------------------------------
 * 专案：族人职务与家族功能补充
 * 人员：小瑜、彦勋、志伟、小民
 * 说明：
 */
#define _LEADERFLAG_VER		// 嗯、ㄟ、这个.... (可开放)
#define _FAMILY			//  (可开放)
#define _PERSONAL_FAME		// Arminius 8.30 家族个人声望  (可开放)
#define _FMVER21			// CoolFish: 家族族长职务代理人 2001/8/30 (可开放)

/* -------------------------------------------------------------------
 * 专案：当机不回朔之人物资料存档方式修正
 * 人员：小瑜、彦勋
 * 说明：修正人物资料存档方式
 */
#define _NewSave		// CoolFish: 2001/10/16 (可开放)

/* -------------------------------------------------------------------
 * 专案：家族ＢＵＧ修正
 * 人员：小瑜
 * 说明：
 */
#define _LEADERFUNCHECK	// CoolFish: 2002/02/06 族长功能错误、禅让错误修正(可开放)

/* -------------------------------------------------------------------
 * 专案：跨星球踢人
 * 人员：彦豪
 * 说明：
 */
#define _WAEI_KICK				// (可开放)(北京不必开)

/* -------------------------------------------------------------------
 * 专案：九大庄园(4.0)
 * 人员：志旺	
 * 说明：
 */
#define _FIX_10_FMPOINT			// (可开放) WON ADD 九大庄园
#define _FIX_LEADER_ERR			// (可开放) WON ADD 修正族长问题
#define _REMOVE_FM_LOG          // (可开放) WON ADD 移除不必要的家族 LOG

/* -------------------------------------------------------------------
 * 专案：石器6.0
 * 人员：
 * 说明：
 */
#define _SEND_EFFECT		    // (可开放) WON ADD 送下雪、下雨等特效

// -------------------------------------------------------------------
#define _AC_SEND_FM_PK			// (可开放) WON ADD 庄园对战列表储存在AC
#define _ACFMPK_LIST			// (可开放) ANDY 庄园对战列表
/* -------------------------------------------------------------------
 * 专案：石器7.0
 * 人员：
 * 说明：
 */
#define _ALLDOMAN				// (可开放) Syu ADD 排行榜NPC
#define _CHAR_POOLITEM			// (可开放) ANDY 共用仓库
#define _CHAR_POOLPET			// (可开放) Robin 共用宠物仓库

// -------------------------------------------------------------------
#define _SLEEP_CHAR		// Robin 2004/02/12	活跃人物与非活跃人物分开储存

// Terry define start -------------------------------------------------------------------
#define _FM_MODIFY				// 家族功能修改
#define _CHANNEL_MODIFY		// 频道功能整合
#define _NEW_MANOR_LAW		// 新庄园规则
#define _LOCK_ADD_NAME		// LockNode 增加名字栏位(未开放)
#define _TEACHER_SYSTEM   // 导师系统(未开放)
// Terry define end   -------------------------------------------------------------------

#define _ANGEL_SUMMON	// Robin 精灵的召唤

//--------------------------------------------------------
//by longzoro

#define _VIP              //会员版本认证

#endif

