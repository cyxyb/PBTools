// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerCommonCmd.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ServerCommonCmd_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ServerCommonCmd_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ServerCommonCmd_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ServerCommonCmd_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ServerCommonCmd_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

enum EMsgIDServerMain : int {
  MsgIDServerMain_Null = 0,
  LOGIN2CENTER_MANAGER = 1,
  GAME2CENTER_MANAGER = 2,
  CENTER2LOGIN_NOTIFY = 3,
  CENTER2GAME_NOTIFY = 4,
  ROBOT2GAME_MAIN = 5,
  CENTER2APPRECHARGE_MAIN = 6,
  APPRECHARGE2CENTER_MAIN = 7,
  RELAY2CENTER_MAIN = 8,
  CENTER2RELAY_MAIN = 9,
  CHAT2CENTER_MAIN = 10,
  CENTER2CHAT_MAIN = 11,
  EMsgIDServerMain_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDServerMain_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDServerMain_IsValid(int value);
constexpr EMsgIDServerMain EMsgIDServerMain_MIN = MsgIDServerMain_Null;
constexpr EMsgIDServerMain EMsgIDServerMain_MAX = CENTER2CHAT_MAIN;
constexpr int EMsgIDServerMain_ARRAYSIZE = EMsgIDServerMain_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDServerMain_descriptor();
template<typename T>
inline const std::string& EMsgIDServerMain_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMsgIDServerMain>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMsgIDServerMain_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMsgIDServerMain_descriptor(), enum_t_value);
}
inline bool EMsgIDServerMain_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EMsgIDServerMain* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMsgIDServerMain>(
    EMsgIDServerMain_descriptor(), name, value);
}
enum EMsgIDServerInternalProto : int {
  SERVER_INTERNAL_NULL = 0,
  LOGIN2CENTER_Register = 1,
  LOGIN2CENTER_UnRegister = 2,
  LOGIN2CENTER_UpdateOnlineNum = 3,
  LOGIN2CENTER_SendGold = 4,
  CENTER2LOGIN_SendGoldResp = 5,
  LOGIN2CENTER_SendPhoneCode = 6,
  LOGIN2CENTER_GetGameServerList = 7,
  CENTER2LOGIN_GetGameServerListResp = 8,
  CENTER2LOGIN_GameServerRegister = 9,
  CENTER2LOGIN_GameServerUnRegister = 10,
  CENTER2LOGIN_UpdateGameServerOnlineNum = 11,
  CENTER2LOGIN_AddMailResp = 12,
  CENTER2LOGIN_RechargeResp = 13,
  CENTER2LOGIN_BroadcastZmdTipResp = 14,
  LOGIN2CENTER_GetRank = 15,
  CENTER2LOGIN_GetRankResp = 16,
  CENTER2LOGIN_ChatServerRegister = 17,
  CENTER2LOGIN_ChatServerUnRegister = 18,
  LOGIN2CENTER_GetChatServerList = 19,
  CENTER2LOGIN_GetChatServerListResp = 20,
  LOGIN2CENTER_BroadcastTip = 21,
  CENTER2LOGIN_UpdateChatServerOnlineNum = 22,
  LOGIN2CENTER_BankSynchronousLogin = 23,
  CENTER2LOGIN_BankSynchronousLoginResp = 24,
  GAME2CENTER_Register = 2001,
  GAME2CENTER_UnRegister = 2002,
  GAME2CENTER_ApplyRobot = 2003,
  CENTER2GAME_ApplyRobotResp = 2004,
  GAME2CENTER_UpdateOnlineNum = 2005,
  GAME2CENTER_BroadcastTip = 2006,
  ROBOT2GAME_RobotLogin = 3001,
  CENTER2APPRECHARGE_SendPhoneCode = 4001,
  APPRECHARGE2CENTER_HeartBeat = 4002,
  CENTER2APPRECHARGE_HeartBeat = 4003,
  APPRECHARGE2CENTER_Register = 4004,
  APPRECHARGE2CENTER_UnRegister = 4005,
  RelayServer2CENTER_Register = 5001,
  RelayServer2CENTER_AddMail = 5002,
  RelayServer2CENTER_RechargeSuccess = 5003,
  RelayServer2CENTER_Withdraw = 5004,
  Chat2Center_Register = 6001,
  Chat2Center_UpdateOnlineNum = 6002,
  Chat2Center_SendTrumpetMsg = 6003,
  Center2Chat_SendTrumpetMsgResp = 6004,
  EMsgIDServerInternalProto_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDServerInternalProto_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDServerInternalProto_IsValid(int value);
constexpr EMsgIDServerInternalProto EMsgIDServerInternalProto_MIN = SERVER_INTERNAL_NULL;
constexpr EMsgIDServerInternalProto EMsgIDServerInternalProto_MAX = Center2Chat_SendTrumpetMsgResp;
constexpr int EMsgIDServerInternalProto_ARRAYSIZE = EMsgIDServerInternalProto_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDServerInternalProto_descriptor();
template<typename T>
inline const std::string& EMsgIDServerInternalProto_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMsgIDServerInternalProto>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMsgIDServerInternalProto_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMsgIDServerInternalProto_descriptor(), enum_t_value);
}
inline bool EMsgIDServerInternalProto_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EMsgIDServerInternalProto* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMsgIDServerInternalProto>(
    EMsgIDServerInternalProto_descriptor(), name, value);
}
enum EMsgIDDB : int {
  MsgIDDB_NULL = 0,
  CENTER2DB_UpdateOnlineNum = 1,
  CENTER2DB_InitOnlineNum = 2,
  CENTER2DB_RegisterLogin = 3,
  CENTER2DB_UnregisterLogin = 4,
  CENTER2DB_RegisterGame = 5,
  CENTER2DB_LoadAllRobot = 6,
  DB2CENTER_LoadAllRobotResp = 7,
  CENTER2DB_CreateRobot = 8,
  DB2CENTER_CreateRobotResp = 9,
  CENTER2DB_AddMail = 10,
  DB2CENTER_AddMailResp = 11,
  CENTER2DB_UpdateRankRichMan = 14,
  CENTER2DB_InserRankBigWin = 15,
  LOGIN2DB_Login = 1001,
  DB2LOGIN_LoginResp = 1002,
  DB2LOGIN_LoadPlayerData = 1003,
  LOGIN2DB_LoginOut = 1004,
  LOGIN2DB_UpdatePlayerInfo = 1005,
  LOGIN2DB_GetMailList = 1006,
  DB2LOGIN_GetMailListResp = 1007,
  LOGIN2DB_ReadMail = 1008,
  LOGIN2DB_PickMail = 1009,
  DB2LOGIN_PickMailResp = 1010,
  LOGIN2DB_RecallMail = 1011,
  DB2LOGIN_RecallMailResp = 1012,
  LOGIN2DB_DeleteAllReadMail = 1013,
  DB2LOGIN_DeleteAllReadMailResp = 1014,
  LOGIN2DB_QueryCheckInInfo = 1015,
  DB2LOGIN_QueryCheckInInfoResp = 1016,
  LOGIN2DB_PlayerCheckIn = 1017,
  DB2LOGIN_PlayerCheckInResp = 1018,
  LOGIN2DB_QueryTurntableData = 1019,
  DB2LOGIN_QueryTurntableDataResp = 1020,
  LOGIN2DB_PlayTurntable = 1021,
  DB2LOGIN_PlayTurntableResp = 1022,
  LOGIN2DB_ForgetPassword = 1023,
  DB2LOGIN_ForgetPasswordResp = 1024,
  LOGIN2DB_GetPlayerGold = 1025,
  DB2LOGIN_GetPlayerGoldResp = 1026,
  LOGIN2DB_GetVIPConfig = 1027,
  DB2LOGIN_GetVIPConfigResp = 1028,
  LOGIN2DB_GetHitCoding = 1029,
  DB2LOGIN_GetHitCodingResp = 1030,
  LOGIN2DB_VIPUpgrade = 1031,
  DB2LOGIN_VIPUpgradeResp = 1032,
  LOGIN2DB_ModifyAvatar = 1033,
  DB2LOGIN_ModifyAvatarResp = 1034,
  LOGIN2DB_ModifyAvatarFrame = 1035,
  DB2LOGIN_ModifyAvatarFrameResp = 1036,
  LOGIN2DB_GetAvatarInfo = 1037,
  DB2LOGIN_GetAvatarInfoResp = 1038,
  LOGIN2DB_QueryPlayerInfo = 1039,
  DB2LOGIN_QueryPlayerInfoResp = 1040,
  LOGIN2DB_QueryActiveInfo = 1041,
  DB2LOGIN_QueryActiveInfoResp = 1042,
  LOGIN2DB_PickActiveInfo = 1043,
  DB2LOGIN_PickActiveInfoResp = 1044,
  LOGIN2DB_ModifySignature = 1045,
  DB2LOGIN_ModifySignatureResp = 1046,
  LOGIN2DB_GetRank = 1047,
  DB2LOGIN_GetRankResp = 1048,
  LOGIN2DB_StorageCode = 1049,
  LOGIN2DB_BindPhone = 1050,
  DB2LOGIN_BindPhoneResp = 1051,
  LOGIN2DB_BankOpenBank = 1052,
  DB2LOGIN_BankOpenBankResp = 1053,
  LOGIN2DB_BankOperate = 1054,
  DB2LOGIN_BankOperateResp = 1055,
  LOGIN2DB_BankTransfer = 1056,
  DB2LOGIN_BankTransferResp = 1057,
  LOGIN2DB_BankRecord = 1058,
  DB2LOGIN_BankRecordResp = 1059,
  LOGIN2DB_BankChangePassword = 1060,
  DB2LOGIN_BankChangePasswordResp = 1061,
  LOGIN2DB_BankSetPassword = 1062,
  DB2LOGIN_BankSetPasswordResp = 1063,
  LOGIN2DB_GetPlayerItem = 1064,
  DB2LOGIN_GetPlayerItemResp = 1065,
  LOGIN2DB_BankQueryNickname = 1066,
  DB2LOGIN_BankQueryNicknameResp = 1067,
  LOGIN2DB_BuyGoods = 1068,
  DB2LOGIN_BuyGoodsResp = 1069,
  GAME2DB_Login = 2001,
  DB2GAME_LoginResp = 2002,
  GAME2DB_LoadCheatRate = 2003,
  DB2GAME_LoadCheatRate = 2004,
  GAME2DB_WriteScore = 2005,
  DB2GAME_WriteScore = 2006,
  GAME2DB_FingerGuessWriteScore = 2007,
  DB2GAME_FingerGuessWriteScore = 2008,
  GAME2DB_FingerGuessQueryRecord = 2009,
  DB2GAME_FingerGuessRoundRecord = 2010,
  DB2GAME_FingerGuessDayRecord = 2011,
  GAME2DB_WriteDisConnectData = 2012,
  GAME2DB_QueryJckpotInfo = 2013,
  DB2GAME_QueryJckpotInfoResp = 2014,
  GAME2DB_UpdateJckpotInfo = 2015,
  CHAT2DB_Login = 3001,
  DB2CHAT_LoginResp = 3002,
  CHAT2DB_SendTrumpetMsg = 3003,
  DB2CHAT_SendTrumpetMsgResp = 3004,
  EMsgIDDB_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDDB_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDDB_IsValid(int value);
constexpr EMsgIDDB EMsgIDDB_MIN = MsgIDDB_NULL;
constexpr EMsgIDDB EMsgIDDB_MAX = DB2CHAT_SendTrumpetMsgResp;
constexpr int EMsgIDDB_ARRAYSIZE = EMsgIDDB_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDDB_descriptor();
template<typename T>
inline const std::string& EMsgIDDB_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMsgIDDB>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMsgIDDB_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMsgIDDB_descriptor(), enum_t_value);
}
inline bool EMsgIDDB_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EMsgIDDB* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMsgIDDB>(
    EMsgIDDB_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::EMsgIDServerMain> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EMsgIDServerMain>() {
  return ::EMsgIDServerMain_descriptor();
}
template <> struct is_proto_enum< ::EMsgIDServerInternalProto> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EMsgIDServerInternalProto>() {
  return ::EMsgIDServerInternalProto_descriptor();
}
template <> struct is_proto_enum< ::EMsgIDDB> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EMsgIDDB>() {
  return ::EMsgIDDB_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ServerCommonCmd_2eproto
