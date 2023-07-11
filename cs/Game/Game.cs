// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Proto/Game/Game.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
/// <summary>Holder for reflection information generated from Proto/Game/Game.proto</summary>
public static partial class GameReflection {

  #region Descriptor
  /// <summary>File descriptor for Proto/Game/Game.proto</summary>
  public static pbr::FileDescriptor Descriptor {
    get { return descriptor; }
  }
  private static pbr::FileDescriptor descriptor;

  static GameReflection() {
    byte[] descriptorData = global::System.Convert.FromBase64String(
        string.Concat(
          "ChVQcm90by9HYW1lL0dhbWUucHJvdG8iNwoSTXNnR2FtZVBsYXllckxvZ2lu",
          "Eg8KB3VzZXJfaWQYASABKAUSEAoIcGFzc3dvcmQYAiABKAkijgEKEU1zZ0dh",
          "bWVQbGF5ZXJJbmZvEg8KB3VzZXJfaWQYASABKAUSFAoMYmVhdXRpZnVsX2lk",
          "GAIgASgFEhAKCG5pY2tuYW1lGAMgASgJEg4KBmF2YXRhchgEIAEoCRIMCgRj",
          "b2luGAUgASgEEhAKCHRhYmxlX2lkGAYgASgFEhAKCGNoYWlyX2lkGAcgASgF",
          "IoEBChZNc2dHYW1lUGxheWVyTG9naW5SZXNwEhAKCHJlc19jb2RlGAEgASgF",
          "Eg8KB3VzZXJfaWQYAiABKAUSFAoMYmVhdXRpZnVsX2lkGAMgASgFEhAKCG5p",
          "Y2tuYW1lGAQgASgJEg4KBmF2YXRhchgFIAEoCRIMCgRjb2luGAYgASgEIjUK",
          "E01zZ1N5bmNQbGF5ZXJzU2NvcmUSEAoIY2hhaXJfaWQYASABKAUSDAoEY29p",
          "bhgCIAEoA2IGcHJvdG8z"));
    descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
        new pbr::FileDescriptor[] { },
        new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
          new pbr::GeneratedClrTypeInfo(typeof(global::MsgGamePlayerLogin), global::MsgGamePlayerLogin.Parser, new[]{ "UserId", "Password" }, null, null, null, null),
          new pbr::GeneratedClrTypeInfo(typeof(global::MsgGamePlayerInfo), global::MsgGamePlayerInfo.Parser, new[]{ "UserId", "BeautifulId", "Nickname", "Avatar", "Coin", "TableId", "ChairId" }, null, null, null, null),
          new pbr::GeneratedClrTypeInfo(typeof(global::MsgGamePlayerLoginResp), global::MsgGamePlayerLoginResp.Parser, new[]{ "ResCode", "UserId", "BeautifulId", "Nickname", "Avatar", "Coin" }, null, null, null, null),
          new pbr::GeneratedClrTypeInfo(typeof(global::MsgSyncPlayersScore), global::MsgSyncPlayersScore.Parser, new[]{ "ChairId", "Coin" }, null, null, null, null)
        }));
  }
  #endregion

}
#region Messages
/// <summary>
///游戏登录
/// </summary>
public sealed partial class MsgGamePlayerLogin : pb::IMessage<MsgGamePlayerLogin>
#if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    , pb::IBufferMessage
#endif
{
  private static readonly pb::MessageParser<MsgGamePlayerLogin> _parser = new pb::MessageParser<MsgGamePlayerLogin>(() => new MsgGamePlayerLogin());
  private pb::UnknownFieldSet _unknownFields;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pb::MessageParser<MsgGamePlayerLogin> Parser { get { return _parser; } }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pbr::MessageDescriptor Descriptor {
    get { return global::GameReflection.Descriptor.MessageTypes[0]; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  pbr::MessageDescriptor pb::IMessage.Descriptor {
    get { return Descriptor; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgGamePlayerLogin() {
    OnConstruction();
  }

  partial void OnConstruction();

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgGamePlayerLogin(MsgGamePlayerLogin other) : this() {
    userId_ = other.userId_;
    password_ = other.password_;
    _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgGamePlayerLogin Clone() {
    return new MsgGamePlayerLogin(this);
  }

  /// <summary>Field number for the "user_id" field.</summary>
  public const int UserIdFieldNumber = 1;
  private int userId_;
  /// <summary>
  ///玩家id
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int UserId {
    get { return userId_; }
    set {
      userId_ = value;
    }
  }

  /// <summary>Field number for the "password" field.</summary>
  public const int PasswordFieldNumber = 2;
  private string password_ = "";
  /// <summary>
  ///玩家密码
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Password {
    get { return password_; }
    set {
      password_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override bool Equals(object other) {
    return Equals(other as MsgGamePlayerLogin);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public bool Equals(MsgGamePlayerLogin other) {
    if (ReferenceEquals(other, null)) {
      return false;
    }
    if (ReferenceEquals(other, this)) {
      return true;
    }
    if (UserId != other.UserId) return false;
    if (Password != other.Password) return false;
    return Equals(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override int GetHashCode() {
    int hash = 1;
    if (UserId != 0) hash ^= UserId.GetHashCode();
    if (Password.Length != 0) hash ^= Password.GetHashCode();
    if (_unknownFields != null) {
      hash ^= _unknownFields.GetHashCode();
    }
    return hash;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override string ToString() {
    return pb::JsonFormatter.ToDiagnosticString(this);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void WriteTo(pb::CodedOutputStream output) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    output.WriteRawMessage(this);
  #else
    if (UserId != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(UserId);
    }
    if (Password.Length != 0) {
      output.WriteRawTag(18);
      output.WriteString(Password);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(output);
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
    if (UserId != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(UserId);
    }
    if (Password.Length != 0) {
      output.WriteRawTag(18);
      output.WriteString(Password);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(ref output);
    }
  }
  #endif

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CalculateSize() {
    int size = 0;
    if (UserId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(UserId);
    }
    if (Password.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Password);
    }
    if (_unknownFields != null) {
      size += _unknownFields.CalculateSize();
    }
    return size;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(MsgGamePlayerLogin other) {
    if (other == null) {
      return;
    }
    if (other.UserId != 0) {
      UserId = other.UserId;
    }
    if (other.Password.Length != 0) {
      Password = other.Password;
    }
    _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(pb::CodedInputStream input) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    input.ReadRawMessage(this);
  #else
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
          break;
        case 8: {
          UserId = input.ReadInt32();
          break;
        }
        case 18: {
          Password = input.ReadString();
          break;
        }
      }
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
          break;
        case 8: {
          UserId = input.ReadInt32();
          break;
        }
        case 18: {
          Password = input.ReadString();
          break;
        }
      }
    }
  }
  #endif

}

/// <summary>
///游戏玩家信息
/// </summary>
public sealed partial class MsgGamePlayerInfo : pb::IMessage<MsgGamePlayerInfo>
#if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    , pb::IBufferMessage
#endif
{
  private static readonly pb::MessageParser<MsgGamePlayerInfo> _parser = new pb::MessageParser<MsgGamePlayerInfo>(() => new MsgGamePlayerInfo());
  private pb::UnknownFieldSet _unknownFields;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pb::MessageParser<MsgGamePlayerInfo> Parser { get { return _parser; } }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pbr::MessageDescriptor Descriptor {
    get { return global::GameReflection.Descriptor.MessageTypes[1]; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  pbr::MessageDescriptor pb::IMessage.Descriptor {
    get { return Descriptor; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgGamePlayerInfo() {
    OnConstruction();
  }

  partial void OnConstruction();

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgGamePlayerInfo(MsgGamePlayerInfo other) : this() {
    userId_ = other.userId_;
    beautifulId_ = other.beautifulId_;
    nickname_ = other.nickname_;
    avatar_ = other.avatar_;
    coin_ = other.coin_;
    tableId_ = other.tableId_;
    chairId_ = other.chairId_;
    _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgGamePlayerInfo Clone() {
    return new MsgGamePlayerInfo(this);
  }

  /// <summary>Field number for the "user_id" field.</summary>
  public const int UserIdFieldNumber = 1;
  private int userId_;
  /// <summary>
  ///玩家ID
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int UserId {
    get { return userId_; }
    set {
      userId_ = value;
    }
  }

  /// <summary>Field number for the "beautiful_id" field.</summary>
  public const int BeautifulIdFieldNumber = 2;
  private int beautifulId_;
  /// <summary>
  ///玩家靓号
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int BeautifulId {
    get { return beautifulId_; }
    set {
      beautifulId_ = value;
    }
  }

  /// <summary>Field number for the "nickname" field.</summary>
  public const int NicknameFieldNumber = 3;
  private string nickname_ = "";
  /// <summary>
  ///玩家昵称
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Nickname {
    get { return nickname_; }
    set {
      nickname_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "avatar" field.</summary>
  public const int AvatarFieldNumber = 4;
  private string avatar_ = "";
  /// <summary>
  ///头像
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Avatar {
    get { return avatar_; }
    set {
      avatar_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "coin" field.</summary>
  public const int CoinFieldNumber = 5;
  private ulong coin_;
  /// <summary>
  ///玩家金币
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public ulong Coin {
    get { return coin_; }
    set {
      coin_ = value;
    }
  }

  /// <summary>Field number for the "table_id" field.</summary>
  public const int TableIdFieldNumber = 6;
  private int tableId_;
  /// <summary>
  ///玩家座位号
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int TableId {
    get { return tableId_; }
    set {
      tableId_ = value;
    }
  }

  /// <summary>Field number for the "chair_id" field.</summary>
  public const int ChairIdFieldNumber = 7;
  private int chairId_;
  /// <summary>
  ///玩家椅子号
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int ChairId {
    get { return chairId_; }
    set {
      chairId_ = value;
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override bool Equals(object other) {
    return Equals(other as MsgGamePlayerInfo);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public bool Equals(MsgGamePlayerInfo other) {
    if (ReferenceEquals(other, null)) {
      return false;
    }
    if (ReferenceEquals(other, this)) {
      return true;
    }
    if (UserId != other.UserId) return false;
    if (BeautifulId != other.BeautifulId) return false;
    if (Nickname != other.Nickname) return false;
    if (Avatar != other.Avatar) return false;
    if (Coin != other.Coin) return false;
    if (TableId != other.TableId) return false;
    if (ChairId != other.ChairId) return false;
    return Equals(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override int GetHashCode() {
    int hash = 1;
    if (UserId != 0) hash ^= UserId.GetHashCode();
    if (BeautifulId != 0) hash ^= BeautifulId.GetHashCode();
    if (Nickname.Length != 0) hash ^= Nickname.GetHashCode();
    if (Avatar.Length != 0) hash ^= Avatar.GetHashCode();
    if (Coin != 0UL) hash ^= Coin.GetHashCode();
    if (TableId != 0) hash ^= TableId.GetHashCode();
    if (ChairId != 0) hash ^= ChairId.GetHashCode();
    if (_unknownFields != null) {
      hash ^= _unknownFields.GetHashCode();
    }
    return hash;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override string ToString() {
    return pb::JsonFormatter.ToDiagnosticString(this);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void WriteTo(pb::CodedOutputStream output) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    output.WriteRawMessage(this);
  #else
    if (UserId != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(UserId);
    }
    if (BeautifulId != 0) {
      output.WriteRawTag(16);
      output.WriteInt32(BeautifulId);
    }
    if (Nickname.Length != 0) {
      output.WriteRawTag(26);
      output.WriteString(Nickname);
    }
    if (Avatar.Length != 0) {
      output.WriteRawTag(34);
      output.WriteString(Avatar);
    }
    if (Coin != 0UL) {
      output.WriteRawTag(40);
      output.WriteUInt64(Coin);
    }
    if (TableId != 0) {
      output.WriteRawTag(48);
      output.WriteInt32(TableId);
    }
    if (ChairId != 0) {
      output.WriteRawTag(56);
      output.WriteInt32(ChairId);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(output);
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
    if (UserId != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(UserId);
    }
    if (BeautifulId != 0) {
      output.WriteRawTag(16);
      output.WriteInt32(BeautifulId);
    }
    if (Nickname.Length != 0) {
      output.WriteRawTag(26);
      output.WriteString(Nickname);
    }
    if (Avatar.Length != 0) {
      output.WriteRawTag(34);
      output.WriteString(Avatar);
    }
    if (Coin != 0UL) {
      output.WriteRawTag(40);
      output.WriteUInt64(Coin);
    }
    if (TableId != 0) {
      output.WriteRawTag(48);
      output.WriteInt32(TableId);
    }
    if (ChairId != 0) {
      output.WriteRawTag(56);
      output.WriteInt32(ChairId);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(ref output);
    }
  }
  #endif

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CalculateSize() {
    int size = 0;
    if (UserId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(UserId);
    }
    if (BeautifulId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(BeautifulId);
    }
    if (Nickname.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Nickname);
    }
    if (Avatar.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Avatar);
    }
    if (Coin != 0UL) {
      size += 1 + pb::CodedOutputStream.ComputeUInt64Size(Coin);
    }
    if (TableId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(TableId);
    }
    if (ChairId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(ChairId);
    }
    if (_unknownFields != null) {
      size += _unknownFields.CalculateSize();
    }
    return size;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(MsgGamePlayerInfo other) {
    if (other == null) {
      return;
    }
    if (other.UserId != 0) {
      UserId = other.UserId;
    }
    if (other.BeautifulId != 0) {
      BeautifulId = other.BeautifulId;
    }
    if (other.Nickname.Length != 0) {
      Nickname = other.Nickname;
    }
    if (other.Avatar.Length != 0) {
      Avatar = other.Avatar;
    }
    if (other.Coin != 0UL) {
      Coin = other.Coin;
    }
    if (other.TableId != 0) {
      TableId = other.TableId;
    }
    if (other.ChairId != 0) {
      ChairId = other.ChairId;
    }
    _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(pb::CodedInputStream input) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    input.ReadRawMessage(this);
  #else
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
          break;
        case 8: {
          UserId = input.ReadInt32();
          break;
        }
        case 16: {
          BeautifulId = input.ReadInt32();
          break;
        }
        case 26: {
          Nickname = input.ReadString();
          break;
        }
        case 34: {
          Avatar = input.ReadString();
          break;
        }
        case 40: {
          Coin = input.ReadUInt64();
          break;
        }
        case 48: {
          TableId = input.ReadInt32();
          break;
        }
        case 56: {
          ChairId = input.ReadInt32();
          break;
        }
      }
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
          break;
        case 8: {
          UserId = input.ReadInt32();
          break;
        }
        case 16: {
          BeautifulId = input.ReadInt32();
          break;
        }
        case 26: {
          Nickname = input.ReadString();
          break;
        }
        case 34: {
          Avatar = input.ReadString();
          break;
        }
        case 40: {
          Coin = input.ReadUInt64();
          break;
        }
        case 48: {
          TableId = input.ReadInt32();
          break;
        }
        case 56: {
          ChairId = input.ReadInt32();
          break;
        }
      }
    }
  }
  #endif

}

/// <summary>
///游戏登录返回
/// </summary>
public sealed partial class MsgGamePlayerLoginResp : pb::IMessage<MsgGamePlayerLoginResp>
#if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    , pb::IBufferMessage
#endif
{
  private static readonly pb::MessageParser<MsgGamePlayerLoginResp> _parser = new pb::MessageParser<MsgGamePlayerLoginResp>(() => new MsgGamePlayerLoginResp());
  private pb::UnknownFieldSet _unknownFields;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pb::MessageParser<MsgGamePlayerLoginResp> Parser { get { return _parser; } }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pbr::MessageDescriptor Descriptor {
    get { return global::GameReflection.Descriptor.MessageTypes[2]; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  pbr::MessageDescriptor pb::IMessage.Descriptor {
    get { return Descriptor; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgGamePlayerLoginResp() {
    OnConstruction();
  }

  partial void OnConstruction();

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgGamePlayerLoginResp(MsgGamePlayerLoginResp other) : this() {
    resCode_ = other.resCode_;
    userId_ = other.userId_;
    beautifulId_ = other.beautifulId_;
    nickname_ = other.nickname_;
    avatar_ = other.avatar_;
    coin_ = other.coin_;
    _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgGamePlayerLoginResp Clone() {
    return new MsgGamePlayerLoginResp(this);
  }

  /// <summary>Field number for the "res_code" field.</summary>
  public const int ResCodeFieldNumber = 1;
  private int resCode_;
  /// <summary>
  ///登录返回码(0:成功 非0:失败)
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int ResCode {
    get { return resCode_; }
    set {
      resCode_ = value;
    }
  }

  /// <summary>Field number for the "user_id" field.</summary>
  public const int UserIdFieldNumber = 2;
  private int userId_;
  /// <summary>
  ///玩家ID
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int UserId {
    get { return userId_; }
    set {
      userId_ = value;
    }
  }

  /// <summary>Field number for the "beautiful_id" field.</summary>
  public const int BeautifulIdFieldNumber = 3;
  private int beautifulId_;
  /// <summary>
  ///玩家靓号
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int BeautifulId {
    get { return beautifulId_; }
    set {
      beautifulId_ = value;
    }
  }

  /// <summary>Field number for the "nickname" field.</summary>
  public const int NicknameFieldNumber = 4;
  private string nickname_ = "";
  /// <summary>
  ///玩家昵称
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Nickname {
    get { return nickname_; }
    set {
      nickname_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "avatar" field.</summary>
  public const int AvatarFieldNumber = 5;
  private string avatar_ = "";
  /// <summary>
  ///头像
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Avatar {
    get { return avatar_; }
    set {
      avatar_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "coin" field.</summary>
  public const int CoinFieldNumber = 6;
  private ulong coin_;
  /// <summary>
  ///玩家金币
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public ulong Coin {
    get { return coin_; }
    set {
      coin_ = value;
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override bool Equals(object other) {
    return Equals(other as MsgGamePlayerLoginResp);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public bool Equals(MsgGamePlayerLoginResp other) {
    if (ReferenceEquals(other, null)) {
      return false;
    }
    if (ReferenceEquals(other, this)) {
      return true;
    }
    if (ResCode != other.ResCode) return false;
    if (UserId != other.UserId) return false;
    if (BeautifulId != other.BeautifulId) return false;
    if (Nickname != other.Nickname) return false;
    if (Avatar != other.Avatar) return false;
    if (Coin != other.Coin) return false;
    return Equals(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override int GetHashCode() {
    int hash = 1;
    if (ResCode != 0) hash ^= ResCode.GetHashCode();
    if (UserId != 0) hash ^= UserId.GetHashCode();
    if (BeautifulId != 0) hash ^= BeautifulId.GetHashCode();
    if (Nickname.Length != 0) hash ^= Nickname.GetHashCode();
    if (Avatar.Length != 0) hash ^= Avatar.GetHashCode();
    if (Coin != 0UL) hash ^= Coin.GetHashCode();
    if (_unknownFields != null) {
      hash ^= _unknownFields.GetHashCode();
    }
    return hash;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override string ToString() {
    return pb::JsonFormatter.ToDiagnosticString(this);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void WriteTo(pb::CodedOutputStream output) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    output.WriteRawMessage(this);
  #else
    if (ResCode != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(ResCode);
    }
    if (UserId != 0) {
      output.WriteRawTag(16);
      output.WriteInt32(UserId);
    }
    if (BeautifulId != 0) {
      output.WriteRawTag(24);
      output.WriteInt32(BeautifulId);
    }
    if (Nickname.Length != 0) {
      output.WriteRawTag(34);
      output.WriteString(Nickname);
    }
    if (Avatar.Length != 0) {
      output.WriteRawTag(42);
      output.WriteString(Avatar);
    }
    if (Coin != 0UL) {
      output.WriteRawTag(48);
      output.WriteUInt64(Coin);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(output);
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
    if (ResCode != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(ResCode);
    }
    if (UserId != 0) {
      output.WriteRawTag(16);
      output.WriteInt32(UserId);
    }
    if (BeautifulId != 0) {
      output.WriteRawTag(24);
      output.WriteInt32(BeautifulId);
    }
    if (Nickname.Length != 0) {
      output.WriteRawTag(34);
      output.WriteString(Nickname);
    }
    if (Avatar.Length != 0) {
      output.WriteRawTag(42);
      output.WriteString(Avatar);
    }
    if (Coin != 0UL) {
      output.WriteRawTag(48);
      output.WriteUInt64(Coin);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(ref output);
    }
  }
  #endif

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CalculateSize() {
    int size = 0;
    if (ResCode != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(ResCode);
    }
    if (UserId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(UserId);
    }
    if (BeautifulId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(BeautifulId);
    }
    if (Nickname.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Nickname);
    }
    if (Avatar.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Avatar);
    }
    if (Coin != 0UL) {
      size += 1 + pb::CodedOutputStream.ComputeUInt64Size(Coin);
    }
    if (_unknownFields != null) {
      size += _unknownFields.CalculateSize();
    }
    return size;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(MsgGamePlayerLoginResp other) {
    if (other == null) {
      return;
    }
    if (other.ResCode != 0) {
      ResCode = other.ResCode;
    }
    if (other.UserId != 0) {
      UserId = other.UserId;
    }
    if (other.BeautifulId != 0) {
      BeautifulId = other.BeautifulId;
    }
    if (other.Nickname.Length != 0) {
      Nickname = other.Nickname;
    }
    if (other.Avatar.Length != 0) {
      Avatar = other.Avatar;
    }
    if (other.Coin != 0UL) {
      Coin = other.Coin;
    }
    _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(pb::CodedInputStream input) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    input.ReadRawMessage(this);
  #else
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
          break;
        case 8: {
          ResCode = input.ReadInt32();
          break;
        }
        case 16: {
          UserId = input.ReadInt32();
          break;
        }
        case 24: {
          BeautifulId = input.ReadInt32();
          break;
        }
        case 34: {
          Nickname = input.ReadString();
          break;
        }
        case 42: {
          Avatar = input.ReadString();
          break;
        }
        case 48: {
          Coin = input.ReadUInt64();
          break;
        }
      }
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
          break;
        case 8: {
          ResCode = input.ReadInt32();
          break;
        }
        case 16: {
          UserId = input.ReadInt32();
          break;
        }
        case 24: {
          BeautifulId = input.ReadInt32();
          break;
        }
        case 34: {
          Nickname = input.ReadString();
          break;
        }
        case 42: {
          Avatar = input.ReadString();
          break;
        }
        case 48: {
          Coin = input.ReadUInt64();
          break;
        }
      }
    }
  }
  #endif

}

/// <summary>
///同步桌子所有玩家分数
/// </summary>
public sealed partial class MsgSyncPlayersScore : pb::IMessage<MsgSyncPlayersScore>
#if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    , pb::IBufferMessage
#endif
{
  private static readonly pb::MessageParser<MsgSyncPlayersScore> _parser = new pb::MessageParser<MsgSyncPlayersScore>(() => new MsgSyncPlayersScore());
  private pb::UnknownFieldSet _unknownFields;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pb::MessageParser<MsgSyncPlayersScore> Parser { get { return _parser; } }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pbr::MessageDescriptor Descriptor {
    get { return global::GameReflection.Descriptor.MessageTypes[3]; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  pbr::MessageDescriptor pb::IMessage.Descriptor {
    get { return Descriptor; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgSyncPlayersScore() {
    OnConstruction();
  }

  partial void OnConstruction();

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgSyncPlayersScore(MsgSyncPlayersScore other) : this() {
    chairId_ = other.chairId_;
    coin_ = other.coin_;
    _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgSyncPlayersScore Clone() {
    return new MsgSyncPlayersScore(this);
  }

  /// <summary>Field number for the "chair_id" field.</summary>
  public const int ChairIdFieldNumber = 1;
  private int chairId_;
  /// <summary>
  ///椅子号
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int ChairId {
    get { return chairId_; }
    set {
      chairId_ = value;
    }
  }

  /// <summary>Field number for the "coin" field.</summary>
  public const int CoinFieldNumber = 2;
  private long coin_;
  /// <summary>
  ///玩家金币
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public long Coin {
    get { return coin_; }
    set {
      coin_ = value;
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override bool Equals(object other) {
    return Equals(other as MsgSyncPlayersScore);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public bool Equals(MsgSyncPlayersScore other) {
    if (ReferenceEquals(other, null)) {
      return false;
    }
    if (ReferenceEquals(other, this)) {
      return true;
    }
    if (ChairId != other.ChairId) return false;
    if (Coin != other.Coin) return false;
    return Equals(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override int GetHashCode() {
    int hash = 1;
    if (ChairId != 0) hash ^= ChairId.GetHashCode();
    if (Coin != 0L) hash ^= Coin.GetHashCode();
    if (_unknownFields != null) {
      hash ^= _unknownFields.GetHashCode();
    }
    return hash;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override string ToString() {
    return pb::JsonFormatter.ToDiagnosticString(this);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void WriteTo(pb::CodedOutputStream output) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    output.WriteRawMessage(this);
  #else
    if (ChairId != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(ChairId);
    }
    if (Coin != 0L) {
      output.WriteRawTag(16);
      output.WriteInt64(Coin);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(output);
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
    if (ChairId != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(ChairId);
    }
    if (Coin != 0L) {
      output.WriteRawTag(16);
      output.WriteInt64(Coin);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(ref output);
    }
  }
  #endif

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CalculateSize() {
    int size = 0;
    if (ChairId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(ChairId);
    }
    if (Coin != 0L) {
      size += 1 + pb::CodedOutputStream.ComputeInt64Size(Coin);
    }
    if (_unknownFields != null) {
      size += _unknownFields.CalculateSize();
    }
    return size;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(MsgSyncPlayersScore other) {
    if (other == null) {
      return;
    }
    if (other.ChairId != 0) {
      ChairId = other.ChairId;
    }
    if (other.Coin != 0L) {
      Coin = other.Coin;
    }
    _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(pb::CodedInputStream input) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    input.ReadRawMessage(this);
  #else
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
          break;
        case 8: {
          ChairId = input.ReadInt32();
          break;
        }
        case 16: {
          Coin = input.ReadInt64();
          break;
        }
      }
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
          break;
        case 8: {
          ChairId = input.ReadInt32();
          break;
        }
        case 16: {
          Coin = input.ReadInt64();
          break;
        }
      }
    }
  }
  #endif

}

#endregion


#endregion Designer generated code
