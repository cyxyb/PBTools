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
  "\n\025ServerCommonCmd.proto*\215\002\n\020EMsgIDServer"
  "Main\022\030\n\024MsgIDServerMain_Null\020\000\022\030\n\024LOGIN2"
  "CENTER_MANAGER\020\001\022\027\n\023GAME2CENTER_MANAGER\020"
  "\002\022\027\n\023CENTER2LOGIN_NOTIFY\020\003\022\026\n\022CENTER2GAM"
  "E_NOTIFY\020\004\022\023\n\017ROBOT2GAME_MAIN\020\005\022\033\n\027CENTE"
  "R2APPRECHARGE_MAIN\020\006\022\033\n\027APPRECHARGE2CENT"
  "ER_MAIN\020\007\022\025\n\021RELAY2CENTER_MAIN\020\010\022\025\n\021CENT"
  "ER2RELAY_MAIN\020\t*\337\007\n\031EMsgIDServerInternal"
  "Proto\022\030\n\024SERVER_INTERNAL_NULL\020\000\022\031\n\025LOGIN"
  "2CENTER_Register\020\001\022\033\n\027LOGIN2CENTER_UnReg"
  "ister\020\002\022 \n\034LOGIN2CENTER_UpdateOnlineNum\020"
  "\003\022\031\n\025LOGIN2CENTER_SendGold\020\004\022\035\n\031CENTER2L"
  "OGIN_SendGoldResp\020\005\022\036\n\032LOGIN2CENTER_Send"
  "PhoneCode\020\006\022\"\n\036LOGIN2CENTER_GetGameServe"
  "rList\020\007\022&\n\"CENTER2LOGIN_GetGameServerLis"
  "tResp\020\010\022#\n\037CENTER2LOGIN_GameServerRegist"
  "er\020\t\022%\n!CENTER2LOGIN_GameServerUnRegiste"
  "r\020\n\022*\n&CENTER2LOGIN_UpdateGameServerOnli"
  "neNum\020\013\022\034\n\030CENTER2LOGIN_AddMailResp\020\014\022\035\n"
  "\031CENTER2LOGIN_RechargeResp\020\r\022\031\n\024GAME2CEN"
  "TER_Register\020\321\017\022\033\n\026GAME2CENTER_UnRegiste"
  "r\020\322\017\022\033\n\026GAME2CENTER_ApplyRobot\020\323\017\022\037\n\032CEN"
  "TER2GAME_ApplyRobotResp\020\324\017\022 \n\033GAME2CENTE"
  "R_UpdateOnlineNum\020\325\017\022\032\n\025ROBOT2GAME_Robot"
  "Login\020\271\027\022%\n CENTER2APPRECHARGE_SendPhone"
  "Code\020\241\037\022!\n\034APPRECHARGE2CENTER_HeartBeat\020"
  "\242\037\022!\n\034CENTER2APPRECHARGE_HeartBeat\020\243\037\022 \n"
  "\033APPRECHARGE2CENTER_Register\020\244\037\022\"\n\035APPRE"
  "CHARGE2CENTER_UnRegister\020\245\037\022 \n\033RelayServ"
  "er2CENTER_Register\020\211\'\022\037\n\032RelayServer2CEN"
  "TER_AddMail\020\212\'\022\'\n\"RelayServer2CENTER_Rec"
  "hargeSuccess\020\213\'\022 \n\033RelayServer2CENTER_Wi"
  "thdraw\020\214\'*\205\017\n\010EMsgIDDB\022\020\n\014MsgIDDB_NULL\020\000"
  "\022\035\n\031CENTER2DB_UpdateOnlineNum\020\001\022\033\n\027CENTE"
  "R2DB_InitOnlineNum\020\002\022\033\n\027CENTER2DB_Regist"
  "erLogin\020\003\022\035\n\031CENTER2DB_UnregisterLogin\020\004"
  "\022\032\n\026CENTER2DB_RegisterGame\020\005\022\032\n\026CENTER2D"
  "B_LoadAllRobot\020\006\022\036\n\032DB2CENTER_LoadAllRob"
  "otResp\020\007\022\031\n\025CENTER2DB_CreateRobot\020\010\022\035\n\031D"
  "B2CENTER_CreateRobotResp\020\t\022\025\n\021CENTER2DB_"
  "AddMail\020\n\022\031\n\025DB2CENTER_AddMailResp\020\013\022\023\n\016"
  "LOGIN2DB_Login\020\351\007\022\027\n\022DB2LOGIN_LoginResp\020"
  "\352\007\022\034\n\027DB2LOGIN_LoadPlayerData\020\353\007\022\026\n\021LOGI"
  "N2DB_LoginOut\020\354\007\022\036\n\031LOGIN2DB_UpdatePlaye"
  "rInfo\020\355\007\022\031\n\024LOGIN2DB_GetMailList\020\356\007\022\035\n\030D"
  "B2LOGIN_GetMailListResp\020\357\007\022\026\n\021LOGIN2DB_R"
  "eadMail\020\360\007\022\026\n\021LOGIN2DB_PickMail\020\361\007\022\032\n\025DB"
  "2LOGIN_PickMailResp\020\362\007\022\030\n\023LOGIN2DB_Recal"
  "lMail\020\363\007\022\034\n\027DB2LOGIN_RecallMailResp\020\364\007\022\037"
  "\n\032LOGIN2DB_DeleteAllReadMail\020\365\007\022#\n\036DB2LO"
  "GIN_DeleteAllReadMailResp\020\366\007\022\036\n\031LOGIN2DB"
  "_QueryCheckInInfo\020\367\007\022\"\n\035DB2LOGIN_QueryCh"
  "eckInInfoResp\020\370\007\022\033\n\026LOGIN2DB_PlayerCheck"
  "In\020\371\007\022\037\n\032DB2LOGIN_PlayerCheckInResp\020\372\007\022 "
  "\n\033LOGIN2DB_QueryTurntableData\020\373\007\022$\n\037DB2L"
  "OGIN_QueryTurntableDataResp\020\374\007\022\033\n\026LOGIN2"
  "DB_PlayTurntable\020\375\007\022\037\n\032DB2LOGIN_PlayTurn"
  "tableResp\020\376\007\022\034\n\027LOGIN2DB_ForgetPassword\020"
  "\377\007\022 \n\033DB2LOGIN_ForgetPasswordResp\020\200\010\022\033\n\026"
  "LOGIN2DB_GetPlayerGold\020\201\010\022\037\n\032DB2LOGIN_Ge"
  "tPlayerGoldResp\020\202\010\022\032\n\025LOGIN2DB_GetVIPCon"
  "fig\020\203\010\022\036\n\031DB2LOGIN_GetVIPConfigResp\020\204\010\022\032"
  "\n\025LOGIN2DB_GetHitCoding\020\205\010\022\036\n\031DB2LOGIN_G"
  "etHitCodingResp\020\206\010\022\030\n\023LOGIN2DB_VIPUpgrad"
  "e\020\207\010\022\034\n\027DB2LOGIN_VIPUpgradeResp\020\210\010\022\032\n\025LO"
  "GIN2DB_ModifyAvatar\020\211\010\022\036\n\031DB2LOGIN_Modif"
  "yAvatarResp\020\212\010\022\037\n\032LOGIN2DB_ModifyAvatarF"
  "rame\020\213\010\022#\n\036DB2LOGIN_ModifyAvatarFrameRes"
  "p\020\214\010\022\033\n\026LOGIN2DB_GetAvatarInfo\020\215\010\022\037\n\032DB2"
  "LOGIN_GetAvatarInfoResp\020\216\010\022\035\n\030LOGIN2DB_Q"
  "ueryPlayerInfo\020\217\010\022!\n\034DB2LOGIN_QueryPlaye"
  "rInfoResp\020\220\010\022\022\n\rGAME2DB_Login\020\321\017\022\026\n\021DB2G"
  "AME_LoginResp\020\322\017\022\032\n\025GAME2DB_LoadCheatRat"
  "e\020\323\017\022\032\n\025DB2GAME_LoadCheatRate\020\324\017\022\027\n\022GAME"
  "2DB_WriteScore\020\325\017\022\027\n\022DB2GAME_WriteScore\020"
  "\326\017\022\"\n\035GAME2DB_FingerGuessWriteScore\020\327\017\022\""
  "\n\035DB2GAME_FingerGuessWriteScore\020\330\017\022#\n\036GA"
  "ME2DB_FingerGuessQueryRecord\020\331\017\022#\n\036DB2GA"
  "ME_FingerGuessRoundRecord\020\332\017\022!\n\034DB2GAME_"
  "FingerGuessDayRecord\020\333\017\022 \n\033GAME2DB_Write"
  "DisConnectData\020\334\017b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ServerCommonCmd_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ServerCommonCmd_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ServerCommonCmd_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ServerCommonCmd_2eproto = {
  false, false, descriptor_table_protodef_ServerCommonCmd_2eproto, "ServerCommonCmd.proto", 3225,
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
    case 2001:
    case 2002:
    case 2003:
    case 2004:
    case 2005:
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
