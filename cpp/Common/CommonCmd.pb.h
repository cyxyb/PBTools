// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonCmd.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonCmd_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonCmd_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_CommonCmd_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonCmd_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonCmd_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

enum EMsgIDMain : int {
  EMsgIDMain_Null = 0,
  EMsgIDMain_Login_UserInfo = 1001,
  EMsgIDMain_Game = 2001,
  EMsgIDMain_SubGame = 2002,
  EMsgIDMain_Chat = 3001,
  EMsgIDMain_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDMain_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDMain_IsValid(int value);
constexpr EMsgIDMain EMsgIDMain_MIN = EMsgIDMain_Null;
constexpr EMsgIDMain EMsgIDMain_MAX = EMsgIDMain_Chat;
constexpr int EMsgIDMain_ARRAYSIZE = EMsgIDMain_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDMain_descriptor();
template<typename T>
inline const std::string& EMsgIDMain_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMsgIDMain>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMsgIDMain_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMsgIDMain_descriptor(), enum_t_value);
}
inline bool EMsgIDMain_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EMsgIDMain* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMsgIDMain>(
    EMsgIDMain_descriptor(), name, value);
}
enum EMsgIDLogin : int {
  MsgIDLogin_Null = 0,
  MsgIDLogin_Login = 1,
  MsgIDLogin_LoginResp = 2,
  MsgIDLogin_ModifyNickName = 3,
  MsgIDLogin_ModifyNickNameResp = 4,
  MsgIDLogin_ModifyHead = 5,
  MsgIDLogin_ModifyHeadResp = 6,
  MsgIDLogin_ModifyPassword = 7,
  MsgIDLogin_ModifyPasswordResp = 8,
  MsgIDLogin_BindPhone = 9,
  MsgIDMail_GetMailList = 10,
  MsgIDMail_GetMailListResp = 11,
  MsgIDLogin_BindPhoneResp = 12,
  MsgIDMail_ReadMail = 13,
  MsgIDMail_PickMail = 14,
  MsgIDMail_PickMailResp = 15,
  MsgIDMail_RecallMail = 16,
  MsgIDMail_RecallMailResp = 17,
  MsgIDMail_DeleteAllReadMail = 18,
  MsgIDMail_DeleteAllReadMailResp = 19,
  MsgIDLogin_PhoneCode = 20,
  MsgIDLogin_PhoneCodeResp = 21,
  MsgIDLogin_GetPlayerGold = 22,
  MsgIDLogin_NotifyGameServerList = 23,
  MsgIDSign_QueryCheckInInfo = 24,
  MsgIDSign_QueryCheckInInfoResp = 25,
  MsgIDSign_PlayerCheckIn = 26,
  MsgIDSign_PlayerCheckInResp = 27,
  MsgIDTurntable_QueryData = 28,
  MsgIDTurntable_QueryDataResp = 29,
  MsgIDTurntable_PlayTurntable = 30,
  MsgIDTurntable_PlayTurntableResp = 31,
  MsgIDMail_SyncMailList = 32,
  MsgIDMail_SyncMailListResp = 33,
  MsgIDMail_AddMailResp = 34,
  MsgIDShare_QueryInfo = 35,
  MsgIDShare_QueryInfoResp = 36,
  MsgIDShare_BindParent = 37,
  MsgIDShare_BindParentResp = 38,
  MsgIDShare_QueryInviteAwardCfg = 39,
  MsgIDShare_QueryInviteAwardCfgResp = 40,
  MsgIDShare_PickInviteAward = 41,
  MsgIDShare_PickInviteAwardResp = 42,
  MsgIDShare_QueryRechargeInfo = 43,
  MsgIDShare_QueryRechargeInfoResp = 44,
  MsgIDShare_QueryRechargeRebateRecord = 45,
  MsgIDShare_QueryRechargeRebateRecordResp = 46,
  MsgIDShare_PickRechargeRebate = 47,
  MsgIDShare_PickRechargeRebateResp = 48,
  MsgIDShare_AgencyInfoRebate = 49,
  MsgIDShare_AgencyInfoRebateResp = 50,
  MsgIDLogin_ForgetPassword = 51,
  MsgIDLogin_ForgetPasswordResp = 52,
  MsgIDLogin_RechargeNotify = 53,
  MsgIDLogin_GetPlayerGoldResp = 54,
  MsgIDVIP_GetVIPConfig = 55,
  MsgIDVIP_GetVIPConfigResp = 56,
  MsgIDVIP_GetPlayerVipExp = 57,
  MsgIDVIP_GetPlayerVipExpResp = 58,
  MsgIDVIP_VIPUpgrade = 59,
  MsgIDVIP_VIPUpgradeResp = 60,
  MsgIDAvatar_GetAvatarInfo = 61,
  MsgIDAvatar_GetAvatarInfoResp = 62,
  MsgIDAvatar_ModifyAvatarFrame = 63,
  MsgIDAvatar_ModifyAvatarFrameResp = 64,
  MsgIDLogin_QueryPlayerInfo = 65,
  MsgIDLogin_QueryPlayerInfoResp = 66,
  MsgIDActive_QueryActiveInfo = 67,
  MsgIDActive_QueryActiveInfoResp = 68,
  MsgIDZMD_BroadcastTipResp = 69,
  MsgIDActive_PickActiveInfo = 70,
  MsgIDActive_PickActiveInfoResp = 71,
  MsgIDSignature_Modify = 72,
  MsgIDSignature_ModifyResp = 73,
  MsgIDRank_Get = 74,
  MsgIDRank_GetResp = 75,
  MsgIDTransfer_TransferOperate = 76,
  MsgIDTransfer_TransferOperateResp = 77,
  MsgIDTransfer_TransferReceive = 78,
  MsgIDTransfer_TransferReceiveResp = 79,
  MsgIDTransfer_TransferRecord = 80,
  MsgIDTransfer_TransferRecordResp = 81,
  MsgIDLogin_NotifyChatServerList = 82,
  MsgIDLogin_QueryChatServerList = 83,
  MsgIDLogin_GetPlayerItem = 84,
  MsgIDLogin_GetPlayerItemResp = 85,
  MsgIDLogin_TransferQueryUserInfo = 86,
  MsgIDLogin_TransferQueryUserInfoResp = 87,
  MsgIDShop_BuyGoods = 88,
  MsgIDShop_BuyGoodsResp = 89,
  MsgIDShop_QueryTrumpetPrice = 90,
  MsgIDShop_QueryTrumpetPriceResp = 91,
  MsgIDLogin_QueryServerTime = 92,
  MsgIDLogin_QueryServerTimeResp = 93,
  MsgIDLogin_Heart = 94,
  MsgIDLogin_HeartResp = 95,
  MsgIDAgent_QuerySubAgentInfo = 96,
  MsgIDAgent_QuerySubAgentInfoResp = 97,
  MsgIDLogin_KickUserResp = 98,
  MsgIDBank_TransferOperateSyncResp = 99,
  MsgIDShare_QueryShareInfo = 100,
  MsgIDShare_QueryShareInfoResp = 101,
  MsgIDShare_QueryInviteUser = 102,
  MsgIDShare_QueryInviteUserResp = 103,
  MsgIDRecharge_DotRechargeRecord = 104,
  MsgIDRecharge_DotRechargeRecordResp = 105,
  MsgIDRecharge_SyncDotData = 106,
  MsgIDOnline_OnlineActiveQuery = 107,
  MsgIDOnline_OnlineActiveQueryResp = 108,
  MsgIDOnline_OnlineActivePick = 109,
  MsgIDOnline_OnlineActivePickResp = 110,
  MsgIDActive_ActiveFBShareData = 111,
  MsgIDCDK_CDKexchangeInfo = 112,
  MsgIDCDK_CDKexchangeInfoResp = 113,
  MsgIDLogin_PersonalDetails = 114,
  MsgIDLogin_PersonalDetailsResp = 115,
  MsgIDLogin_NotifyServerOfflineResp = 116,
  MsgIDShare_NotifyUpdateVipExpResp = 117,
  MsgIDShare_NotifyAddNewSubResp = 118,
  MsgIDDelete_DeleteAccount = 119,
  MsgIDDelete_DeleteAccountResp = 120,
  MsgIDCelebrity_QueryCelebrityGoldCoin = 121,
  MsgIDCelebrity_QueryCelebrityGoldCoinResp = 122,
  MsgIDCelebrity_GiveCelebrityGoldCoin = 123,
  MsgIDCelebrity_GiveCelebrityGoldCoinResp = 124,
  EMsgIDLogin_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDLogin_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDLogin_IsValid(int value);
constexpr EMsgIDLogin EMsgIDLogin_MIN = MsgIDLogin_Null;
constexpr EMsgIDLogin EMsgIDLogin_MAX = MsgIDCelebrity_GiveCelebrityGoldCoinResp;
constexpr int EMsgIDLogin_ARRAYSIZE = EMsgIDLogin_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDLogin_descriptor();
template<typename T>
inline const std::string& EMsgIDLogin_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMsgIDLogin>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMsgIDLogin_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMsgIDLogin_descriptor(), enum_t_value);
}
inline bool EMsgIDLogin_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EMsgIDLogin* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMsgIDLogin>(
    EMsgIDLogin_descriptor(), name, value);
}
enum EMsgIDGame : int {
  MsgIDGame_Null = 0,
  MsgIDGame_Login = 1001,
  MsgIDGame_LoginResp = 1002,
  MsgIDGame_SqueezeSeatResp = 1003,
  MsgIDGame_Logout = 1004,
  MsgIDGame_AutoSitDown = 1005,
  MsgIDGame_SitDownResp = 1006,
  MsgIDGame_SyncPlayerInfoResp = 1007,
  MsgIDGame_NotifyPlayerStandUpResp = 1008,
  MsgIDGame_SyncPlayersScoreResp = 1009,
  MsgIDGame_SendGameSence = 1010,
  MsgIDGame_SendGameSenceResp = 1011,
  MsgIDGame_NotifyMessageResp = 1012,
  MsgIDGame_QueryRecord = 1015,
  MsgIDGame_QueryRoundRecordResp = 1016,
  MsgIDGame_QueryDayRecordResp = 1017,
  MsgIDGame_AddOneRecord = 1018,
  MsgIDGame_NotifyPlayerOfflineResp = 1019,
  MsgIDGame_ChangeTable = 1020,
  MsgIDGame_Pvp_GetRoomConfigResp = 1051,
  MsgIDGame_Pvp_SendTableListResp = 1053,
  MsgIDGame_Pvp_CreateTable = 1054,
  MsgIDGame_Pvp_CreateTableResp = 1055,
  MsgIDGame_Pvp_JoinTable = 1056,
  MsgIDGame_Pvp_JoinTableResp = 1057,
  MsgIDGame_Pvp_ActivateTable = 1058,
  MsgIDGame_Pvp_ActivateTableResp = 1059,
  MsgIDGame_Pvp_KickUser = 1060,
  MsgIDGame_Pvp_KickUserResp = 1061,
  MsgIDGame_Pvp_DestroyTable = 1062,
  MsgIDGame_Pvp_DestroyTableResp = 1063,
  MsgIDGame_Pvp_FastJoinTable = 1064,
  MsgIDGame_Pvp_FastJoinTableResp = 1065,
  MsgIDGame_Pvp_StandUp = 1066,
  MsgIDGame_Pvp_StandUpResp = 1067,
  MsgIDGame_Pvp_TableChangeOwunrResp = 1068,
  EMsgIDGame_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDGame_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDGame_IsValid(int value);
constexpr EMsgIDGame EMsgIDGame_MIN = MsgIDGame_Null;
constexpr EMsgIDGame EMsgIDGame_MAX = MsgIDGame_Pvp_TableChangeOwunrResp;
constexpr int EMsgIDGame_ARRAYSIZE = EMsgIDGame_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDGame_descriptor();
template<typename T>
inline const std::string& EMsgIDGame_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMsgIDGame>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMsgIDGame_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMsgIDGame_descriptor(), enum_t_value);
}
inline bool EMsgIDGame_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EMsgIDGame* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMsgIDGame>(
    EMsgIDGame_descriptor(), name, value);
}
enum EMsgIDChat : int {
  MsgIDChat_Null = 0,
  MsgIDChat_Login = 2001,
  MsgIDChat_LoginResp = 2002,
  MsgIDChat_LogoutResp = 2003,
  MsgIDChat_SendNormalMsg = 2004,
  MsgIDChat_NotifyChatNormalMsgResp = 2005,
  MsgIDChat_SendTrumpetMsg = 2006,
  MsgIDChat_NotifyChatTrumpetMsgResp = 2007,
  MsgIDChat_SyncUserInfoResp = 2008,
  MsgIDChat_SetLilitChatResp = 2009,
  MsgIDChat_GetChatHistory = 2010,
  MsgIDChat_GetChatHistoryResp = 2011,
  EMsgIDChat_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDChat_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDChat_IsValid(int value);
constexpr EMsgIDChat EMsgIDChat_MIN = MsgIDChat_Null;
constexpr EMsgIDChat EMsgIDChat_MAX = MsgIDChat_GetChatHistoryResp;
constexpr int EMsgIDChat_ARRAYSIZE = EMsgIDChat_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDChat_descriptor();
template<typename T>
inline const std::string& EMsgIDChat_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMsgIDChat>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMsgIDChat_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMsgIDChat_descriptor(), enum_t_value);
}
inline bool EMsgIDChat_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EMsgIDChat* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMsgIDChat>(
    EMsgIDChat_descriptor(), name, value);
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

template <> struct is_proto_enum< ::EMsgIDMain> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EMsgIDMain>() {
  return ::EMsgIDMain_descriptor();
}
template <> struct is_proto_enum< ::EMsgIDLogin> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EMsgIDLogin>() {
  return ::EMsgIDLogin_descriptor();
}
template <> struct is_proto_enum< ::EMsgIDGame> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EMsgIDGame>() {
  return ::EMsgIDGame_descriptor();
}
template <> struct is_proto_enum< ::EMsgIDChat> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EMsgIDChat>() {
  return ::EMsgIDChat_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonCmd_2eproto
