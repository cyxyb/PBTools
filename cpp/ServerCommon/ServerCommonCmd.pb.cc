// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerCommonCmd.proto

#include "ServerCommonCmd.pb.h"

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
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_ServerCommonCmd_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ServerCommonCmd_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ServerCommonCmd_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ServerCommonCmd_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_ServerCommonCmd_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025ServerCommonCmd.proto*\271\002\n\020EMsgIDServer"
  "Main\022\030\n\024MsgIDServerMain_Null\020\000\022\030\n\024LOGIN2"
  "CENTER_MANAGER\020\001\022\027\n\023GAME2CENTER_MANAGER\020"
  "\002\022\027\n\023CENTER2LOGIN_NOTIFY\020\003\022\026\n\022CENTER2GAM"
  "E_NOTIFY\020\004\022\023\n\017ROBOT2GAME_MAIN\020\005\022\033\n\027CENTE"
  "R2APPRECHARGE_MAIN\020\006\022\033\n\027APPRECHARGE2CENT"
  "ER_MAIN\020\007\022\025\n\021RELAY2CENTER_MAIN\020\010\022\025\n\021CENT"
  "ER2RELAY_MAIN\020\t\022\024\n\020CHAT2CENTER_MAIN\020\n\022\024\n"
  "\020CENTER2CHAT_MAIN\020\013*\224\014\n\031EMsgIDServerInte"
  "rnalProto\022\030\n\024SERVER_INTERNAL_NULL\020\000\022\031\n\025L"
  "OGIN2CENTER_Register\020\001\022\033\n\027LOGIN2CENTER_U"
  "nRegister\020\002\022 \n\034LOGIN2CENTER_UpdateOnline"
  "Num\020\003\022\031\n\025LOGIN2CENTER_SendGold\020\004\022\035\n\031CENT"
  "ER2LOGIN_SendGoldResp\020\005\022\036\n\032LOGIN2CENTER_"
  "SendPhoneCode\020\006\022\"\n\036LOGIN2CENTER_GetGameS"
  "erverList\020\007\022&\n\"CENTER2LOGIN_GetGameServe"
  "rListResp\020\010\022#\n\037CENTER2LOGIN_GameServerRe"
  "gister\020\t\022%\n!CENTER2LOGIN_GameServerUnReg"
  "ister\020\n\022*\n&CENTER2LOGIN_UpdateGameServer"
  "OnlineNum\020\013\022\034\n\030CENTER2LOGIN_AddMailResp\020"
  "\014\022\035\n\031CENTER2LOGIN_RechargeResp\020\r\022$\n CENT"
  "ER2LOGIN_BroadcastZmdTipResp\020\016\022\030\n\024LOGIN2"
  "CENTER_GetRank\020\017\022\034\n\030CENTER2LOGIN_GetRank"
  "Resp\020\020\022#\n\037CENTER2LOGIN_ChatServerRegiste"
  "r\020\021\022%\n!CENTER2LOGIN_ChatServerUnRegister"
  "\020\022\022\"\n\036LOGIN2CENTER_GetChatServerList\020\023\022&"
  "\n\"CENTER2LOGIN_GetChatServerListResp\020\024\022\035"
  "\n\031LOGIN2CENTER_BroadcastTip\020\025\022*\n&CENTER2"
  "LOGIN_UpdateChatServerOnlineNum\020\026\022%\n!LOG"
  "IN2CENTER_BankSynchronousLogin\020\027\022)\n%CENT"
  "ER2LOGIN_BankSynchronousLoginResp\020\030\022\031\n\024G"
  "AME2CENTER_Register\020\321\017\022\033\n\026GAME2CENTER_Un"
  "Register\020\322\017\022\033\n\026GAME2CENTER_ApplyRobot\020\323\017"
  "\022\037\n\032CENTER2GAME_ApplyRobotResp\020\324\017\022 \n\033GAM"
  "E2CENTER_UpdateOnlineNum\020\325\017\022\035\n\030GAME2CENT"
  "ER_BroadcastTip\020\326\017\022\032\n\025ROBOT2GAME_RobotLo"
  "gin\020\271\027\022%\n CENTER2APPRECHARGE_SendPhoneCo"
  "de\020\241\037\022!\n\034APPRECHARGE2CENTER_HeartBeat\020\242\037"
  "\022!\n\034CENTER2APPRECHARGE_HeartBeat\020\243\037\022 \n\033A"
  "PPRECHARGE2CENTER_Register\020\244\037\022\"\n\035APPRECH"
  "ARGE2CENTER_UnRegister\020\245\037\022 \n\033RelayServer"
  "2CENTER_Register\020\211\'\022\037\n\032RelayServer2CENTE"
  "R_AddMail\020\212\'\022\'\n\"RelayServer2CENTER_Recha"
  "rgeSuccess\020\213\'\022 \n\033RelayServer2CENTER_With"
  "draw\020\214\'\022\031\n\024Chat2Center_Register\020\361.\022 \n\033Ch"
  "at2Center_UpdateOnlineNum\020\362.\022\037\n\032Chat2Cen"
  "ter_SendTrumpetMsg\020\363.\022#\n\036Center2Chat_Sen"
  "dTrumpetMsgResp\020\364.*\201\030\n\010EMsgIDDB\022\020\n\014MsgID"
  "DB_NULL\020\000\022\035\n\031CENTER2DB_UpdateOnlineNum\020\001"
  "\022\033\n\027CENTER2DB_InitOnlineNum\020\002\022\033\n\027CENTER2"
  "DB_RegisterLogin\020\003\022\035\n\031CENTER2DB_Unregist"
  "erLogin\020\004\022\032\n\026CENTER2DB_RegisterGame\020\005\022\032\n"
  "\026CENTER2DB_LoadAllRobot\020\006\022\036\n\032DB2CENTER_L"
  "oadAllRobotResp\020\007\022\031\n\025CENTER2DB_CreateRob"
  "ot\020\010\022\035\n\031DB2CENTER_CreateRobotResp\020\t\022\025\n\021C"
  "ENTER2DB_AddMail\020\n\022\031\n\025DB2CENTER_AddMailR"
  "esp\020\013\022\037\n\033CENTER2DB_UpdateRankRichMan\020\016\022\035"
  "\n\031CENTER2DB_InserRankBigWin\020\017\022\023\n\016LOGIN2D"
  "B_Login\020\351\007\022\027\n\022DB2LOGIN_LoginResp\020\352\007\022\034\n\027D"
  "B2LOGIN_LoadPlayerData\020\353\007\022\026\n\021LOGIN2DB_Lo"
  "ginOut\020\354\007\022\036\n\031LOGIN2DB_UpdatePlayerInfo\020\355"
  "\007\022\031\n\024LOGIN2DB_GetMailList\020\356\007\022\035\n\030DB2LOGIN"
  "_GetMailListResp\020\357\007\022\026\n\021LOGIN2DB_ReadMail"
  "\020\360\007\022\026\n\021LOGIN2DB_PickMail\020\361\007\022\032\n\025DB2LOGIN_"
  "PickMailResp\020\362\007\022\030\n\023LOGIN2DB_RecallMail\020\363"
  "\007\022\034\n\027DB2LOGIN_RecallMailResp\020\364\007\022\037\n\032LOGIN"
  "2DB_DeleteAllReadMail\020\365\007\022#\n\036DB2LOGIN_Del"
  "eteAllReadMailResp\020\366\007\022\036\n\031LOGIN2DB_QueryC"
  "heckInInfo\020\367\007\022\"\n\035DB2LOGIN_QueryCheckInIn"
  "foResp\020\370\007\022\033\n\026LOGIN2DB_PlayerCheckIn\020\371\007\022\037"
  "\n\032DB2LOGIN_PlayerCheckInResp\020\372\007\022 \n\033LOGIN"
  "2DB_QueryTurntableData\020\373\007\022$\n\037DB2LOGIN_Qu"
  "eryTurntableDataResp\020\374\007\022\033\n\026LOGIN2DB_Play"
  "Turntable\020\375\007\022\037\n\032DB2LOGIN_PlayTurntableRe"
  "sp\020\376\007\022\034\n\027LOGIN2DB_ForgetPassword\020\377\007\022 \n\033D"
  "B2LOGIN_ForgetPasswordResp\020\200\010\022\033\n\026LOGIN2D"
  "B_GetPlayerGold\020\201\010\022\037\n\032DB2LOGIN_GetPlayer"
  "GoldResp\020\202\010\022\032\n\025LOGIN2DB_GetVIPConfig\020\203\010\022"
  "\036\n\031DB2LOGIN_GetVIPConfigResp\020\204\010\022\032\n\025LOGIN"
  "2DB_GetHitCoding\020\205\010\022\036\n\031DB2LOGIN_GetHitCo"
  "dingResp\020\206\010\022\030\n\023LOGIN2DB_VIPUpgrade\020\207\010\022\034\n"
  "\027DB2LOGIN_VIPUpgradeResp\020\210\010\022\032\n\025LOGIN2DB_"
  "ModifyAvatar\020\211\010\022\036\n\031DB2LOGIN_ModifyAvatar"
  "Resp\020\212\010\022\037\n\032LOGIN2DB_ModifyAvatarFrame\020\213\010"
  "\022#\n\036DB2LOGIN_ModifyAvatarFrameResp\020\214\010\022\033\n"
  "\026LOGIN2DB_GetAvatarInfo\020\215\010\022\037\n\032DB2LOGIN_G"
  "etAvatarInfoResp\020\216\010\022\035\n\030LOGIN2DB_QueryPla"
  "yerInfo\020\217\010\022!\n\034DB2LOGIN_QueryPlayerInfoRe"
  "sp\020\220\010\022\035\n\030LOGIN2DB_QueryActiveInfo\020\221\010\022!\n\034"
  "DB2LOGIN_QueryActiveInfoResp\020\222\010\022\034\n\027LOGIN"
  "2DB_PickActiveInfo\020\223\010\022 \n\033DB2LOGIN_PickAc"
  "tiveInfoResp\020\224\010\022\035\n\030LOGIN2DB_ModifySignat"
  "ure\020\225\010\022!\n\034DB2LOGIN_ModifySignatureResp\020\226"
  "\010\022\025\n\020LOGIN2DB_GetRank\020\227\010\022\031\n\024DB2LOGIN_Get"
  "RankResp\020\230\010\022\031\n\024LOGIN2DB_StorageCode\020\231\010\022\027"
  "\n\022LOGIN2DB_BindPhone\020\232\010\022\033\n\026DB2LOGIN_Bind"
  "PhoneResp\020\233\010\022\032\n\025LOGIN2DB_BankOpenBank\020\234\010"
  "\022\036\n\031DB2LOGIN_BankOpenBankResp\020\235\010\022\031\n\024LOGI"
  "N2DB_BankOperate\020\236\010\022\035\n\030DB2LOGIN_BankOper"
  "ateResp\020\237\010\022\032\n\025LOGIN2DB_BankTransfer\020\240\010\022\036"
  "\n\031DB2LOGIN_BankTransferResp\020\241\010\022\030\n\023LOGIN2"
  "DB_BankRecord\020\242\010\022\034\n\027DB2LOGIN_BankRecordR"
  "esp\020\243\010\022 \n\033LOGIN2DB_BankChangePassword\020\244\010"
  "\022$\n\037DB2LOGIN_BankChangePasswordResp\020\245\010\022\035"
  "\n\030LOGIN2DB_BankSetPassword\020\246\010\022!\n\034DB2LOGI"
  "N_BankSetPasswordResp\020\247\010\022\033\n\026LOGIN2DB_Get"
  "PlayerItem\020\250\010\022\037\n\032DB2LOGIN_GetPlayerItemR"
  "esp\020\251\010\022\037\n\032LOGIN2DB_BankQueryNickname\020\252\010\022"
  "#\n\036DB2LOGIN_BankQueryNicknameResp\020\253\010\022\026\n\021"
  "LOGIN2DB_BuyGoods\020\254\010\022\032\n\025DB2LOGIN_BuyGood"
  "sResp\020\255\010\022\022\n\rGAME2DB_Login\020\321\017\022\026\n\021DB2GAME_"
  "LoginResp\020\322\017\022\032\n\025GAME2DB_LoadCheatRate\020\323\017"
  "\022\032\n\025DB2GAME_LoadCheatRate\020\324\017\022\027\n\022GAME2DB_"
  "WriteScore\020\325\017\022\027\n\022DB2GAME_WriteScore\020\326\017\022\""
  "\n\035GAME2DB_FingerGuessWriteScore\020\327\017\022\"\n\035DB"
  "2GAME_FingerGuessWriteScore\020\330\017\022#\n\036GAME2D"
  "B_FingerGuessQueryRecord\020\331\017\022#\n\036DB2GAME_F"
  "ingerGuessRoundRecord\020\332\017\022!\n\034DB2GAME_Fing"
  "erGuessDayRecord\020\333\017\022 \n\033GAME2DB_WriteDisC"
  "onnectData\020\334\017\022\034\n\027GAME2DB_QueryJckpotInfo"
  "\020\335\017\022 \n\033DB2GAME_QueryJckpotInfoResp\020\336\017\022\035\n"
  "\030GAME2DB_UpdateJckpotInfo\020\337\017\022\022\n\rCHAT2DB_"
  "Login\020\271\027\022\026\n\021DB2CHAT_LoginResp\020\272\027\022\033\n\026CHAT"
  "2DB_SendTrumpetMsg\020\273\027\022\037\n\032DB2CHAT_SendTru"
  "mpetMsgResp\020\274\027b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ServerCommonCmd_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ServerCommonCmd_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ServerCommonCmd_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ServerCommonCmd_2eproto = {
  false, false, descriptor_table_protodef_ServerCommonCmd_2eproto, "ServerCommonCmd.proto", 4982,
  &descriptor_table_ServerCommonCmd_2eproto_once, descriptor_table_ServerCommonCmd_2eproto_sccs, descriptor_table_ServerCommonCmd_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_ServerCommonCmd_2eproto::offsets,
  file_level_metadata_ServerCommonCmd_2eproto, 0, file_level_enum_descriptors_ServerCommonCmd_2eproto, file_level_service_descriptors_ServerCommonCmd_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ServerCommonCmd_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ServerCommonCmd_2eproto)), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDServerMain_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ServerCommonCmd_2eproto);
  return file_level_enum_descriptors_ServerCommonCmd_2eproto[0];
}
bool EMsgIDServerMain_IsValid(int value) {
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
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDServerInternalProto_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ServerCommonCmd_2eproto);
  return file_level_enum_descriptors_ServerCommonCmd_2eproto[1];
}
bool EMsgIDServerInternalProto_IsValid(int value) {
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
    case 2001:
    case 2002:
    case 2003:
    case 2004:
    case 2005:
    case 2006:
    case 3001:
    case 4001:
    case 4002:
    case 4003:
    case 4004:
    case 4005:
    case 5001:
    case 5002:
    case 5003:
    case 5004:
    case 6001:
    case 6002:
    case 6003:
    case 6004:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDDB_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ServerCommonCmd_2eproto);
  return file_level_enum_descriptors_ServerCommonCmd_2eproto[2];
}
bool EMsgIDDB_IsValid(int value) {
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
    case 14:
    case 15:
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
    case 1021:
    case 1022:
    case 1023:
    case 1024:
    case 1025:
    case 1026:
    case 1027:
    case 1028:
    case 1029:
    case 1030:
    case 1031:
    case 1032:
    case 1033:
    case 1034:
    case 1035:
    case 1036:
    case 1037:
    case 1038:
    case 1039:
    case 1040:
    case 1041:
    case 1042:
    case 1043:
    case 1044:
    case 1045:
    case 1046:
    case 1047:
    case 1048:
    case 1049:
    case 1050:
    case 1051:
    case 1052:
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
    case 2012:
    case 2013:
    case 2014:
    case 2015:
    case 3001:
    case 3002:
    case 3003:
    case 3004:
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
