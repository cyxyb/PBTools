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
          "ChxQcm90by9Db21tb24vQ29tbW9uQ21kLnByb3RvKoYBCgpFTXNnSURNYWlu",
          "EhMKD0VNc2dJRE1haW5fTnVsbBAAEh4KGUVNc2dJRE1haW5fTG9naW5fVXNl",
          "ckluZm8Q6QcSFAoPRU1zZ0lETWFpbl9HYW1lENEPEhcKEkVNc2dJRE1haW5f",
          "U3ViR2FtZRDSDxIUCg9FTXNnSURNYWluX0NoYXQQuRcqzhoKC0VNc2dJRExv",
          "Z2luEhMKD01zZ0lETG9naW5fTnVsbBAAEhQKEE1zZ0lETG9naW5fTG9naW4Q",
          "ARIYChRNc2dJRExvZ2luX0xvZ2luUmVzcBACEh0KGU1zZ0lETG9naW5fTW9k",
          "aWZ5Tmlja05hbWUQAxIhCh1Nc2dJRExvZ2luX01vZGlmeU5pY2tOYW1lUmVz",
          "cBAEEhkKFU1zZ0lETG9naW5fTW9kaWZ5SGVhZBAFEh0KGU1zZ0lETG9naW5f",
          "TW9kaWZ5SGVhZFJlc3AQBhIdChlNc2dJRExvZ2luX01vZGlmeVBhc3N3b3Jk",
          "EAcSIQodTXNnSURMb2dpbl9Nb2RpZnlQYXNzd29yZFJlc3AQCBIYChRNc2dJ",
          "RExvZ2luX0JpbmRQaG9uZRAJEhkKFU1zZ0lETWFpbF9HZXRNYWlsTGlzdBAK",
          "Eh0KGU1zZ0lETWFpbF9HZXRNYWlsTGlzdFJlc3AQCxIcChhNc2dJRExvZ2lu",
          "X0JpbmRQaG9uZVJlc3AQDBIWChJNc2dJRE1haWxfUmVhZE1haWwQDRIWChJN",
          "c2dJRE1haWxfUGlja01haWwQDhIaChZNc2dJRE1haWxfUGlja01haWxSZXNw",
          "EA8SGAoUTXNnSURNYWlsX1JlY2FsbE1haWwQEBIcChhNc2dJRE1haWxfUmVj",
          "YWxsTWFpbFJlc3AQERIfChtNc2dJRE1haWxfRGVsZXRlQWxsUmVhZE1haWwQ",
          "EhIjCh9Nc2dJRE1haWxfRGVsZXRlQWxsUmVhZE1haWxSZXNwEBMSGAoUTXNn",
          "SURMb2dpbl9QaG9uZUNvZGUQFBIcChhNc2dJRExvZ2luX1Bob25lQ29kZVJl",
          "c3AQFRIcChhNc2dJRExvZ2luX0dldFBsYXllckdvbGQQFhIjCh9Nc2dJRExv",
          "Z2luX05vdGlmeUdhbWVTZXJ2ZXJMaXN0EBcSHgoaTXNnSURTaWduX1F1ZXJ5",
          "Q2hlY2tJbkluZm8QGBIiCh5Nc2dJRFNpZ25fUXVlcnlDaGVja0luSW5mb1Jl",
          "c3AQGRIbChdNc2dJRFNpZ25fUGxheWVyQ2hlY2tJbhAaEh8KG01zZ0lEU2ln",
          "bl9QbGF5ZXJDaGVja0luUmVzcBAbEhwKGE1zZ0lEVHVybnRhYmxlX1F1ZXJ5",
          "RGF0YRAcEiAKHE1zZ0lEVHVybnRhYmxlX1F1ZXJ5RGF0YVJlc3AQHRIgChxN",
          "c2dJRFR1cm50YWJsZV9QbGF5VHVybnRhYmxlEB4SJAogTXNnSURUdXJudGFi",
          "bGVfUGxheVR1cm50YWJsZVJlc3AQHxIaChZNc2dJRE1haWxfU3luY01haWxM",
          "aXN0ECASHgoaTXNnSURNYWlsX1N5bmNNYWlsTGlzdFJlc3AQIRIZChVNc2dJ",
          "RE1haWxfQWRkTWFpbFJlc3AQIhIYChRNc2dJRFNoYXJlX1F1ZXJ5SW5mbxAj",
          "EhwKGE1zZ0lEU2hhcmVfUXVlcnlJbmZvUmVzcBAkEhkKFU1zZ0lEU2hhcmVf",
          "QmluZFBhcmVudBAlEh0KGU1zZ0lEU2hhcmVfQmluZFBhcmVudFJlc3AQJhIi",
          "Ch5Nc2dJRFNoYXJlX1F1ZXJ5SW52aXRlQXdhcmRDZmcQJxImCiJNc2dJRFNo",
          "YXJlX1F1ZXJ5SW52aXRlQXdhcmRDZmdSZXNwECgSHgoaTXNnSURTaGFyZV9Q",
          "aWNrSW52aXRlQXdhcmQQKRIiCh5Nc2dJRFNoYXJlX1BpY2tJbnZpdGVBd2Fy",
          "ZFJlc3AQKhIgChxNc2dJRFNoYXJlX1F1ZXJ5UmVjaGFyZ2VJbmZvECsSJAog",
          "TXNnSURTaGFyZV9RdWVyeVJlY2hhcmdlSW5mb1Jlc3AQLBIoCiRNc2dJRFNo",
          "YXJlX1F1ZXJ5UmVjaGFyZ2VSZWJhdGVSZWNvcmQQLRIsCihNc2dJRFNoYXJl",
          "X1F1ZXJ5UmVjaGFyZ2VSZWJhdGVSZWNvcmRSZXNwEC4SIQodTXNnSURTaGFy",
          "ZV9QaWNrUmVjaGFyZ2VSZWJhdGUQLxIlCiFNc2dJRFNoYXJlX1BpY2tSZWNo",
          "YXJnZVJlYmF0ZVJlc3AQMBIfChtNc2dJRFNoYXJlX0FnZW5jeUluZm9SZWJh",
          "dGUQMRIjCh9Nc2dJRFNoYXJlX0FnZW5jeUluZm9SZWJhdGVSZXNwEDISHQoZ",
          "TXNnSURMb2dpbl9Gb3JnZXRQYXNzd29yZBAzEiEKHU1zZ0lETG9naW5fRm9y",
          "Z2V0UGFzc3dvcmRSZXNwEDQSHQoZTXNnSURMb2dpbl9SZWNoYXJnZU5vdGlm",
          "eRA1EiAKHE1zZ0lETG9naW5fR2V0UGxheWVyR29sZFJlc3AQNhIZChVNc2dJ",
          "RFZJUF9HZXRWSVBDb25maWcQNxIdChlNc2dJRFZJUF9HZXRWSVBDb25maWdS",
          "ZXNwEDgSHwobTXNnSURWSVBfR2V0UGxheWVySGl0Q29kaW5nEDkSIwofTXNn",
          "SURWSVBfR2V0UGxheWVySGl0Q29kaW5nUmVzcBA6EhcKE01zZ0lEVklQX1ZJ",
          "UFVwZ3JhZGUQOxIbChdNc2dJRFZJUF9WSVBVcGdyYWRlUmVzcBA8Eh0KGU1z",
          "Z0lEQXZhdGFyX0dldEF2YXRhckluZm8QPRIhCh1Nc2dJREF2YXRhcl9HZXRB",
          "dmF0YXJJbmZvUmVzcBA+EiEKHU1zZ0lEQXZhdGFyX01vZGlmeUF2YXRhckZy",
          "YW1lED8SJQohTXNnSURBdmF0YXJfTW9kaWZ5QXZhdGFyRnJhbWVSZXNwEEAS",
          "HgoaTXNnSURMb2dpbl9RdWVyeVBsYXllckluZm8QQRIiCh5Nc2dJRExvZ2lu",
          "X1F1ZXJ5UGxheWVySW5mb1Jlc3AQQhIfChtNc2dJREFjdGl2ZV9RdWVyeUFj",
          "dGl2ZUluZm8QQxIjCh9Nc2dJREFjdGl2ZV9RdWVyeUFjdGl2ZUluZm9SZXNw",
          "EEQSHQoZTXNnSURaTURfQnJvYWRjYXN0VGlwUmVzcBBFEh4KGk1zZ0lEQWN0",
          "aXZlX1BpY2tBY3RpdmVJbmZvEEYSIgoeTXNnSURBY3RpdmVfUGlja0FjdGl2",
          "ZUluZm9SZXNwEEcSGQoVTXNnSURTaWduYXR1cmVfTW9kaWZ5EEgSHQoZTXNn",
          "SURTaWduYXR1cmVfTW9kaWZ5UmVzcBBJEhEKDU1zZ0lEUmFua19HZXQQShIV",
          "ChFNc2dJRFJhbmtfR2V0UmVzcBBLEhkKFU1zZ0lEQmFua19TZXRQYXNzd29y",
          "ZBBMEh0KGU1zZ0lEQmFua19TZXRQYXNzd29yZFJlc3AQTRIZChVNc2dJREJh",
          "bmtfVmVyaWZ5UGhvbmUQThIdChlNc2dJREJhbmtfVmVyaWZ5UGhvbmVSZXNw",
          "EE8SHAoYTXNnSURCYW5rX0NoYW5nZVBhc3N3b3JkEFASIAocTXNnSURCYW5r",
          "X0NoYW5nZVBhc3N3b3JkUmVzcBBREhYKEk1zZ0lEQmFua19PcGVuQmFuaxBS",
          "EhoKFk1zZ0lEQmFua19PcGVuQmFua1Jlc3AQUxIZChVNc2dJREJhbmtfQmFu",
          "a09wZXJhdGUQVBIdChlNc2dJREJhbmtfQmFua09wZXJhdGVSZXNwEFUSGgoW",
          "TXNnSURCYW5rX0JhbmtUcmFuc2ZlchBWEh4KGk1zZ0lEQmFua19CYW5rVHJh",
          "bnNmZXJSZXNwEFcSGAoUTXNnSURCYW5rX0JhbmtSZWNvcmQQWBIcChhNc2dJ",
          "REJhbmtfQmFua1JlY29yZFJlc3AQWRIjCh9Nc2dJRExvZ2luX05vdGlmeUNo",
          "YXRTZXJ2ZXJMaXN0EFoSIgoeTXNnSURMb2dpbl9RdWVyeUNoYXRTZXJ2ZXJM",
          "aXN0EFsSHAoYTXNnSURMb2dpbl9HZXRQbGF5ZXJJdGVtEFwSIAocTXNnSURM",
          "b2dpbl9HZXRQbGF5ZXJJdGVtUmVzcBBdEiAKHE1zZ0lETG9naW5fQmFua1F1",
          "ZXJ5VXNlckluZm8QXhIkCiBNc2dJRExvZ2luX0JhbmtRdWVyeVVzZXJJbmZv",
          "UmVzcBBfEhYKEk1zZ0lEU2hvcF9CdXlHb29kcxBgEhoKFk1zZ0lEU2hvcF9C",
          "dXlHb29kc1Jlc3AQYRIfChtNc2dJRFNob3BfUXVlcnlUcnVtcGV0UHJpY2UQ",
          "YhIjCh9Nc2dJRFNob3BfUXVlcnlUcnVtcGV0UHJpY2VSZXNwEGMSHgoaTXNn",
          "SURMb2dpbl9RdWVyeVNlcnZlclRpbWUQZBIiCh5Nc2dJRExvZ2luX1F1ZXJ5",
          "U2VydmVyVGltZVJlc3AQZRIUChBNc2dJRExvZ2luX0hlYXJ0EGYSGAoUTXNn",
          "SURMb2dpbl9IZWFydFJlc3AQZxIgChxNc2dJREFnZW50X1F1ZXJ5U3ViQWdl",
          "bnRJbmZvEGgSJAogTXNnSURBZ2VudF9RdWVyeVN1YkFnZW50SW5mb1Jlc3AQ",
          "aRIbChdNc2dJRExvZ2luX0tpY2tVc2VyUmVzcBBqEiIKHk1zZ0lEQmFua19C",
          "YW5rVHJhbnNmZXJTeW5jUmVzcBBrKu4ECgpFTXNnSURHYW1lEhIKDk1zZ0lE",
          "R2FtZV9OdWxsEAASFAoPTXNnSURHYW1lX0xvZ2luEOkHEhgKE01zZ0lER2Ft",
          "ZV9Mb2dpblJlc3AQ6gcSHgoZTXNnSURHYW1lX1NxdWVlemVTZWF0UmVzcBDr",
          "BxIVChBNc2dJREdhbWVfTG9nb3V0EOwHEhoKFU1zZ0lER2FtZV9BdXRvU2l0",
          "RG93bhDtBxIaChVNc2dJREdhbWVfU2l0RG93blJlc3AQ7gcSIQocTXNnSURH",
          "YW1lX1N5bmNQbGF5ZXJJbmZvUmVzcBDvBxImCiFNc2dJREdhbWVfTm90aWZ5",
          "UGxheWVyU3RhbmRVcFJlc3AQ8AcSIwoeTXNnSURHYW1lX1N5bmNQbGF5ZXJz",
          "U2NvcmVSZXNwEPEHEhwKF01zZ0lER2FtZV9TZW5kR2FtZVNlbmNlEPIHEiAK",
          "G01zZ0lER2FtZV9TZW5kR2FtZVNlbmNlUmVzcBDzBxIgChtNc2dJREdhbWVf",
          "Tm90aWZ5TWVzc2FnZVJlc3AQ9AcSGQoUTXNnSURHYW1lX0NyZWF0ZVJvb20Q",
          "9QcSFwoSTXNnSURHYW1lX0pvaW5Sb29tEPYHEhoKFU1zZ0lER2FtZV9RdWVy",
          "eVJlY29yZBD3BxIjCh5Nc2dJREdhbWVfUXVlcnlSb3VuZFJlY29yZFJlc3AQ",
          "+AcSIQocTXNnSURHYW1lX1F1ZXJ5RGF5UmVjb3JkUmVzcBD5BxIbChZNc2dJ",
          "REdhbWVfQWRkT25lUmVjb3JkEPoHEiYKIU1zZ0lER2FtZV9Ob3RpZnlQbGF5",
          "ZXJPZmZsaW5lUmVzcBD7ByqaAgoKRU1zZ0lEQ2hhdBISCg5Nc2dJRENoYXRf",
          "TnVsbBAAEhQKD01zZ0lEQ2hhdF9Mb2dpbhDRDxIYChNNc2dJRENoYXRfTG9n",
          "aW5SZXNwENIPEhkKFE1zZ0lEQ2hhdF9Mb2dvdXRSZXNwENMPEhwKF01zZ0lE",
          "Q2hhdF9TZW5kTm9ybWFsTXNnENQPEiYKIU1zZ0lEQ2hhdF9Ob3RpZnlDaGF0",
          "Tm9ybWFsTXNnUmVzcBDVDxIdChhNc2dJRENoYXRfU2VuZFRydW1wZXRNc2cQ",
          "1g8SJwoiTXNnSURDaGF0X05vdGlmeUNoYXRUcnVtcGV0TXNnUmVzcBDXDxIf",
          "ChpNc2dJRENoYXRfU3luY1VzZXJJbmZvUmVzcBDYD2IGcHJvdG8z"));
    descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
        new pbr::FileDescriptor[] { },
        new pbr::GeneratedClrTypeInfo(new[] {typeof(global::EMsgIDMain), typeof(global::EMsgIDLogin), typeof(global::EMsgIDGame), typeof(global::EMsgIDChat), }, null, null));
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
  /// <summary>
  ///聊天主消息号
  /// </summary>
  [pbr::OriginalName("EMsgIDMain_Chat")] Chat = 3001,
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
  ///绑定手机(MsgBindPhone)
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
  ///验证码(MsgCommonStr)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_PhoneCode")] MsgIdloginPhoneCode = 20,
  /// <summary>
  ///验证码返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_PhoneCodeResp")] MsgIdloginPhoneCodeResp = 21,
  /// <summary>
  ///获取玩家金币(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_GetPlayerGold")] MsgIdloginGetPlayerGold = 22,
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
  ///转动转盘(MsgTurntable)
  /// </summary>
  [pbr::OriginalName("MsgIDTurntable_PlayTurntable")] MsgIdturntablePlayTurntable = 30,
  /// <summary>
  ///转动转盘返回(MsgTurntableResp)
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
  ///银行设置密码返回(MsgBankTakeOut)
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
  ///银行修改密码返回(MsgCommonN32)0成功非1和旧密码相同
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
  /// <summary>
  ///通知聊天服务器列表(MsgChatServerList)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_NotifyChatServerList")] MsgIdloginNotifyChatServerList = 90,
  /// <summary>
  ///请求聊天服务器列表(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_QueryChatServerList")] MsgIdloginQueryChatServerList = 91,
  /// <summary>
  ///获取玩家道具列表(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_GetPlayerItem")] MsgIdloginGetPlayerItem = 92,
  /// <summary>
  ///获取玩家道具列表返回(MsgPlayerItem)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_GetPlayerItemResp")] MsgIdloginGetPlayerItemResp = 93,
  /// <summary>
  ///请求用户昵称(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_BankQueryUserInfo")] MsgIdloginBankQueryUserInfo = 94,
  /// <summary>
  ///请求用户昵称返回(MsgBankQueryNickname)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_BankQueryUserInfoResp")] MsgIdloginBankQueryUserInfoResp = 95,
  /// <summary>
  ///购买商品(MsgCommonKV)
  /// </summary>
  [pbr::OriginalName("MsgIDShop_BuyGoods")] MsgIdshopBuyGoods = 96,
  /// <summary>
  ///购买商品返回(MsgCommonKV)
  /// </summary>
  [pbr::OriginalName("MsgIDShop_BuyGoodsResp")] MsgIdshopBuyGoodsResp = 97,
  /// <summary>
  ///查询小喇叭价格(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDShop_QueryTrumpetPrice")] MsgIdshopQueryTrumpetPrice = 98,
  /// <summary>
  ///查询小喇叭价格返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDShop_QueryTrumpetPriceResp")] MsgIdshopQueryTrumpetPriceResp = 99,
  /// <summary>
  ///请求服务器时间(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_QueryServerTime")] MsgIdloginQueryServerTime = 100,
  /// <summary>
  ///请求服务器时间返回(MsgCommonN64)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_QueryServerTimeResp")] MsgIdloginQueryServerTimeResp = 101,
  /// <summary>
  ///心跳(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_Heart")] MsgIdloginHeart = 102,
  /// <summary>
  ///心跳返回(MsgCommonBool)	
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_HeartResp")] MsgIdloginHeartResp = 103,
  /// <summary>
  ///查询子代理信息()
  /// </summary>
  [pbr::OriginalName("MsgIDAgent_QuerySubAgentInfo")] MsgIdagentQuerySubAgentInfo = 104,
  /// <summary>
  ///查询子代理信息返回(MsgTtotalSubagentInformation)
  /// </summary>
  [pbr::OriginalName("MsgIDAgent_QuerySubAgentInfoResp")] MsgIdagentQuerySubAgentInfoResp = 105,
  /// <summary>
  ///踢出玩家(MsgCommonBool)
  /// </summary>
  [pbr::OriginalName("MsgIDLogin_KickUserResp")] MsgIdloginKickUserResp = 106,
  /// <summary>
  ///银行转账同步返回(MsgBankTransferResp)
  /// </summary>
  [pbr::OriginalName("MsgIDBank_BankTransferSyncResp")] MsgIdbankBankTransferSyncResp = 107,
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

public enum EMsgIDChat {
  [pbr::OriginalName("MsgIDChat_Null")] MsgIdchatNull = 0,
  /// <summary>
  ///ID从2001开始
  /// </summary>
  [pbr::OriginalName("MsgIDChat_Login")] MsgIdchatLogin = 2001,
  /// <summary>
  ///玩家登录返回(MsgChatLoginResp)
  /// </summary>
  [pbr::OriginalName("MsgIDChat_LoginResp")] MsgIdchatLoginResp = 2002,
  /// <summary>
  ///玩家下线返回(MsgCommonN32)
  /// </summary>
  [pbr::OriginalName("MsgIDChat_LogoutResp")] MsgIdchatLogoutResp = 2003,
  /// <summary>
  ///发送普通消息(MsgCommonStr)
  /// </summary>
  [pbr::OriginalName("MsgIDChat_SendNormalMsg")] MsgIdchatSendNormalMsg = 2004,
  /// <summary>
  ///发送普通消息返回(MsgNotifyChatNormalMsg)
  /// </summary>
  [pbr::OriginalName("MsgIDChat_NotifyChatNormalMsgResp")] MsgIdchatNotifyChatNormalMsgResp = 2005,
  /// <summary>
  ///发送小喇叭消息(MsgCommonStr)
  /// </summary>
  [pbr::OriginalName("MsgIDChat_SendTrumpetMsg")] MsgIdchatSendTrumpetMsg = 2006,
  /// <summary>
  ///发送小喇叭消息返回(MsgNotifyChatTrumpetMsg)
  /// </summary>
  [pbr::OriginalName("MsgIDChat_NotifyChatTrumpetMsgResp")] MsgIdchatNotifyChatTrumpetMsgResp = 2007,
  /// <summary>
  ///同步玩家信息(MsgSyncUserInfo)
  /// </summary>
  [pbr::OriginalName("MsgIDChat_SyncUserInfoResp")] MsgIdchatSyncUserInfoResp = 2008,
}

#endregion


#endregion Designer generated code
