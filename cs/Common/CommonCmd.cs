// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Proto/Common/CommonCmd.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
/// <summary>Holder for reflection information generated from Proto/Common/CommonCmd.proto</summary>
public static partial class CommonCmdReflection {

  #region Descriptor
  /// <summary>File descriptor for Proto/Common/CommonCmd.proto</summary>
  public static pbr::FileDescriptor Descriptor {
    get { return descriptor; }
  }
  private static pbr::FileDescriptor descriptor;

  static CommonCmdReflection() {
    byte[] descriptorData = global::System.Convert.FromBase64String(
        string.Concat(
          "ChxQcm90by9Db21tb24vQ29tbW9uQ21kLnByb3RvKnAKCkVNc2dJRE1haW4S",
          "EwoPRU1zZ0lETWFpbl9OdWxsEAASHgoZRU1zZ0lETWFpbl9Mb2dpbl9Vc2Vy",
          "SW5mbxDpBxIUCg9FTXNnSURNYWluX0dhbWUQ0Q8SFwoSRU1zZ0lETWFpbl9T",
          "dWJHYW1lENIPKmsKCEVSZXNDb2RlEhEKDUVSZXNDb2RlX05VTEwQABIYChRF",
          "UmVzQ29kZV9JbnZpbGlkTWFpbBABEhkKFUVSZXNDb2RlX01haWxSZWNhbGxl",
          "ZBACEhcKE0VSZXNDb2RlX01haWxQaWNrZWQQAyqLFgoLRU1zZ0lETG9naW4S",
          "EwoPTXNnSURMb2dpbl9OdWxsEAASFAoQTXNnSURMb2dpbl9Mb2dpbhABEhgK",
          "FE1zZ0lETG9naW5fTG9naW5SZXNwEAISHQoZTXNnSURMb2dpbl9Nb2RpZnlO",
          "aWNrTmFtZRADEiEKHU1zZ0lETG9naW5fTW9kaWZ5Tmlja05hbWVSZXNwEAQS",
          "GQoVTXNnSURMb2dpbl9Nb2RpZnlIZWFkEAUSHQoZTXNnSURMb2dpbl9Nb2Rp",
          "ZnlIZWFkUmVzcBAGEh0KGU1zZ0lETG9naW5fTW9kaWZ5UGFzc3dvcmQQBxIh",
          "Ch1Nc2dJRExvZ2luX01vZGlmeVBhc3N3b3JkUmVzcBAIEhgKFE1zZ0lETG9n",
          "aW5fQmluZFBob25lEAkSGQoVTXNnSURNYWlsX0dldE1haWxMaXN0EAoSHQoZ",
          "TXNnSURNYWlsX0dldE1haWxMaXN0UmVzcBALEhwKGE1zZ0lETG9naW5fQmlu",
          "ZFBob25lUmVzcBAMEhYKEk1zZ0lETWFpbF9SZWFkTWFpbBANEhYKEk1zZ0lE",
          "TWFpbF9QaWNrTWFpbBAOEhoKFk1zZ0lETWFpbF9QaWNrTWFpbFJlc3AQDxIY",
          "ChRNc2dJRE1haWxfUmVjYWxsTWFpbBAQEhwKGE1zZ0lETWFpbF9SZWNhbGxN",
          "YWlsUmVzcBAREh8KG01zZ0lETWFpbF9EZWxldGVBbGxSZWFkTWFpbBASEiMK",
          "H01zZ0lETWFpbF9EZWxldGVBbGxSZWFkTWFpbFJlc3AQExIYChRNc2dJRExv",
          "Z2luX1Bob25lQ29kZRAUEhwKGE1zZ0lETG9naW5fUGhvbmVDb2RlUmVzcBAV",
          "EiEKHU1zZ0lETG9naW5fU3luY1BsYXllckdvbGRSZXNwEBYSIwofTXNnSURM",
          "b2dpbl9Ob3RpZnlHYW1lU2VydmVyTGlzdBAXEh4KGk1zZ0lEU2lnbl9RdWVy",
          "eUNoZWNrSW5JbmZvEBgSIgoeTXNnSURTaWduX1F1ZXJ5Q2hlY2tJbkluZm9S",
          "ZXNwEBkSGwoXTXNnSURTaWduX1BsYXllckNoZWNrSW4QGhIfChtNc2dJRFNp",
          "Z25fUGxheWVyQ2hlY2tJblJlc3AQGxIcChhNc2dJRFR1cm50YWJsZV9RdWVy",
          "eURhdGEQHBIgChxNc2dJRFR1cm50YWJsZV9RdWVyeURhdGFSZXNwEB0SIAoc",
          "TXNnSURUdXJudGFibGVfUGxheVR1cm50YWJsZRAeEiQKIE1zZ0lEVHVybnRh",
          "YmxlX1BsYXlUdXJudGFibGVSZXNwEB8SGgoWTXNnSURNYWlsX1N5bmNNYWls",
          "TGlzdBAgEh4KGk1zZ0lETWFpbF9TeW5jTWFpbExpc3RSZXNwECESGQoVTXNn",
          "SURNYWlsX0FkZE1haWxSZXNwECISGAoUTXNnSURTaGFyZV9RdWVyeUluZm8Q",
          "IxIcChhNc2dJRFNoYXJlX1F1ZXJ5SW5mb1Jlc3AQJBIZChVNc2dJRFNoYXJl",
          "X0JpbmRQYXJlbnQQJRIdChlNc2dJRFNoYXJlX0JpbmRQYXJlbnRSZXNwECYS",
          "IgoeTXNnSURTaGFyZV9RdWVyeUludml0ZUF3YXJkQ2ZnECcSJgoiTXNnSURT",
          "aGFyZV9RdWVyeUludml0ZUF3YXJkQ2ZnUmVzcBAoEh4KGk1zZ0lEU2hhcmVf",
          "UGlja0ludml0ZUF3YXJkECkSIgoeTXNnSURTaGFyZV9QaWNrSW52aXRlQXdh",
          "cmRSZXNwECoSIAocTXNnSURTaGFyZV9RdWVyeVJlY2hhcmdlSW5mbxArEiQK",
          "IE1zZ0lEU2hhcmVfUXVlcnlSZWNoYXJnZUluZm9SZXNwECwSKAokTXNnSURT",
          "aGFyZV9RdWVyeVJlY2hhcmdlUmViYXRlUmVjb3JkEC0SLAooTXNnSURTaGFy",
          "ZV9RdWVyeVJlY2hhcmdlUmViYXRlUmVjb3JkUmVzcBAuEiEKHU1zZ0lEU2hh",
          "cmVfUGlja1JlY2hhcmdlUmViYXRlEC8SJQohTXNnSURTaGFyZV9QaWNrUmVj",
          "aGFyZ2VSZWJhdGVSZXNwEDASHwobTXNnSURTaGFyZV9BZ2VuY3lJbmZvUmVi",
          "YXRlEDESIwofTXNnSURTaGFyZV9BZ2VuY3lJbmZvUmViYXRlUmVzcBAyEh0K",
          "GU1zZ0lETG9naW5fRm9yZ2V0UGFzc3dvcmQQMxIhCh1Nc2dJRExvZ2luX0Zv",
          "cmdldFBhc3N3b3JkUmVzcBA0Eh0KGU1zZ0lETG9naW5fUmVjaGFyZ2VOb3Rp",
          "ZnkQNRIgChxNc2dJRExvZ2luX0dldFBsYXllckdvbGRSZXNwEDYSGQoVTXNn",
          "SURWSVBfR2V0VklQQ29uZmlnEDcSHQoZTXNnSURWSVBfR2V0VklQQ29uZmln",
          "UmVzcBA4Eh8KG01zZ0lEVklQX0dldFBsYXllckhpdENvZGluZxA5EiMKH01z",
          "Z0lEVklQX0dldFBsYXllckhpdENvZGluZ1Jlc3AQOhIXChNNc2dJRFZJUF9W",
          "SVBVcGdyYWRlEDsSGwoXTXNnSURWSVBfVklQVXBncmFkZVJlc3AQPBIdChlN",
          "c2dJREF2YXRhcl9HZXRBdmF0YXJJbmZvED0SIQodTXNnSURBdmF0YXJfR2V0",
          "QXZhdGFySW5mb1Jlc3AQPhIhCh1Nc2dJREF2YXRhcl9Nb2RpZnlBdmF0YXJG",
          "cmFtZRA/EiUKIU1zZ0lEQXZhdGFyX01vZGlmeUF2YXRhckZyYW1lUmVzcBBA",
          "Eh4KGk1zZ0lETG9naW5fUXVlcnlQbGF5ZXJJbmZvEEESIgoeTXNnSURMb2dp",
          "bl9RdWVyeVBsYXllckluZm9SZXNwEEISHwobTXNnSURBY3RpdmVfUXVlcnlB",
          "Y3RpdmVJbmZvEEMSIwofTXNnSURBY3RpdmVfUXVlcnlBY3RpdmVJbmZvUmVz",
          "cBBEEh0KGU1zZ0lEWk1EX0Jyb2FkY2FzdFRpcFJlc3AQRRIeChpNc2dJREFj",
          "dGl2ZV9QaWNrQWN0aXZlSW5mbxBGEiIKHk1zZ0lEQWN0aXZlX1BpY2tBY3Rp",
          "dmVJbmZvUmVzcBBHEhkKFU1zZ0lEU2lnbmF0dXJlX01vZGlmeRBIEh0KGU1z",
          "Z0lEU2lnbmF0dXJlX01vZGlmeVJlc3AQSRIRCg1Nc2dJRFJhbmtfR2V0EEoS",
          "FQoRTXNnSURSYW5rX0dldFJlc3AQSxIZChVNc2dJREJhbmtfU2V0UGFzc3dv",
          "cmQQTBIdChlNc2dJREJhbmtfU2V0UGFzc3dvcmRSZXNwEE0SGQoVTXNnSURC",
          "YW5rX1ZlcmlmeVBob25lEE4SHQoZTXNnSURCYW5rX1ZlcmlmeVBob25lUmVz",
          "cBBPEhwKGE1zZ0lEQmFua19DaGFuZ2VQYXNzd29yZBBQEiAKHE1zZ0lEQmFu",
          "a19DaGFuZ2VQYXNzd29yZFJlc3AQURIWChJNc2dJREJhbmtfT3BlbkJhbmsQ",
          "UhIaChZNc2dJREJhbmtfT3BlbkJhbmtSZXNwEFMSGQoVTXNnSURCYW5rX0Jh",
          "bmtPcGVyYXRlEFQSHQoZTXNnSURCYW5rX0JhbmtPcGVyYXRlUmVzcBBVEhoK",
          "Fk1zZ0lEQmFua19CYW5rVHJhbnNmZXIQVhIeChpNc2dJREJhbmtfQmFua1Ry",
          "YW5zZmVyUmVzcBBXEhgKFE1zZ0lEQmFua19CYW5rUmVjb3JkEFgSHAoYTXNn",
          "SURCYW5rX0JhbmtSZWNvcmRSZXNwEFkq7gQKCkVNc2dJREdhbWUSEgoOTXNn",
          "SURHYW1lX051bGwQABIUCg9Nc2dJREdhbWVfTG9naW4Q6QcSGAoTTXNnSURH",
          "YW1lX0xvZ2luUmVzcBDqBxIeChlNc2dJREdhbWVfU3F1ZWV6ZVNlYXRSZXNw",
          "EOsHEhUKEE1zZ0lER2FtZV9Mb2dvdXQQ7AcSGgoVTXNnSURHYW1lX0F1dG9T",
          "aXREb3duEO0HEhoKFU1zZ0lER2FtZV9TaXREb3duUmVzcBDuBxIhChxNc2dJ",
          "REdhbWVfU3luY1BsYXllckluZm9SZXNwEO8HEiYKIU1zZ0lER2FtZV9Ob3Rp",
          "ZnlQbGF5ZXJTdGFuZFVwUmVzcBDwBxIjCh5Nc2dJREdhbWVfU3luY1BsYXll",
          "cnNTY29yZVJlc3AQ8QcSHAoXTXNnSURHYW1lX1NlbmRHYW1lU2VuY2UQ8gcS",
          "IAobTXNnSURHYW1lX1NlbmRHYW1lU2VuY2VSZXNwEPMHEiAKG01zZ0lER2Ft",
          "ZV9Ob3RpZnlNZXNzYWdlUmVzcBD0BxIZChRNc2dJREdhbWVfQ3JlYXRlUm9v",
          "bRD1BxIXChJNc2dJREdhbWVfSm9pblJvb20Q9gcSGgoVTXNnSURHYW1lX1F1",
          "ZXJ5UmVjb3JkEPcHEiMKHk1zZ0lER2FtZV9RdWVyeVJvdW5kUmVjb3JkUmVz",
          "cBD4BxIhChxNc2dJREdhbWVfUXVlcnlEYXlSZWNvcmRSZXNwEPkHEhsKFk1z",
          "Z0lER2FtZV9BZGRPbmVSZWNvcmQQ+gcSJgohTXNnSURHYW1lX05vdGlmeVBs",
          "YXllck9mZmxpbmVSZXNwEPsHYgZwcm90bzM="));
    descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
        new pbr::FileDescriptor[] { },
        new pbr::GeneratedClrTypeInfo(new[] {typeof(global::EMsgIDMain), typeof(global::EResCode), typeof(global::EMsgIDLogin), typeof(global::EMsgIDGame), }, null, null));
  }
  #endregion

}
#region Enums
public enum EMsgIDMain {
  [pbr::OriginalName("EMsgIDMain_Null")] Null = 0,
  /// <summary>
  ///玩家信息
  /// </summary>
  [pbr::OriginalName("EMsgIDMain_Login_UserInfo")] LoginUserInfo = 1001,
  /// <summary>
  ///游戏服务器
  /// </summary>
  [pbr::OriginalName("EMsgIDMain_Game")] Game = 2001,
  /// <summary>
  ///子游戏主消息号
  /// </summary>
  [pbr::OriginalName("EMsgIDMain_SubGame")] SubGame = 2002,
}

public enum EResCode {
  [pbr::OriginalName("EResCode_NULL")] Null = 0,
  /// <summary>
  ///无效邮件
  /// </summary>
  [pbr::OriginalName("EResCode_InvilidMail")] InvilidMail = 1,
  /// <summary>
  ///邮件已被撤回
  /// </summary>
  [pbr::OriginalName("EResCode_MailRecalled")] MailRecalled = 2,
  /// <summary>
  ///邮件已被领取
  /// </summary>
  [pbr::OriginalName("EResCode_MailPicked")] MailPicked = 3,
}

public enum EMsgIDLogin {
  [pbr::OriginalName("MsgIDLogin_Null")] MsgIdloginNull = 0,
  /// <summary>
  ///玩家登录(MsgPlayerLogin)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_Login")] MsgIdloginLogin = 1,
  /// <summary>
  ///玩家登录返回(MsgPlayerLoginResp)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_LoginResp")] MsgIdloginLoginResp = 2,
  /// <summary>
  ///修改玩家昵称(MsgCommonStr)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_ModifyNickName")] MsgIdloginModifyNickName = 3,
  /// <summary>
  ///修改玩家昵称返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_ModifyNickNameResp")] MsgIdloginModifyNickNameResp = 4,
  /// <summary>
  ///修改玩家头像(MsgCommonStr)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_ModifyHead")] MsgIdloginModifyHead = 5,
  /// <summary>
  ///修改玩家头像返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_ModifyHeadResp")] MsgIdloginModifyHeadResp = 6,
  /// <summary>
  ///修改玩家登录密码(MsgModifyPassword)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_ModifyPassword")] MsgIdloginModifyPassword = 7,
  /// <summary>
  ///修改玩家登录密码返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_ModifyPasswordResp")] MsgIdloginModifyPasswordResp = 8,
  /// <summary>
  ///绑定手机(MsgCommonStr)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_BindPhone")] MsgIdloginBindPhone = 9,
  /// <summary>
  ///获取邮件列表(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_GetMailList")] MsgIdmailGetMailList = 10,
  /// <summary>
  ///获取邮件列表返回(MsgMailsInfo)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_GetMailListResp")] MsgIdmailGetMailListResp = 11,
  /// <summary>
  ///绑定手机返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_BindPhoneResp")] MsgIdloginBindPhoneResp = 12,
  /// <summary>
  ///读取邮件(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_ReadMail")] MsgIdmailReadMail = 13,
  /// <summary>
  ///领取邮件(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_PickMail")] MsgIdmailPickMail = 14,
  /// <summary>
  ///领取邮件返回(MsgCommonN64)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_PickMailResp")] MsgIdmailPickMailResp = 15,
  /// <summary>
  ///撤回邮件(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_RecallMail")] MsgIdmailRecallMail = 16,
  /// <summary>
  ///撤回邮件返回(0:成功 非0:查看返回码)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_RecallMailResp")] MsgIdmailRecallMailResp = 17,
  /// <summary>
  ///删除已读邮件(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_DeleteAllReadMail")] MsgIdmailDeleteAllReadMail = 18,
  /// <summary>
  ///删除已读邮件返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_DeleteAllReadMailResp")] MsgIdmailDeleteAllReadMailResp = 19,
  /// <summary>
  ///验证码(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_PhoneCode")] MsgIdloginPhoneCode = 20,
  /// <summary>
  ///验证码返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_PhoneCodeResp")] MsgIdloginPhoneCodeResp = 21,
  /// <summary>
  ///同步玩家金币(MsgCommonN64)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_SyncPlayerGoldResp")] MsgIdloginSyncPlayerGoldResp = 22,
  /// <summary>
  ///通知游戏服务器列表(MsgGameServerList)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_NotifyGameServerList")] MsgIdloginNotifyGameServerList = 23,
  /// <summary>
  ///查询签到信息(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDSign_QueryCheckInInfo")] MsgIdsignQueryCheckInInfo = 24,
  /// <summary>
  ///查询签到信息返回(MsgCheckInInfo)
  /// </summary>
  [pbr::OriginalName("MsgIDSign_QueryCheckInInfoResp")] MsgIdsignQueryCheckInInfoResp = 25,
  /// <summary>
  ///玩家签到(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDSign_PlayerCheckIn")] MsgIdsignPlayerCheckIn = 26,
  /// <summary>
  ///玩家签到返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDSign_PlayerCheckInResp")] MsgIdsignPlayerCheckInResp = 27,
  /// <summary>
  ///查询转盘数据(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDTurntable_QueryData")] MsgIdturntableQueryData = 28,
  /// <summary>
  ///查询转盘数据返回(MsgTurntableData)
  /// </summary>
  [pbr::OriginalName("MsgIDTurntable_QueryDataResp")] MsgIdturntableQueryDataResp = 29,
  /// <summary>
  ///转动转盘(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDTurntable_PlayTurntable")] MsgIdturntablePlayTurntable = 30,
  /// <summary>
  ///转动转盘返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDTurntable_PlayTurntableResp")] MsgIdturntablePlayTurntableResp = 31,
  /// <summary>
  ///同步邮件列表(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_SyncMailList")] MsgIdmailSyncMailList = 32,
  /// <summary>
  ///同步邮件列表返回(MsgMailsInfo)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_SyncMailListResp")] MsgIdmailSyncMailListResp = 33,
  /// <summary>
  ///增加邮件(MsgMailData)
  /// </summary>
  [pbr::OriginalName("MsgIDMail_AddMailResp")] MsgIdmailAddMailResp = 34,
  /// <summary>
  ///查询分享信息(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_QueryInfo")] MsgIdshareQueryInfo = 35,
  /// <summary>
  ///查询分享信息返回(MsgShareData)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_QueryInfoResp")] MsgIdshareQueryInfoResp = 36,
  /// <summary>
  ///绑定上一级(MsgBindParentData)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_BindParent")] MsgIdshareBindParent = 37,
  /// <summary>
  ///绑定上一级返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_BindParentResp")] MsgIdshareBindParentResp = 38,
  /// <summary>
  ///获取邀请奖励配置(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_QueryInviteAwardCfg")] MsgIdshareQueryInviteAwardCfg = 39,
  /// <summary>
  ///获取邀请奖励配置返回(MsgMailData)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_QueryInviteAwardCfgResp")] MsgIdshareQueryInviteAwardCfgResp = 40,
  /// <summary>
  ///领取邀请奖励(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_PickInviteAward")] MsgIdsharePickInviteAward = 41,
  /// <summary>
  ///领取邀请奖励返回(MsgCommonN64)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_PickInviteAwardResp")] MsgIdsharePickInviteAwardResp = 42,
  /// <summary>
  ///查询充值信息(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_QueryRechargeInfo")] MsgIdshareQueryRechargeInfo = 43,
  /// <summary>
  ///查询充值信息返回(MsgRechargeInfo)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_QueryRechargeInfoResp")] MsgIdshareQueryRechargeInfoResp = 44,
  /// <summary>
  ///查询代理返利记录(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_QueryRechargeRebateRecord")] MsgIdshareQueryRechargeRebateRecord = 45,
  /// <summary>
  ///查询代理返利记录返回(MsgQueryRebateRecordInfo)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_QueryRechargeRebateRecordResp")] MsgIdshareQueryRechargeRebateRecordResp = 46,
  /// <summary>
  ///领取代理分成奖励(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_PickRechargeRebate")] MsgIdsharePickRechargeRebate = 47,
  /// <summary>
  ///领取代理分成奖励返回(MsgCommonN64)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_PickRechargeRebateResp")] MsgIdsharePickRechargeRebateResp = 48,
  /// <summary>
  ///查询代理信息(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_AgencyInfoRebate")] MsgIdshareAgencyInfoRebate = 49,
  /// <summary>
  ///查询代理信息返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDShare_AgencyInfoRebateResp")] MsgIdshareAgencyInfoRebateResp = 50,
  /// <summary>
  ///忘记密码(MsgForgetPassword)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_ForgetPassword")] MsgIdloginForgetPassword = 51,
  /// <summary>
  ///忘记密码返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_ForgetPasswordResp")] MsgIdloginForgetPasswordResp = 52,
  /// <summary>
  ///充值成功回调(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_RechargeNotify")] MsgIdloginRechargeNotify = 53,
  /// <summary>
  ///获取玩家金币(MsgCommonN64)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_GetPlayerGoldResp")] MsgIdloginGetPlayerGoldResp = 54,
  /// <summary>
  ///获取VIP配置(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDVIP_GetVIPConfig")] MsgIdvipGetVipconfig = 55,
  /// <summary>
  ///获取VIP配置返回(MsgVIPConfig)
  /// </summary>
  [pbr::OriginalName("MsgIDVIP_GetVIPConfigResp")] MsgIdvipGetVipconfigResp = 56,
  /// <summary>
  ///获取玩家打码量(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDVIP_GetPlayerHitCoding")] MsgIdvipGetPlayerHitCoding = 57,
  /// <summary>
  ///获取玩家打码量(MsgCommonN64)
  /// </summary>
  [pbr::OriginalName("MsgIDVIP_GetPlayerHitCodingResp")] MsgIdvipGetPlayerHitCodingResp = 58,
  /// <summary>
  ///升级VIP(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDVIP_VIPUpgrade")] MsgIdvipVipupgrade = 59,
  /// <summary>
  ///升级VIP返回(MsgUpgradeVIP)
  /// </summary>
  [pbr::OriginalName("MsgIDVIP_VIPUpgradeResp")] MsgIdvipVipupgradeResp = 60,
  /// <summary>
  ///获取头像和头像框信息(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDAvatar_GetAvatarInfo")] MsgIdavatarGetAvatarInfo = 61,
  /// <summary>
  ///获取头像和头像框信息返回(MsgGetAvatarInfo)
  /// </summary>
  [pbr::OriginalName("MsgIDAvatar_GetAvatarInfoResp")] MsgIdavatarGetAvatarInfoResp = 62,
  /// <summary>
  ///修改玩家头像框(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDAvatar_ModifyAvatarFrame")] MsgIdavatarModifyAvatarFrame = 63,
  /// <summary>
  ///修改玩家头像框返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDAvatar_ModifyAvatarFrameResp")] MsgIdavatarModifyAvatarFrameResp = 64,
  /// <summary>
  ///查询玩家信息(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_QueryPlayerInfo")] MsgIdloginQueryPlayerInfo = 65,
  /// <summary>
  ///查询玩家信息返回(MsgPlayerInfo)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_QueryPlayerInfoResp")] MsgIdloginQueryPlayerInfoResp = 66,
  /// <summary>
  ///查询玩家活动数据(MsgActiveInfo)
  /// </summary>
  [pbr::OriginalName("MsgIDActive_QueryActiveInfo")] MsgIdactiveQueryActiveInfo = 67,
  /// <summary>
  ///查询玩家活动数据返回(sActiveInfoSCRet)
  /// </summary>
  [pbr::OriginalName("MsgIDActive_QueryActiveInfoResp")] MsgIdactiveQueryActiveInfoResp = 68,
  /// <summary>
  ///跑马灯广播(MsgBroadcastTip)
  /// </summary>
  [pbr::OriginalName("MsgIDZMD_BroadcastTipResp")] MsgIdzmdBroadcastTipResp = 69,
  /// <summary>
  ///领取活动奖励(MsgActiveInfoCSPick)
  /// </summary>
  [pbr::OriginalName("MsgIDActive_PickActiveInfo")] MsgIdactivePickActiveInfo = 70,
  /// <summary>
  ///领取活动奖励返回(MsgActiveInfoSCPick)
  /// </summary>
  [pbr::OriginalName("MsgIDActive_PickActiveInfoResp")] MsgIdactivePickActiveInfoResp = 71,
  /// <summary>
  ///修改签名(MsgModifySignature)
  /// </summary>
  [pbr::OriginalName("MsgIDSignature_Modify")] MsgIdsignatureModify = 72,
  /// <summary>
  ///修改签名返回(MsgModifySignature)
  /// </summary>
  [pbr::OriginalName("MsgIDSignature_ModifyResp")] MsgIdsignatureModifyResp = 73,
  /// <summary>
  ///排行榜请求(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDRank_Get")] MsgIdrankGet = 74,
  /// <summary>
  ///排行榜返回(MsgTopList)
  /// </summary>
  [pbr::OriginalName("MsgIDRank_GetResp")] MsgIdrankGetResp = 75,
  /// <summary>
  ///银行设置密码(MsgCommonStr)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_SetPassword")] MsgIdbankSetPassword = 76,
  /// <summary>
  ///银行设置密码返回(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_SetPasswordResp")] MsgIdbankSetPasswordResp = 77,
  /// <summary>
  ///验证手机();
  /// </summary>
  [pbr::OriginalName("MsgIDBank_VerifyPhone")] MsgIdbankVerifyPhone = 78,
  /// <summary>
  ///验证手机返回(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_VerifyPhoneResp")] MsgIdbankVerifyPhoneResp = 79,
  /// <summary>
  ///银行修改密码(MsgBankChangePassword)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_ChangePassword")] MsgIdbankChangePassword = 80,
  /// <summary>
  ///银行修改密码返回(MsgCommonN32)0成功非0暂定
  /// </summary>
  [pbr::OriginalName("MsgIDBank_ChangePasswordResp")] MsgIdbankChangePasswordResp = 81,
  /// <summary>
  ///银行打开银行(MsgCommonStr)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_OpenBank")] MsgIdbankOpenBank = 82,
  /// <summary>
  ///银行打开银行返回(MsgBankTakeOut)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_OpenBankResp")] MsgIdbankOpenBankResp = 83,
  /// <summary>
  ///银行存入(MsgBankOperate)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_BankOperate")] MsgIdbankBankOperate = 84,
  /// <summary>
  ///银行存入返回(MsgBankTakeOut)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_BankOperateResp")] MsgIdbankBankOperateResp = 85,
  /// <summary>
  ///银行转账(MsgBankTransfer)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_BankTransfer")] MsgIdbankBankTransfer = 86,
  /// <summary>
  ///银行转账返回(MsgBankTransferResp)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_BankTransferResp")] MsgIdbankBankTransferResp = 87,
  /// <summary>
  ///银行转账记录()
  /// </summary>
  [pbr::OriginalName("MsgIDBank_BankRecord")] MsgIdbankBankRecord = 88,
  /// <summary>
  ///银行转账记录返回(MsgBankRecordResp)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_BankRecordResp")] MsgIdbankBankRecordResp = 89,
}

public enum EMsgIDGame {
  [pbr::OriginalName("MsgIDGame_Null")] MsgIdgameNull = 0,
  /// <summary>
  ///ID从1001开始
  /// </summary>
  [pbr::OriginalName("MsgIDGame_Login")] MsgIdgameLogin = 1001,
  /// <summary>
  ///玩家登录返回(MsgGamePlayerLoginResp)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_LoginResp")] MsgIdgameLoginResp = 1002,
  /// <summary>
  ///挤号
  /// </summary>
  [pbr::OriginalName("MsgIDGame_SqueezeSeatResp")] MsgIdgameSqueezeSeatResp = 1003,
  /// <summary>
  ///玩家下线(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_Logout")] MsgIdgameLogout = 1004,
  /// <summary>
  ///玩家自动坐下(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_AutoSitDown")] MsgIdgameAutoSitDown = 1005,
  /// <summary>
  ///玩家坐下返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_SitDownResp")] MsgIdgameSitDownResp = 1006,
  /// <summary>
  ///玩家数据同步(MsgGamePlayerInfo)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_SyncPlayerInfoResp")] MsgIdgameSyncPlayerInfoResp = 1007,
  /// <summary>
  ///通知玩家下线(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_NotifyPlayerStandUpResp")] MsgIdgameNotifyPlayerStandUpResp = 1008,
  /// <summary>
  ///同步桌子所有玩家分数(MsgSyncPlayersScore)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_SyncPlayersScoreResp")] MsgIdgameSyncPlayersScoreResp = 1009,
  /// <summary>
  ///请求场景消息(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_SendGameSence")] MsgIdgameSendGameSence = 1010,
  /// <summary>
  ///请求场景消息返回
  /// </summary>
  [pbr::OriginalName("MsgIDGame_SendGameSenceResp")] MsgIdgameSendGameSenceResp = 1011,
  /// <summary>
  ///通用消息通知(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_NotifyMessageResp")] MsgIdgameNotifyMessageResp = 1012,
  /// <summary>
  ///创建房间(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_CreateRoom")] MsgIdgameCreateRoom = 1013,
  /// <summary>
  ///加入房间(MsgCommonStr)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_JoinRoom")] MsgIdgameJoinRoom = 1014,
  /// <summary>
  ///猜拳查询数据记录(MsgQueryRecord 1:每局数据 2:每日数据)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_QueryRecord")] MsgIdgameQueryRecord = 1015,
  /// <summary>
  ///猜拳每局数据数据记录(MsgTotalRoundData)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_QueryRoundRecordResp")] MsgIdgameQueryRoundRecordResp = 1016,
  /// <summary>
  ///猜拳每日数据数据记录(MsgTotalDayData)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_QueryDayRecordResp")] MsgIdgameQueryDayRecordResp = 1017,
  /// <summary>
  ///猜拳增加一条记录
  /// </summary>
  [pbr::OriginalName("MsgIDGame_AddOneRecord")] MsgIdgameAddOneRecord = 1018,
  /// <summary>
  ///通知玩家断线(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDGame_NotifyPlayerOfflineResp")] MsgIdgameNotifyPlayerOfflineResp = 1019,
}

#endregion


#endregion Designer generated code
