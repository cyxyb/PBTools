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
  "n_SubGame\020\322\017\022\024\n\017EMsgIDMain_Chat\020\271\027*\303\034\n\013E"
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
  "ConfigResp\0208\022\037\n\033MsgIDVIP_GetPlayerHitCod"
  "ing\0209\022#\n\037MsgIDVIP_GetPlayerHitCodingResp"
  "\020:\022\027\n\023MsgIDVIP_VIPUpgrade\020;\022\033\n\027MsgIDVIP_"
  "VIPUpgradeResp\020<\022\035\n\031MsgIDAvatar_GetAvata"
  "rInfo\020=\022!\n\035MsgIDAvatar_GetAvatarInfoResp"
  "\020>\022!\n\035MsgIDAvatar_ModifyAvatarFrame\020\?\022%\n"
  "!MsgIDAvatar_ModifyAvatarFrameResp\020@\022\036\n\032"
  "MsgIDLogin_QueryPlayerInfo\020A\022\"\n\036MsgIDLog"
  "in_QueryPlayerInfoResp\020B\022\037\n\033MsgIDActive_"
  "QueryActiveInfo\020C\022#\n\037MsgIDActive_QueryAc"
  "tiveInfoResp\020D\022\035\n\031MsgIDZMD_BroadcastTipR"
  "esp\020E\022\036\n\032MsgIDActive_PickActiveInfo\020F\022\"\n"
  "\036MsgIDActive_PickActiveInfoResp\020G\022\031\n\025Msg"
  "IDSignature_Modify\020H\022\035\n\031MsgIDSignature_M"
  "odifyResp\020I\022\021\n\rMsgIDRank_Get\020J\022\025\n\021MsgIDR"
  "ank_GetResp\020K\022!\n\035MsgIDTransfer_TransferO"
  "perate\020L\022%\n!MsgIDTransfer_TransferOperat"
  "eResp\020M\022!\n\035MsgIDTransfer_TransferReceive"
  "\020N\022%\n!MsgIDTransfer_TransferReceiveResp\020"
  "O\022 \n\034MsgIDTransfer_TransferRecord\020P\022$\n M"
  "sgIDTransfer_TransferRecordResp\020Q\022#\n\037Msg"
  "IDLogin_NotifyChatServerList\020R\022\"\n\036MsgIDL"
  "ogin_QueryChatServerList\020S\022\034\n\030MsgIDLogin"
  "_GetPlayerItem\020T\022 \n\034MsgIDLogin_GetPlayer"
  "ItemResp\020U\022$\n MsgIDLogin_TransferQueryUs"
  "erInfo\020V\022(\n$MsgIDLogin_TransferQueryUser"
  "InfoResp\020W\022\026\n\022MsgIDShop_BuyGoods\020X\022\032\n\026Ms"
  "gIDShop_BuyGoodsResp\020Y\022\037\n\033MsgIDShop_Quer"
  "yTrumpetPrice\020Z\022#\n\037MsgIDShop_QueryTrumpe"
  "tPriceResp\020[\022\036\n\032MsgIDLogin_QueryServerTi"
  "me\020\\\022\"\n\036MsgIDLogin_QueryServerTimeResp\020]"
  "\022\024\n\020MsgIDLogin_Heart\020^\022\030\n\024MsgIDLogin_Hea"
  "rtResp\020_\022 \n\034MsgIDAgent_QuerySubAgentInfo"
  "\020`\022$\n MsgIDAgent_QuerySubAgentInfoResp\020a"
  "\022\033\n\027MsgIDLogin_KickUserResp\020b\022%\n!MsgIDBa"
  "nk_TransferOperateSyncResp\020c\022\035\n\031MsgIDSha"
  "re_BindInviteCode\020d\022!\n\035MsgIDShare_BindIn"
  "viteCodeResp\020e\022\034\n\030MsgIDShare_QueryBindIn"
  "fo\020f\022 \n\034MsgIDShare_QueryBindInfoResp\020g\022#"
  "\n\037MsgIDRecharge_DotRechargeRecord\020h\022\'\n#M"
  "sgIDRecharge_DotRechargeRecordResp\020i\022\035\n\031"
  "MsgIDRecharge_SyncDotData\020j\022!\n\035MsgIDOnli"
  "ne_OnlineActiveQuery\020k\022%\n!MsgIDOnline_On"
  "lineActiveQueryResp\020l\022 \n\034MsgIDOnline_Onl"
  "ineActivePick\020m\022$\n MsgIDOnline_OnlineAct"
  "ivePickResp\020n\022!\n\035MsgIDActive_ActiveFBSha"
  "reData\020o*\212\005\n\nEMsgIDGame\022\022\n\016MsgIDGame_Nul"
  "l\020\000\022\024\n\017MsgIDGame_Login\020\351\007\022\030\n\023MsgIDGame_L"
  "oginResp\020\352\007\022\036\n\031MsgIDGame_SqueezeSeatResp"
  "\020\353\007\022\025\n\020MsgIDGame_Logout\020\354\007\022\032\n\025MsgIDGame_"
  "AutoSitDown\020\355\007\022\032\n\025MsgIDGame_SitDownResp\020"
  "\356\007\022!\n\034MsgIDGame_SyncPlayerInfoResp\020\357\007\022&\n"
  "!MsgIDGame_NotifyPlayerStandUpResp\020\360\007\022#\n"
  "\036MsgIDGame_SyncPlayersScoreResp\020\361\007\022\034\n\027Ms"
  "gIDGame_SendGameSence\020\362\007\022 \n\033MsgIDGame_Se"
  "ndGameSenceResp\020\363\007\022 \n\033MsgIDGame_NotifyMe"
  "ssageResp\020\364\007\022\031\n\024MsgIDGame_CreateRoom\020\365\007\022"
  "\027\n\022MsgIDGame_JoinRoom\020\366\007\022\032\n\025MsgIDGame_Qu"
  "eryRecord\020\367\007\022#\n\036MsgIDGame_QueryRoundReco"
  "rdResp\020\370\007\022!\n\034MsgIDGame_QueryDayRecordRes"
  "p\020\371\007\022\033\n\026MsgIDGame_AddOneRecord\020\372\007\022&\n!Msg"
  "IDGame_NotifyPlayerOfflineResp\020\373\007\022\032\n\025Msg"
  "IDGame_ChangeTable\020\374\007*\375\002\n\nEMsgIDChat\022\022\n\016"
  "MsgIDChat_Null\020\000\022\024\n\017MsgIDChat_Login\020\321\017\022\030"
  "\n\023MsgIDChat_LoginResp\020\322\017\022\031\n\024MsgIDChat_Lo"
  "goutResp\020\323\017\022\034\n\027MsgIDChat_SendNormalMsg\020\324"
  "\017\022&\n!MsgIDChat_NotifyChatNormalMsgResp\020\325"
  "\017\022\035\n\030MsgIDChat_SendTrumpetMsg\020\326\017\022\'\n\"MsgI"
  "DChat_NotifyChatTrumpetMsgResp\020\327\017\022\037\n\032Msg"
  "IDChat_SyncUserInfoResp\020\330\017\022\037\n\032MsgIDChat_"
  "SetLilitChatResp\020\331\017\022\035\n\030MsgIDChat_GetChat"
  "History\020\332\017\022!\n\034MsgIDChat_GetChatHistoryRe"
  "sp\020\333\017b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_CommonCmd_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_CommonCmd_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CommonCmd_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonCmd_2eproto = {
  false, false, descriptor_table_protodef_CommonCmd_2eproto, "CommonCmd.proto", 4853,
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
    case 1013:
    case 1014:
    case 1015:
    case 1016:
    case 1017:
    case 1018:
    case 1019:
    case 1020:
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
