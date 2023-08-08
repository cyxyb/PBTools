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
  EMsgIDMain_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDMain_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDMain_IsValid(int value);
constexpr EMsgIDMain EMsgIDMain_MIN = EMsgIDMain_Null;
constexpr EMsgIDMain EMsgIDMain_MAX = EMsgIDMain_SubGame;
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
enum EResCode : int {
  EResCode_NULL = 0,
  EResCode_InvilidMail = 1,
  EResCode_MailRecalled = 2,
  EResCode_MailPicked = 3,
  EResCode_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EResCode_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EResCode_IsValid(int value);
constexpr EResCode EResCode_MIN = EResCode_NULL;
constexpr EResCode EResCode_MAX = EResCode_MailPicked;
constexpr int EResCode_ARRAYSIZE = EResCode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EResCode_descriptor();
template<typename T>
inline const std::string& EResCode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EResCode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EResCode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EResCode_descriptor(), enum_t_value);
}
inline bool EResCode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EResCode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EResCode>(
    EResCode_descriptor(), name, value);
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
  MsgIDLogin_BindPhoneResp = 10,
  MsgIDLogin_ReadMail = 11,
  MsgIDLogin_PickMail = 12,
  MsgIDLogin_PickMailResp = 13,
  MsgIDLogin_RecallMail = 14,
  MsgIDLogin_RecallMailResp = 15,
  MsgIDLogin_DeleteAllReadMail = 16,
  MsgIDLogin_DeleteAllReadMailResp = 17,
  MsgIDLogin_PhoneCode = 18,
  MsgIDLogin_PhoneCodeResp = 19,
  MsgIDLogin_SyncPlayerGoldResp = 20,
  MsgIDLogin_NotifyGameServerList = 21,
  MsgIDLogin_QueryCheckInInfo = 22,
  MsgIDLogin_QueryCheckInInfoResp = 23,
  MsgIDLogin_PlayerCheckIn = 24,
  MsgIDLogin_PlayerCheckInResp = 25,
  EMsgIDLogin_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDLogin_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDLogin_IsValid(int value);
constexpr EMsgIDLogin EMsgIDLogin_MIN = MsgIDLogin_Null;
constexpr EMsgIDLogin EMsgIDLogin_MAX = MsgIDLogin_PlayerCheckInResp;
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
  MsgIDGame_CreateRoom = 1013,
  MsgIDGame_JoinRoom = 1014,
  MsgIDGame_QueryRecord = 1015,
  MsgIDGame_QueryRoundRecordResp = 1016,
  MsgIDGame_QueryDayRecordResp = 1017,
  MsgIDGame_AddOneRecord = 1018,
  EMsgIDGame_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDGame_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDGame_IsValid(int value);
constexpr EMsgIDGame EMsgIDGame_MIN = MsgIDGame_Null;
constexpr EMsgIDGame EMsgIDGame_MAX = MsgIDGame_AddOneRecord;
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
template <> struct is_proto_enum< ::EResCode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EResCode>() {
  return ::EResCode_descriptor();
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

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonCmd_2eproto
