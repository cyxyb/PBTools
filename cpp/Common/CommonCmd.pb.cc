// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonCmd.proto

#include "CommonCmd.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_CommonCmd_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_CommonCmd_2eproto[4];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_CommonCmd_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_CommonCmd_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_CommonCmd_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017CommonCmd.proto*\206\001\n\nEMsgIDMain\022\023\n\017EMsg"
  "IDMain_Null\020\000\022\036\n\031EMsgIDMain_Login_UserIn"
  "fo\020\351\007\022\024\n\017EMsgIDMain_Game\020\321\017\022\027\n\022EMsgIDMai"
  "n_SubGame\020\322\017\022\024\n\017EMsgIDMain_Chat\020\271\027*\247)\n\013E"
  "MsgIDLogin\022\023\n\017MsgIDLogin_Null\020\000\022\024\n\020MsgID"
  "Login_Login\020\001\022\030\n\024MsgIDLogin_LoginResp\020\002\022"
  "\035\n\031MsgIDLogin_ModifyNickName\020\003\022!\n\035MsgIDL"
  "ogin_ModifyNickNameResp\020\004\022\031\n\025MsgIDLogin_"
  "ModifyHead\020\005\022\035\n\031MsgIDLogin_ModifyHeadRes"
  "p\020\006\022\035\n\031MsgIDLogin_ModifyPassword\020\007\022!\n\035Ms"
  "gIDLogin_ModifyPasswordResp\020\010\022\030\n\024MsgIDLo"
  "gin_BindPhone\020\t\022\031\n\025MsgIDMail_GetMailList"
  "\020\n\022\035\n\031MsgIDMail_GetMailListResp\020\013\022\034\n\030Msg"
  "IDLogin_BindPhoneResp\020\014\022\026\n\022MsgIDMail_Rea"
  "dMail\020\r\022\026\n\022MsgIDMail_PickMail\020\016\022\032\n\026MsgID"
  "Mail_PickMailResp\020\017\022\030\n\024MsgIDMail_RecallM"
  "ail\020\020\022\034\n\030MsgIDMail_RecallMailResp\020\021\022\037\n\033M"
  "sgIDMail_DeleteAllReadMail\020\022\022#\n\037MsgIDMai"
  "l_DeleteAllReadMailResp\020\023\022\030\n\024MsgIDLogin_"
  "PhoneCode\020\024\022\034\n\030MsgIDLogin_PhoneCodeResp\020"
  "\025\022\034\n\030MsgIDLogin_GetPlayerGold\020\026\022#\n\037MsgID"
  "Login_NotifyGameServerList\020\027\022\036\n\032MsgIDSig"
  "n_QueryCheckInInfo\020\030\022\"\n\036MsgIDSign_QueryC"
  "heckInInfoResp\020\031\022\033\n\027MsgIDSign_PlayerChec"
  "kIn\020\032\022\037\n\033MsgIDSign_PlayerCheckInResp\020\033\022\034"
  "\n\030MsgIDTurntable_QueryData\020\034\022 \n\034MsgIDTur"
  "ntable_QueryDataResp\020\035\022 \n\034MsgIDTurntable"
  "_PlayTurntable\020\036\022$\n MsgIDTurntable_PlayT"
  "urntableResp\020\037\022\032\n\026MsgIDMail_SyncMailList"
  "\020 \022\036\n\032MsgIDMail_SyncMailListResp\020!\022\031\n\025Ms"
  "gIDMail_AddMailResp\020\"\022\030\n\024MsgIDShare_Quer"
  "yInfo\020#\022\034\n\030MsgIDShare_QueryInfoResp\020$\022\031\n"
  "\025MsgIDShare_BindParent\020%\022\035\n\031MsgIDShare_B"
  "indParentResp\020&\022\"\n\036MsgIDShare_QueryInvit"
  "eAwardCfg\020\'\022&\n\"MsgIDShare_QueryInviteAwa"
  "rdCfgResp\020(\022\036\n\032MsgIDShare_PickInviteAwar"
  "d\020)\022\"\n\036MsgIDShare_PickInviteAwardResp\020*\022"
  " \n\034MsgIDShare_QueryRechargeInfo\020+\022$\n Msg"
  "IDShare_QueryRechargeInfoResp\020,\022(\n$MsgID"
  "Share_QueryRechargeRebateRecord\020-\022,\n(Msg"
  "IDShare_QueryRechargeRebateRecordResp\020.\022"
  "!\n\035MsgIDShare_PickRechargeRebate\020/\022%\n!Ms"
  "gIDShare_PickRechargeRebateResp\0200\022\037\n\033Msg"
  "IDShare_AgencyInfoRebate\0201\022#\n\037MsgIDShare"
  "_AgencyInfoRebateResp\0202\022\035\n\031MsgIDLogin_Fo"
  "rgetPassword\0203\022!\n\035MsgIDLogin_ForgetPassw"
  "ordResp\0204\022\035\n\031MsgIDLogin_RechargeNotify\0205"
  "\022 \n\034MsgIDLogin_GetPlayerGoldResp\0206\022\031\n\025Ms"
  "gIDVIP_GetVIPConfig\0207\022\035\n\031MsgIDVIP_GetVIP"
  "ConfigResp\0208\022\034\n\030MsgIDVIP_GetPlayerVipExp"
  "\0209\022 \n\034MsgIDVIP_GetPlayerVipExpResp\020:\022\027\n\023"
  "MsgIDVIP_VIPUpgrade\020;\022\033\n\027MsgIDVIP_VIPUpg"
  "radeResp\020<\022\035\n\031MsgIDAvatar_GetAvatarInfo\020"
  "=\022!\n\035MsgIDAvatar_GetAvatarInfoResp\020>\022!\n\035"
  "MsgIDAvatar_ModifyAvatarFrame\020\?\022%\n!MsgID"
  "Avatar_ModifyAvatarFrameResp\020@\022\036\n\032MsgIDL"
  "ogin_QueryPlayerInfo\020A\022\"\n\036MsgIDLogin_Que"
  "ryPlayerInfoResp\020B\022\037\n\033MsgIDActive_QueryA"
  "ctiveInfo\020C\022#\n\037MsgIDActive_QueryActiveIn"
  "foResp\020D\022\035\n\031MsgIDZMD_BroadcastTipResp\020E\022"
  "\036\n\032MsgIDActive_PickActiveInfo\020F\022\"\n\036MsgID"
  "Active_PickActiveInfoResp\020G\022\031\n\025MsgIDSign"
  "ature_Modify\020H\022\035\n\031MsgIDSignature_ModifyR"
  "esp\020I\022\021\n\rMsgIDRank_Get\020J\022\025\n\021MsgIDRank_Ge"
  "tResp\020K\022!\n\035MsgIDTransfer_TransferOperate"
  "\020L\022%\n!MsgIDTransfer_TransferOperateResp\020"
  "M\022!\n\035MsgIDTransfer_TransferReceive\020N\022%\n!"
  "MsgIDTransfer_TransferReceiveResp\020O\022 \n\034M"
  "sgIDTransfer_TransferRecord\020P\022$\n MsgIDTr"
  "ansfer_TransferRecordResp\020Q\022#\n\037MsgIDLogi"
  "n_NotifyChatServerList\020R\022\"\n\036MsgIDLogin_Q"
  "ueryChatServerList\020S\022\034\n\030MsgIDLogin_GetPl"
  "ayerItem\020T\022 \n\034MsgIDLogin_GetPlayerItemRe"
  "sp\020U\022$\n MsgIDLogin_TransferQueryUserInfo"
  "\020V\022(\n$MsgIDLogin_TransferQueryUserInfoRe"
  "sp\020W\022\026\n\022MsgIDShop_BuyGoods\020X\022\032\n\026MsgIDSho"
  "p_BuyGoodsResp\020Y\022\037\n\033MsgIDShop_QueryTrump"
  "etPrice\020Z\022#\n\037MsgIDShop_QueryTrumpetPrice"
  "Resp\020[\022\036\n\032MsgIDLogin_QueryServerTime\020\\\022\""
  "\n\036MsgIDLogin_QueryServerTimeResp\020]\022\024\n\020Ms"
  "gIDLogin_Heart\020^\022\030\n\024MsgIDLogin_HeartResp"
  "\020_\022 \n\034MsgIDAgent_QuerySubAgentInfo\020`\022$\n "
  "MsgIDAgent_QuerySubAgentInfoResp\020a\022\033\n\027Ms"
  "gIDLogin_KickUserResp\020b\022%\n!MsgIDBank_Tra"
  "nsferOperateSyncResp\020c\022\035\n\031MsgIDShare_Que"
  "ryShareInfo\020d\022!\n\035MsgIDShare_QueryShareIn"
  "foResp\020e\022\036\n\032MsgIDShare_QueryInviteUser\020f"
  "\022\"\n\036MsgIDShare_QueryInviteUserResp\020g\022#\n\037"
  "MsgIDRecharge_DotRechargeRecord\020h\022\'\n#Msg"
  "IDRecharge_DotRechargeRecordResp\020i\022\035\n\031Ms"
  "gIDRecharge_SyncDotData\020j\022!\n\035MsgIDOnline"
  "_OnlineActiveQuery\020k\022%\n!MsgIDOnline_Onli"
  "neActiveQueryResp\020l\022 \n\034MsgIDOnline_Onlin"
  "eActivePick\020m\022$\n MsgIDOnline_OnlineActiv"
  "ePickResp\020n\022!\n\035MsgIDActive_ActiveFBShare"
  "Data\020o\022\034\n\030MsgIDCDK_CDKexchangeInfo\020p\022 \n\034"
  "MsgIDCDK_CDKexchangeInfoResp\020q\022\036\n\032MsgIDL"
  "ogin_PersonalDetails\020r\022\"\n\036MsgIDLogin_Per"
  "sonalDetailsResp\020s\022&\n\"MsgIDLogin_NotifyS"
  "erverOfflineResp\020t\022%\n!MsgIDShare_NotifyU"
  "pdateVipExpResp\020u\022\"\n\036MsgIDShare_NotifyAd"
  "dNewSubResp\020v\022\035\n\031MsgIDDelete_DeleteAccou"
  "nt\020w\022!\n\035MsgIDDelete_DeleteAccountResp\020x\022"
  ")\n%MsgIDCelebrity_QueryCelebrityGoldCoin"
  "\020y\022-\n)MsgIDCelebrity_QueryCelebrityGoldC"
  "oinResp\020z\022\'\n#MsgIDCelebrity_GetCelebrity"
  "GoldCoin\020{\022+\n\'MsgIDCelebrity_GetCelebrit"
  "yGoldCoinResp\020|\022\'\n#MsgIDAgent_InfiniteAg"
  "entQueryMyInfo\020}\022+\n\'MsgIDAgent_InfiniteA"
  "gentQueryMyInfoResp\020~\022(\n$MsgIDAgent_Infi"
  "niteAgentQuerySubInfo\020\177\022-\n(MsgIDAgent_In"
  "finiteAgentQuerySubInfoResp\020\200\001\022#\n\036MsgIDA"
  "gent_InfiniteAgentSetSub\020\201\001\022\'\n\"MsgIDAgen"
  "t_InfiniteAgentSetSubResp\020\202\001\022*\n%MsgIDAge"
  "mt_InfiniteAgentRecviveRebate\020\203\001\022.\n)MsgI"
  "DAgemt_InfiniteAgentRecviveRebateResp\020\204\001"
  "\022\035\n\030MsgIDCard_WeekMonthQuery\020\205\001\022!\n\034MsgID"
  "Card_WeekMonthQueryResp\020\206\001\022\037\n\032MsgIDCard_"
  "BuyWeekMonthResp\020\207\001\022 \n\033MsgIDCard_WeekMon"
  "thGetAward\020\210\001\022$\n\037MsgIDCard_WeekMonthGetA"
  "wardResp\020\211\001\022\036\n\031MsgIDShare_BindInviteCode"
  "\020\212\001\022\"\n\035MsgIDShare_BindInviteCodeResp\020\213\001\022"
  "%\n MsgIDAgent_InfiniteQueryUserInfo\020\214\001\022)"
  "\n$MsgIDAgent_InfiniteQueryUserInfoResp\020\215"
  "\001\022\'\n\"MsgIDRunGame_QueryRechargeGiveInfo\020"
  "\216\001\022+\n&MsgIDRunGame_QueryRechargeGiveInfo"
  "Resp\020\217\001\022\036\n\031MsgIDAgent_GetClaimRecord\020\220\001\022"
  "\"\n\035MsgIDAgent_GetClaimRecordResp\020\221\001\022$\n\037M"
  "sgIDAgent_GetPerformanceRecord\020\222\001\022(\n#Msg"
  "IDAgent_GetPerformanceRecordResp\020\223\001\022%\n M"
  "sgIDLogin_NotifySysMaintainResp\020\224\001\022\033\n\026Ms"
  "gIDAgent_ControlUser\020\225\001\022\037\n\032MsgIDAgent_Co"
  "ntrolUserResp\020\226\001\022!\n\034MsgIDTransfer_Transf"
  "erRecall\020\227\001\022%\n MsgIDTransfer_TransferRec"
  "allResp\020\230\001\022!\n\034MsgIDSelectRoom_GetTableIn"
  "fo\020\231\001\022%\n MsgIDSelectRoom_GetTableInfoRes"
  "p\020\232\001*\210\013\n\nEMsgIDGame\022\022\n\016MsgIDGame_Null\020\000\022"
  "\024\n\017MsgIDGame_Login\020\351\007\022\030\n\023MsgIDGame_Login"
  "Resp\020\352\007\022\036\n\031MsgIDGame_SqueezeSeatResp\020\353\007\022"
  "\025\n\020MsgIDGame_Logout\020\354\007\022\032\n\025MsgIDGame_Auto"
  "SitDown\020\355\007\022\032\n\025MsgIDGame_SitDownResp\020\356\007\022!"
  "\n\034MsgIDGame_SyncPlayerInfoResp\020\357\007\022&\n!Msg"
  "IDGame_NotifyPlayerStandUpResp\020\360\007\022#\n\036Msg"
  "IDGame_SyncPlayersScoreResp\020\361\007\022\034\n\027MsgIDG"
  "ame_SendGameSence\020\362\007\022 \n\033MsgIDGame_SendGa"
  "meSenceResp\020\363\007\022 \n\033MsgIDGame_NotifyMessag"
  "eResp\020\364\007\022\032\n\025MsgIDGame_QueryRecord\020\367\007\022#\n\036"
  "MsgIDGame_QueryRoundRecordResp\020\370\007\022!\n\034Msg"
  "IDGame_QueryDayRecordResp\020\371\007\022\033\n\026MsgIDGam"
  "e_AddOneRecord\020\372\007\022&\n!MsgIDGame_NotifyPla"
  "yerOfflineResp\020\373\007\022\032\n\025MsgIDGame_ChangeTab"
  "le\020\374\007\022$\n\037MsgIDGame_NotifySysMaintainResp"
  "\020\375\007\022\035\n\030MsgIDGame_ModifyPropResp\020\376\007\022\032\n\025Ms"
  "gIDGame_GetPropInfo\020\377\007\022\036\n\031MsgIDGame_GetP"
  "ropInfoResp\020\200\010\022\037\n\032MsgIDGame_SitDownByTab"
  "leNo\020\201\010\022\034\n\027MsgIDGame_SyncTableInfo\020\202\010\022$\n"
  "\037MsgIDGame_Pvp_GetRoomConfigResp\020\233\010\022$\n\037M"
  "sgIDGame_Pvp_SendTableListResp\020\235\010\022\036\n\031Msg"
  "IDGame_Pvp_CreateTable\020\236\010\022\"\n\035MsgIDGame_P"
  "vp_CreateTableResp\020\237\010\022\034\n\027MsgIDGame_Pvp_J"
  "oinTable\020\240\010\022 \n\033MsgIDGame_Pvp_JoinTableRe"
  "sp\020\241\010\022 \n\033MsgIDGame_Pvp_ActivateTable\020\242\010\022"
  "$\n\037MsgIDGame_Pvp_ActivateTableResp\020\243\010\022\033\n"
  "\026MsgIDGame_Pvp_KickUser\020\244\010\022\037\n\032MsgIDGame_"
  "Pvp_KickUserResp\020\245\010\022\037\n\032MsgIDGame_Pvp_Des"
  "troyTable\020\246\010\022#\n\036MsgIDGame_Pvp_DestroyTab"
  "leResp\020\247\010\022 \n\033MsgIDGame_Pvp_FastJoinTable"
  "\020\250\010\022$\n\037MsgIDGame_Pvp_FastJoinTableResp\020\251"
  "\010\022\032\n\025MsgIDGame_Pvp_StandUp\020\252\010\022\036\n\031MsgIDGa"
  "me_Pvp_StandUpResp\020\253\010\022\'\n\"MsgIDGame_Pvp_T"
  "ableChangeOwunrResp\020\254\010\022\'\n\"MsgIDGame_Pvp_"
  "TableRoundChangeResp\020\255\010*\375\002\n\nEMsgIDChat\022\022"
  "\n\016MsgIDChat_Null\020\000\022\024\n\017MsgIDChat_Login\020\321\017"
  "\022\030\n\023MsgIDChat_LoginResp\020\322\017\022\031\n\024MsgIDChat_"
  "LogoutResp\020\323\017\022\034\n\027MsgIDChat_SendNormalMsg"
  "\020\324\017\022&\n!MsgIDChat_NotifyChatNormalMsgResp"
  "\020\325\017\022\035\n\030MsgIDChat_SendTrumpetMsg\020\326\017\022\'\n\"Ms"
  "gIDChat_NotifyChatTrumpetMsgResp\020\327\017\022\037\n\032M"
  "sgIDChat_SyncUserInfoResp\020\330\017\022\037\n\032MsgIDCha"
  "t_SetLilitChatResp\020\331\017\022\035\n\030MsgIDChat_GetCh"
  "atHistory\020\332\017\022!\n\034MsgIDChat_GetChatHistory"
  "Resp\020\333\017b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_CommonCmd_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_CommonCmd_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CommonCmd_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonCmd_2eproto = {
  false, false, descriptor_table_protodef_CommonCmd_2eproto, "CommonCmd.proto", 7255,
  &descriptor_table_CommonCmd_2eproto_once, descriptor_table_CommonCmd_2eproto_sccs, descriptor_table_CommonCmd_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_CommonCmd_2eproto::offsets,
  file_level_metadata_CommonCmd_2eproto, 0, file_level_enum_descriptors_CommonCmd_2eproto, file_level_service_descriptors_CommonCmd_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_CommonCmd_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_CommonCmd_2eproto)), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDMain_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommonCmd_2eproto);
  return file_level_enum_descriptors_CommonCmd_2eproto[0];
}
bool EMsgIDMain_IsValid(int value) {
  switch (value) {
    case 0:
    case 1001:
    case 2001:
    case 2002:
    case 3001:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDLogin_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommonCmd_2eproto);
  return file_level_enum_descriptors_CommonCmd_2eproto[1];
}
bool EMsgIDLogin_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDGame_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommonCmd_2eproto);
  return file_level_enum_descriptors_CommonCmd_2eproto[2];
}
bool EMsgIDGame_IsValid(int value) {
  switch (value) {
    case 0:
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 1005:
    case 1006:
    case 1007:
    case 1008:
    case 1009:
    case 1010:
    case 1011:
    case 1012:
    case 1015:
    case 1016:
    case 1017:
    case 1018:
    case 1019:
    case 1020:
    case 1021:
    case 1022:
    case 1023:
    case 1024:
    case 1025:
    case 1026:
    case 1051:
    case 1053:
    case 1054:
    case 1055:
    case 1056:
    case 1057:
    case 1058:
    case 1059:
    case 1060:
    case 1061:
    case 1062:
    case 1063:
    case 1064:
    case 1065:
    case 1066:
    case 1067:
    case 1068:
    case 1069:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDChat_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommonCmd_2eproto);
  return file_level_enum_descriptors_CommonCmd_2eproto[3];
}
bool EMsgIDChat_IsValid(int value) {
  switch (value) {
    case 0:
    case 2001:
    case 2002:
    case 2003:
    case 2004:
    case 2005:
    case 2006:
    case 2007:
    case 2008:
    case 2009:
    case 2010:
    case 2011:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
