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
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ServerCommonCmd_2eproto[4];
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
  "\020CENTER2CHAT_MAIN\020\013*\330\022\n\031EMsgIDServerInte"
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
  "LOGIN_UpdateChatServerOnlineNum\020\026\022)\n%LOG"
  "IN2CENTER_TransferSynchronousLogin\020\027\022-\n)"
  "CENTER2LOGIN_TransferSynchronousLoginRes"
  "p\020\030\022\035\n\031CENTER2LOGIN_WithdrawResp\020\031\022\035\n\031CE"
  "NTER2LOGIN_KickUserResp\020\032\022(\n$LOGIN2CENTE"
  "R_ReceiveSynchronousLogin\020\033\022,\n(CENTER2LO"
  "GIN_ReceiveSynchronousLoginResp\020\034\022 \n\034CEN"
  "TER2LOGIN_RefreshGoldResp\020\035\022(\n$CENTER2LO"
  "GIN_NotifyServerOfflinrResp\020\036\022#\n\037LOGIN2C"
  "ENTER_NotifyUpdateVipExp\020\037\022\'\n#CENTER2LOG"
  "IN_NotifyUpdateVipExpResp\020 \022!\n\035LOGIN2CEN"
  "TER_NotifyNewInviter\020!\022%\n!CENTER2LOGIN_N"
  "otifyNewInviterResp\020\"\022#\n\037CENTER2LOGIN_No"
  "tifyWebAddVipExp\020#\022\031\n\025LOGIN2CENTER_KickU"
  "ser\020$\022*\n&CENTER2LOGIN_NotifyWebBuyWeekMo"
  "nthCard\020%\022\031\n\024GAME2CENTER_Register\020\321\017\022\033\n\026"
  "GAME2CENTER_UnRegister\020\322\017\022\033\n\026GAME2CENTER"
  "_ApplyRobot\020\323\017\022\037\n\032CENTER2GAME_ApplyRobot"
  "Resp\020\324\017\022 \n\033GAME2CENTER_UpdateOnlineNum\020\325"
  "\017\022\035\n\030GAME2CENTER_BroadcastTip\020\326\017\022\035\n\030CENT"
  "ER2GAME_KickUserResp\020\327\017\022\034\n\027GAME2CENTER_P"
  "vpAddTable\020\202\020\022\034\n\027GAME2CENTER_PvpDelTable"
  "\020\203\020\022\032\n\025ROBOT2GAME_RobotLogin\020\271\027\022%\n CENTE"
  "R2APPRECHARGE_SendPhoneCode\020\241\037\022!\n\034APPREC"
  "HARGE2CENTER_HeartBeat\020\242\037\022!\n\034CENTER2APPR"
  "ECHARGE_HeartBeat\020\243\037\022 \n\033APPRECHARGE2CENT"
  "ER_Register\020\244\037\022\"\n\035APPRECHARGE2CENTER_UnR"
  "egister\020\245\037\022 \n\033RelayServer2CENTER_Registe"
  "r\020\211\'\022\037\n\032RelayServer2CENTER_AddMail\020\212\'\022\'\n"
  "\"RelayServer2CENTER_RechargeSuccess\020\213\'\022 "
  "\n\033RelayServer2CENTER_Withdraw\020\214\'\022 \n\033Rela"
  "yServer2CENTER_KickUser\020\215\'\022!\n\034RelayServe"
  "r2CENTER_LimitChat\020\216\'\022#\n\036RelayServer2CEN"
  "TER_RefreshGold\020\217\'\022+\n&RelayServer2CENTER"
  "_NotifyServerOffline\020\220\'\022\036\n\031RelayServer2C"
  "ENTER_WebCmd\020\221\'\022\031\n\024Chat2Center_Register\020"
  "\361.\022 \n\033Chat2Center_UpdateOnlineNum\020\362.\022\037\n\032"
  "Chat2Center_SendTrumpetMsg\020\363.\022#\n\036Center2"
  "Chat_SendTrumpetMsgResp\020\364.\022\035\n\030Center2Cha"
  "t_KickUserResp\020\365.\022#\n\036Center2Chat_LimitCh"
  "atLoginResp\020\366.*\246%\n\010EMsgIDDB\022\020\n\014MsgIDDB_N"
  "ULL\020\000\022\035\n\031CENTER2DB_UpdateOnlineNum\020\001\022\034\n\030"
  "CENTER2DB_InitServerData\020\002\022\033\n\027CENTER2DB_"
  "RegisterLogin\020\003\022\035\n\031CENTER2DB_UnregisterL"
  "ogin\020\004\022\032\n\026CENTER2DB_RegisterGame\020\005\022\032\n\026CE"
  "NTER2DB_LoadAllRobot\020\006\022\036\n\032DB2CENTER_Load"
  "AllRobotResp\020\007\022\031\n\025CENTER2DB_CreateRobot\020"
  "\010\022\035\n\031DB2CENTER_CreateRobotResp\020\t\022\025\n\021CENT"
  "ER2DB_AddMail\020\n\022\031\n\025DB2CENTER_AddMailResp"
  "\020\013\022\037\n\033CENTER2DB_UpdateRankRichMan\020\016\022\035\n\031C"
  "ENTER2DB_InserRankBigWin\020\017\022\"\n\036CENTER2DB_"
  "GameServerUnRegister\020\020\022\023\n\016LOGIN2DB_Login"
  "\020\351\007\022\027\n\022DB2LOGIN_LoginResp\020\352\007\022\034\n\027DB2LOGIN"
  "_LoadPlayerData\020\353\007\022\026\n\021LOGIN2DB_LoginOut\020"
  "\354\007\022\036\n\031LOGIN2DB_UpdatePlayerInfo\020\355\007\022\031\n\024LO"
  "GIN2DB_GetMailList\020\356\007\022\035\n\030DB2LOGIN_GetMai"
  "lListResp\020\357\007\022\026\n\021LOGIN2DB_ReadMail\020\360\007\022\026\n\021"
  "LOGIN2DB_PickMail\020\361\007\022\032\n\025DB2LOGIN_PickMai"
  "lResp\020\362\007\022\030\n\023LOGIN2DB_RecallMail\020\363\007\022\034\n\027DB"
  "2LOGIN_RecallMailResp\020\364\007\022\037\n\032LOGIN2DB_Del"
  "eteAllReadMail\020\365\007\022#\n\036DB2LOGIN_DeleteAllR"
  "eadMailResp\020\366\007\022\036\n\031LOGIN2DB_QueryCheckInI"
  "nfo\020\367\007\022\"\n\035DB2LOGIN_QueryCheckInInfoResp\020"
  "\370\007\022\033\n\026LOGIN2DB_PlayerCheckIn\020\371\007\022\037\n\032DB2LO"
  "GIN_PlayerCheckInResp\020\372\007\022 \n\033LOGIN2DB_Que"
  "ryTurntableData\020\373\007\022$\n\037DB2LOGIN_QueryTurn"
  "tableDataResp\020\374\007\022\033\n\026LOGIN2DB_PlayTurntab"
  "le\020\375\007\022\037\n\032DB2LOGIN_PlayTurntableResp\020\376\007\022\034"
  "\n\027LOGIN2DB_ForgetPassword\020\377\007\022 \n\033DB2LOGIN"
  "_ForgetPasswordResp\020\200\010\022\033\n\026LOGIN2DB_GetPl"
  "ayerGold\020\201\010\022\037\n\032DB2LOGIN_GetPlayerGoldRes"
  "p\020\202\010\022\032\n\025LOGIN2DB_GetVIPConfig\020\203\010\022\036\n\031DB2L"
  "OGIN_GetVIPConfigResp\020\204\010\022\035\n\030LOGIN2DB_Get"
  "PlayerVipExp\020\205\010\022!\n\034DB2LOGIN_GetPlayerVip"
  "ExpResp\020\206\010\022\030\n\023LOGIN2DB_VIPUpgrade\020\207\010\022\034\n\027"
  "DB2LOGIN_VIPUpgradeResp\020\210\010\022\032\n\025LOGIN2DB_M"
  "odifyAvatar\020\211\010\022\036\n\031DB2LOGIN_ModifyAvatarR"
  "esp\020\212\010\022\037\n\032LOGIN2DB_ModifyAvatarFrame\020\213\010\022"
  "#\n\036DB2LOGIN_ModifyAvatarFrameResp\020\214\010\022\033\n\026"
  "LOGIN2DB_GetAvatarInfo\020\215\010\022\037\n\032DB2LOGIN_Ge"
  "tAvatarInfoResp\020\216\010\022\035\n\030LOGIN2DB_QueryPlay"
  "erInfo\020\217\010\022!\n\034DB2LOGIN_QueryPlayerInfoRes"
  "p\020\220\010\022\035\n\030LOGIN2DB_QueryActiveInfo\020\221\010\022!\n\034D"
  "B2LOGIN_QueryActiveInfoResp\020\222\010\022\034\n\027LOGIN2"
  "DB_PickActiveInfo\020\223\010\022 \n\033DB2LOGIN_PickAct"
  "iveInfoResp\020\224\010\022\035\n\030LOGIN2DB_ModifySignatu"
  "re\020\225\010\022!\n\034DB2LOGIN_ModifySignatureResp\020\226\010"
  "\022\025\n\020LOGIN2DB_GetRank\020\227\010\022\031\n\024DB2LOGIN_GetR"
  "ankResp\020\230\010\022\031\n\024LOGIN2DB_StorageCode\020\231\010\022\027\n"
  "\022LOGIN2DB_BindPhone\020\232\010\022\033\n\026DB2LOGIN_BindP"
  "honeResp\020\233\010\022\035\n\030LOGIN2DB_TransferOperate\020"
  "\234\010\022!\n\034DB2LOGIN_TransferOperateResp\020\235\010\022\034\n"
  "\027LOGIN2DB_TransferRecord\020\236\010\022 \n\033DB2LOGIN_"
  "TransferRecordResp\020\237\010\022\033\n\026LOGIN2DB_GetPla"
  "yerItem\020\240\010\022\037\n\032DB2LOGIN_GetPlayerItemResp"
  "\020\241\010\022#\n\036LOGIN2DB_TransferQueryNickname\020\242\010"
  "\022\'\n\"DB2LOGIN_TransferQueryNicknameResp\020\243"
  "\010\022\026\n\021LOGIN2DB_BuyGoods\020\244\010\022\032\n\025DB2LOGIN_Bu"
  "yGoodsResp\020\245\010\022\037\n\032LOGIN2DB_QueryTrumpetPr"
  "ice\020\246\010\022#\n\036DB2LOGIN_QueryTrumpetPriceResp"
  "\020\247\010\022\037\n\032LOGIN2DB_QuerySubAgentInfo\020\250\010\022#\n\036"
  "DB2LOGIN_QuerySubAgentInfoResp\020\251\010\022\035\n\030LOG"
  "IN2DB_TransferReceive\020\252\010\022!\n\034DB2LOGIN_Tra"
  "nsferReceiveResp\020\253\010\022\034\n\027LOGIN2DB_BindInvi"
  "teCode\020\254\010\022 \n\033DB2LOGIN_BindInviteCodeResp"
  "\020\255\010\022\034\n\027LOGIN2DB_QueryShareInfo\020\256\010\022 \n\033DB2"
  "LOGIN_QueryShareInfoResp\020\257\010\022\037\n\032LOGIN2DB_"
  "DotRechargeRecord\020\260\010\022#\n\036DB2LOGIN_DotRech"
  "argeRecordResp\020\261\010\022\031\n\024LOGIN2DB_SyncDotDat"
  "a\020\262\010\022\037\n\032LOGIN2DB_OnlineActiveQuery\020\263\010\022#\n"
  "\036DB2LOGIN_OnlineActiveQueryResp\020\264\010\022\036\n\031LO"
  "GIN2DB_OnlineActivePick\020\265\010\022\"\n\035DB2LOGIN_O"
  "nlineActivePickResp\020\266\010\022\037\n\032LOGIN2DB_Activ"
  "eFBShareData\020\267\010\022\031\n\024LOGIN2DB_CDKExchange\020"
  "\270\010\022\035\n\030DB2LOGIN_CDKExchangeResp\020\271\010\022\035\n\030DB2"
  "LOGIN_StorageCodeResp\020\272\010\022\035\n\030LOGIN2DB_Per"
  "sonalDetails\020\273\010\022!\n\034DB2LOGIN_PersonalDeta"
  "ilsResp\020\274\010\022\035\n\030LOGIN2DB_QueryInviteUser\020\275"
  "\010\022!\n\034DB2LOGIN_QueryInviteUserResp\020\276\010\022\033\n\026"
  "LOGIN2DB_DeleteAccount\020\277\010\022\037\n\032DB2LOGIN_De"
  "leteAccountResp\020\300\010\022$\n\037LOGIN2DB_QueryCele"
  "brityGoldCoin\020\301\010\022(\n#DB2LOGIN_QueryCelebr"
  "ityGoldCoinResp\020\302\010\022\"\n\035LOGIN2DB_GetCelebr"
  "ityGoldCoin\020\303\010\022&\n!DB2LOGIN_GetCelebrityG"
  "oldCoinResp\020\304\010\022&\n!LOGIN2DB_QueryInfinite"
  "AgentMyInfo\020\305\010\022*\n%DB2LOGIN_QueryInfinite"
  "AgentMyInfoResp\020\306\010\022\'\n\"LOGIN2DB_QueryInfi"
  "niteAgentSubInfo\020\307\010\022+\n&DB2LOGIN_QueryInf"
  "initeAgentSubInfoResp\020\310\010\022\031\n\024LOGIN2DB_Set"
  "SubAgent\020\311\010\022\035\n\030DB2LOGIN_SetSubAgentResp\020"
  "\312\010\022\033\n\026LOGIN2DB_RecviveRebate\020\313\010\022\037\n\032DB2LO"
  "GIN_RecviveRebateResp\020\314\010\022\034\n\027LOGIN2DB_Wee"
  "kMonthQuery\020\315\010\022 \n\033DB2LOGIN_WeekMonthQuer"
  "yResp\020\316\010\022\037\n\032LOGIN2DB_WeekMonthGetAward\020\317"
  "\010\022#\n\036DB2LOGIN_WeekMonthGetAwardResp\020\320\010\022#"
  "\n\036DB2LOGIN_StorageCodeClientResp\020\321\010\022#\n\036L"
  "OGIN2DB_InfiniteQueryUserInfo\020\322\010\022\'\n\"DB2L"
  "OGIN_InfiniteQueryUserInfoResp\020\323\010\022#\n\036LOG"
  "IN2DB_QueryRechargeGiveInfo\020\324\010\022\'\n\"DB2LOG"
  "IN_QueryRechargeGiveInfoResp\020\325\010\022\022\n\rGAME2"
  "DB_Login\020\321\017\022\026\n\021DB2GAME_LoginResp\020\322\017\022\032\n\025G"
  "AME2DB_LoadCheatRate\020\323\017\022\032\n\025DB2GAME_LoadC"
  "heatRate\020\324\017\022\027\n\022GAME2DB_WriteScore\020\325\017\022\027\n\022"
  "DB2GAME_WriteScore\020\326\017\022\"\n\035GAME2DB_FingerG"
  "uessWriteScore\020\327\017\022\"\n\035DB2GAME_FingerGuess"
  "WriteScore\020\330\017\022#\n\036GAME2DB_FingerGuessQuer"
  "yRecord\020\331\017\022#\n\036DB2GAME_FingerGuessRoundRe"
  "cord\020\332\017\022!\n\034DB2GAME_FingerGuessDayRecord\020"
  "\333\017\022 \n\033GAME2DB_WriteDisConnectData\020\334\017\022\034\n\027"
  "GAME2DB_QueryJckpotInfo\020\335\017\022 \n\033DB2GAME_Qu"
  "eryJckpotInfoResp\020\336\017\022\035\n\030GAME2DB_UpdateJc"
  "kpotInfo\020\337\017\022\025\n\020GAME2DB_LoginOut\020\340\017\022\035\n\030GA"
  "ME2DB_ClearOfflineUser\020\341\017\022\032\n\025GAME2DB_Use"
  "rReConnect\020\342\017\022\027\n\022GAME2DB_ApplyRobot\020\343\017\022\033"
  "\n\026DB2GAME_ApplyRobotResp\020\344\017\022\034\n\027GAME2DB_Q"
  "ueryPlayerGold\020\345\017\022 \n\033DB2GAME_QueryPlayer"
  "GoldResp\020\346\017\022\022\n\rCHAT2DB_Login\020\271\027\022\026\n\021DB2CH"
  "AT_LoginResp\020\272\027\022\033\n\026CHAT2DB_SendTrumpetMs"
  "g\020\273\027\022\037\n\032DB2CHAT_SendTrumpetMsgResp\020\274\027\022 \n"
  "\033App2DB_UpdatePhoneCodeState\020\241\037*q\n\021EGame"
  "BattleTypeID\022\017\n\013GAME_NORMAL\020\000\022\020\n\014GAME_HU"
  "NDRED\020\001\022\017\n\013GAME_CREATE\020\002\022\017\n\013GAME_BATTLE\020"
  "\003\022\027\n\023GAME_BANKER_HUNDERD\020\004b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ServerCommonCmd_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ServerCommonCmd_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ServerCommonCmd_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ServerCommonCmd_2eproto = {
  false, false, descriptor_table_protodef_ServerCommonCmd_2eproto, "ServerCommonCmd.proto", 7634,
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
    case 2001:
    case 2002:
    case 2003:
    case 2004:
    case 2005:
    case 2006:
    case 2007:
    case 2050:
    case 2051:
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
    case 5005:
    case 5006:
    case 5007:
    case 5008:
    case 5009:
    case 6001:
    case 6002:
    case 6003:
    case 6004:
    case 6005:
    case 6006:
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
    case 16:
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
    case 1070:
    case 1071:
    case 1072:
    case 1073:
    case 1074:
    case 1075:
    case 1076:
    case 1077:
    case 1078:
    case 1079:
    case 1080:
    case 1081:
    case 1082:
    case 1083:
    case 1084:
    case 1085:
    case 1086:
    case 1087:
    case 1088:
    case 1089:
    case 1090:
    case 1091:
    case 1092:
    case 1093:
    case 1094:
    case 1095:
    case 1096:
    case 1097:
    case 1098:
    case 1099:
    case 1100:
    case 1101:
    case 1102:
    case 1103:
    case 1104:
    case 1105:
    case 1106:
    case 1107:
    case 1108:
    case 1109:
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
    case 2016:
    case 2017:
    case 2018:
    case 2019:
    case 2020:
    case 2021:
    case 2022:
    case 3001:
    case 3002:
    case 3003:
    case 3004:
    case 4001:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EGameBattleTypeID_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ServerCommonCmd_2eproto);
  return file_level_enum_descriptors_ServerCommonCmd_2eproto[3];
}
bool EGameBattleTypeID_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
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
