// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Proto/Chat/Chat.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Chat {

  /// <summary>Holder for reflection information generated from Proto/Chat/Chat.proto</summary>
  public static partial class ChatReflection {

    #region Descriptor
    /// <summary>File descriptor for Proto/Chat/Chat.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ChatReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChVQcm90by9DaGF0L0NoYXQucHJvdG8SBENoYXQiMQoMTXNnQ2hhdExvZ2lu",
            "Eg8KB3VzZXJfaWQYASABKAUSEAoIcGFzc3dvcmQYAiABKAkiqwEKEE1zZ0No",
            "YXRMb2dpblJlc3ASEAoIcmVzX2NvZGUYASABKAUSDwoHdXNlcl9pZBgCIAEo",
            "BRIUCgxiZWF1dGlmdWxfaWQYAyABKAUSEAoIbmlja25hbWUYBCABKAkSDgoG",
            "YXZhdGFyGAUgASgJEhEKCXZpcF9sZXZlbBgGIAEoBRIUCgxhdmF0YXJfZnJh",
            "bWUYByABKAUSEwoLY2xpZW50X3R5cGUYCCABKAViBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Chat.MsgChatLogin), global::Chat.MsgChatLogin.Parser, new[]{ "UserId", "Password" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Chat.MsgChatLoginResp), global::Chat.MsgChatLoginResp.Parser, new[]{ "ResCode", "UserId", "BeautifulId", "Nickname", "Avatar", "VipLevel", "AvatarFrame", "ClientType" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  ///玩家登录
  /// </summary>
  public sealed partial class MsgChatLogin : pb::IMessage<MsgChatLogin>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<MsgChatLogin> _parser = new pb::MessageParser<MsgChatLogin>(() => new MsgChatLogin());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<MsgChatLogin> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Chat.ChatReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgChatLogin() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgChatLogin(MsgChatLogin other) : this() {
      userId_ = other.userId_;
      password_ = other.password_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgChatLogin Clone() {
      return new MsgChatLogin(this);
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
      return Equals(other as MsgChatLogin);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(MsgChatLogin other) {
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
    public void MergeFrom(MsgChatLogin other) {
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
  ///玩家登录返回
  /// </summary>
  public sealed partial class MsgChatLoginResp : pb::IMessage<MsgChatLoginResp>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<MsgChatLoginResp> _parser = new pb::MessageParser<MsgChatLoginResp>(() => new MsgChatLoginResp());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<MsgChatLoginResp> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Chat.ChatReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgChatLoginResp() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgChatLoginResp(MsgChatLoginResp other) : this() {
      resCode_ = other.resCode_;
      userId_ = other.userId_;
      beautifulId_ = other.beautifulId_;
      nickname_ = other.nickname_;
      avatar_ = other.avatar_;
      vipLevel_ = other.vipLevel_;
      avatarFrame_ = other.avatarFrame_;
      clientType_ = other.clientType_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgChatLoginResp Clone() {
      return new MsgChatLoginResp(this);
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

    /// <summary>Field number for the "vip_level" field.</summary>
    public const int VipLevelFieldNumber = 6;
    private int vipLevel_;
    /// <summary>
    ///VIP等级
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int VipLevel {
      get { return vipLevel_; }
      set {
        vipLevel_ = value;
      }
    }

    /// <summary>Field number for the "avatar_frame" field.</summary>
    public const int AvatarFrameFieldNumber = 7;
    private int avatarFrame_;
    /// <summary>
    ///头像框
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int AvatarFrame {
      get { return avatarFrame_; }
      set {
        avatarFrame_ = value;
      }
    }

    /// <summary>Field number for the "client_type" field.</summary>
    public const int ClientTypeFieldNumber = 8;
    private int clientType_;
    /// <summary>
    ///包类型
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int ClientType {
      get { return clientType_; }
      set {
        clientType_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as MsgChatLoginResp);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(MsgChatLoginResp other) {
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
      if (VipLevel != other.VipLevel) return false;
      if (AvatarFrame != other.AvatarFrame) return false;
      if (ClientType != other.ClientType) return false;
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
      if (VipLevel != 0) hash ^= VipLevel.GetHashCode();
      if (AvatarFrame != 0) hash ^= AvatarFrame.GetHashCode();
      if (ClientType != 0) hash ^= ClientType.GetHashCode();
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
      if (VipLevel != 0) {
        output.WriteRawTag(48);
        output.WriteInt32(VipLevel);
      }
      if (AvatarFrame != 0) {
        output.WriteRawTag(56);
        output.WriteInt32(AvatarFrame);
      }
      if (ClientType != 0) {
        output.WriteRawTag(64);
        output.WriteInt32(ClientType);
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
      if (VipLevel != 0) {
        output.WriteRawTag(48);
        output.WriteInt32(VipLevel);
      }
      if (AvatarFrame != 0) {
        output.WriteRawTag(56);
        output.WriteInt32(AvatarFrame);
      }
      if (ClientType != 0) {
        output.WriteRawTag(64);
        output.WriteInt32(ClientType);
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
      if (VipLevel != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(VipLevel);
      }
      if (AvatarFrame != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(AvatarFrame);
      }
      if (ClientType != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(ClientType);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(MsgChatLoginResp other) {
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
      if (other.VipLevel != 0) {
        VipLevel = other.VipLevel;
      }
      if (other.AvatarFrame != 0) {
        AvatarFrame = other.AvatarFrame;
      }
      if (other.ClientType != 0) {
        ClientType = other.ClientType;
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
            VipLevel = input.ReadInt32();
            break;
          }
          case 56: {
            AvatarFrame = input.ReadInt32();
            break;
          }
          case 64: {
            ClientType = input.ReadInt32();
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
            VipLevel = input.ReadInt32();
            break;
          }
          case 56: {
            AvatarFrame = input.ReadInt32();
            break;
          }
          case 64: {
            ClientType = input.ReadInt32();
            break;
          }
        }
      }
    }
    #endif

  }

  #endregion

}

#endregion Designer generated code
