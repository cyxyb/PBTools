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
  "\n\017CommonCmd.proto*p\n\nEMsgIDMain\022\023\n\017EMsgI"
  "DMain_Null\020\000\022\036\n\031EMsgIDMain_Login_UserInf"
  "o\020\351\007\022\024\n\017EMsgIDMain_Game\020\321\017\022\027\n\022EMsgIDMain"
  "_SubGame\020\322\017*k\n\010EResCode\022\021\n\rEResCode_NULL"
  "\020\000\022\030\n\024EResCode_InvilidMail\020\001\022\031\n\025EResCode"
  "_MailRecalled\020\002\022\027\n\023EResCode_MailPicked\020\003"
  "*\221\022\n\013EMsgIDLogin\022\023\n\017MsgIDLogin_Null\020\000\022\024\n"
  "\020MsgIDLogin_Login\020\001\022\030\n\024MsgIDLogin_LoginR"
  "esp\020\002\022\035\n\031MsgIDLogin_ModifyNickName\020\003\022!\n\035"
  "MsgIDLogin_ModifyNickNameResp\020\004\022\031\n\025MsgID"
  "Login_ModifyHead\020\005\022\035\n\031MsgIDLogin_ModifyH"
  "eadResp\020\006\022\035\n\031MsgIDLogin_ModifyPassword\020\007"
  "\022!\n\035MsgIDLogin_ModifyPasswordResp\020\010\022\030\n\024M"
  "sgIDLogin_BindPhone\020\t\022\031\n\025MsgIDMail_GetMa"
  "ilList\020\n\022\035\n\031MsgIDMail_GetMailListResp\020\013\022"
  "\034\n\030MsgIDLogin_BindPhoneResp\020\014\022\026\n\022MsgIDMa"
  "il_ReadMail\020\r\022\026\n\022MsgIDMail_PickMail\020\016\022\032\n"
  "\026MsgIDMail_PickMailResp\020\017\022\030\n\024MsgIDMail_R"
  "ecallMail\020\020\022\034\n\030MsgIDMail_RecallMailResp\020"
  "\021\022\037\n\033MsgIDMail_DeleteAllReadMail\020\022\022#\n\037Ms"
  "gIDMail_DeleteAllReadMailResp\020\023\022\030\n\024MsgID"
  "Login_PhoneCode\020\024\022\034\n\030MsgIDLogin_PhoneCod"
  "eResp\020\025\022!\n\035MsgIDLogin_SyncPlayerGoldResp"
  "\020\026\022#\n\037MsgIDLogin_NotifyGameServerList\020\027\022"
  "\036\n\032MsgIDSign_QueryCheckInInfo\020\030\022\"\n\036MsgID"
  "Sign_QueryCheckInInfoResp\020\031\022\033\n\027MsgIDSign"
  "_PlayerCheckIn\020\032\022\037\n\033MsgIDSign_PlayerChec"
  "kInResp\020\033\022\034\n\030MsgIDTurntable_QueryData\020\034\022"
  " \n\034MsgIDTurntable_QueryDataResp\020\035\022 \n\034Msg"
  "IDTurntable_PlayTurntable\020\036\022$\n MsgIDTurn"
  "table_PlayTurntableResp\020\037\022\032\n\026MsgIDMail_S"
  "yncMailList\020 \022\036\n\032MsgIDMail_SyncMailListR"
  "esp\020!\022\031\n\025MsgIDMail_AddMailResp\020\"\022\030\n\024MsgI"
  "DShare_QueryInfo\020#\022\034\n\030MsgIDShare_QueryIn"
  "foResp\020$\022\031\n\025MsgIDShare_BindParent\020%\022\035\n\031M"
  "sgIDShare_BindParentResp\020&\022\"\n\036MsgIDShare"
  "_QueryInviteAwardCfg\020\'\022&\n\"MsgIDShare_Que"
  "ryInviteAwardCfgResp\020(\022\036\n\032MsgIDShare_Pic"
  "kInviteAward\020)\022\"\n\036MsgIDShare_PickInviteA"
  "wardResp\020*\022 \n\034MsgIDShare_QueryRechargeIn"
  "fo\020+\022$\n MsgIDShare_QueryRechargeInfoResp"
  "\020,\022(\n$MsgIDShare_QueryRechargeRebateReco"
  "rd\020-\022,\n(MsgIDShare_QueryRechargeRebateRe"
  "cordResp\020.\022!\n\035MsgIDShare_PickRechargeReb"
  "ate\020/\022%\n!MsgIDShare_PickRechargeRebateRe"
  "sp\0200\022\037\n\033MsgIDShare_AgencyInfoRebate\0201\022#\n"
  "\037MsgIDShare_AgencyInfoRebateResp\0202\022\035\n\031Ms"
  "gIDLogin_ForgetPassword\0203\022!\n\035MsgIDLogin_"
  "ForgetPasswordResp\0204\022\035\n\031MsgIDLogin_Recha"
  "rgeNotify\0205\022 \n\034MsgIDLogin_GetPlayerGoldR"
  "esp\0206\022\031\n\025MsgIDVIP_GetVIPConfig\0207\022\035\n\031MsgI"
  "DVIP_GetVIPConfigResp\0208\022\037\n\033MsgIDVIP_GetP"
  "layerHitCoding\0209\022#\n\037MsgIDVIP_GetPlayerHi"
  "tCodingResp\020:\022\027\n\023MsgIDVIP_VIPUpgrade\020;\022\033"
  "\n\027MsgIDVIP_VIPUpgradeResp\020<\022\035\n\031MsgIDAvat"
  "ar_GetAvatarInfo\020=\022!\n\035MsgIDAvatar_GetAva"
  "tarInfoResp\020>\022!\n\035MsgIDAvatar_ModifyAvata"
  "rFrame\020\?\022%\n!MsgIDAvatar_ModifyAvatarFram"
  "eResp\020@\022\036\n\032MsgIDLogin_QueryPlayerInfo\020A\022"
  "\"\n\036MsgIDLogin_QueryPlayerInfoResp\020B\022\037\n\033M"
  "sgIDActive_QueryActiveInfo\020C\022#\n\037MsgIDAct"
  "ive_QueryActiveInfoResp\020D\022\035\n\031MsgIDZMD_Br"
  "oadcastTipResp\020E\022\036\n\032MsgIDActive_PickActi"
  "veInfo\020F\022\"\n\036MsgIDActive_PickActiveInfoRe"
  "sp\020G*\356\004\n\nEMsgIDGame\022\022\n\016MsgIDGame_Null\020\000\022"
  "\024\n\017MsgIDGame_Login\020\351\007\022\030\n\023MsgIDGame_Login"
  "Resp\020\352\007\022\036\n\031MsgIDGame_SqueezeSeatResp\020\353\007\022"
  "\025\n\020MsgIDGame_Logout\020\354\007\022\032\n\025MsgIDGame_Auto"
  "SitDown\020\355\007\022\032\n\025MsgIDGame_SitDownResp\020\356\007\022!"
  "\n\034MsgIDGame_SyncPlayerInfoResp\020\357\007\022&\n!Msg"
  "IDGame_NotifyPlayerStandUpResp\020\360\007\022#\n\036Msg"
  "IDGame_SyncPlayersScoreResp\020\361\007\022\034\n\027MsgIDG"
  "ame_SendGameSence\020\362\007\022 \n\033MsgIDGame_SendGa"
  "meSenceResp\020\363\007\022 \n\033MsgIDGame_NotifyMessag"
  "eResp\020\364\007\022\031\n\024MsgIDGame_CreateRoom\020\365\007\022\027\n\022M"
  "sgIDGame_JoinRoom\020\366\007\022\032\n\025MsgIDGame_QueryR"
  "ecord\020\367\007\022#\n\036MsgIDGame_QueryRoundRecordRe"
  "sp\020\370\007\022!\n\034MsgIDGame_QueryDayRecordResp\020\371\007"
  "\022\033\n\026MsgIDGame_AddOneRecord\020\372\007\022&\n!MsgIDGa"
  "me_NotifyPlayerOfflineResp\020\373\007b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_CommonCmd_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_CommonCmd_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CommonCmd_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonCmd_2eproto = {
  false, false, descriptor_table_protodef_CommonCmd_2eproto, "CommonCmd.proto", 3197,
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
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EResCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommonCmd_2eproto);
  return file_level_enum_descriptors_CommonCmd_2eproto[1];
}
bool EResCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDLogin_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommonCmd_2eproto);
  return file_level_enum_descriptors_CommonCmd_2eproto[2];
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
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDGame_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommonCmd_2eproto);
  return file_level_enum_descriptors_CommonCmd_2eproto[3];
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
