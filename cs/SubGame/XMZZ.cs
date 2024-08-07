// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Proto/SubGame/XMZZ.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace XMZZ {

  /// <summary>Holder for reflection information generated from Proto/SubGame/XMZZ.proto</summary>
  public static partial class XMZZReflection {

    #region Descriptor
    /// <summary>File descriptor for Proto/SubGame/XMZZ.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static XMZZReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChhQcm90by9TdWJHYW1lL1hNWloucHJvdG8SBFhNWloifAoMU0NfU2NlbmVJ",
            "bmZvEhIKCmZyZWVfY291bnQYASABKAUSEwoLY3VycmVudF9iZXQYAiABKAUS",
            "EQoJYmV0X2NvdW50GAMgASgFEgsKA2JldBgEIAMoBRIQCghjb2xfd2lsZBgF",
            "IAMoBRIRCglmcmVlX3R5cGUYBiABKAUiawoQQ01EXzNEX1NDX1Jlc3VsdBIM",
            "CgRpY29uGAEgAygFEhAKCGhpdF9pY29uGAIgAygFEhAKCHdpbl9nb2xkGAMg",
            "ASgFEhIKCmZyZWVfY291bnQYBCABKAUSEQoJZnJlZV90eXBlGAUgASgFIisK",
            "EUNNRF8zRF9TQ19KYWNrcG90EhYKDmphY2tfcG90X3Njb3JlGAEgASgFKoAB",
            "CgpFTXNnSURYTVpaEhUKEVNVQl9DU19HQU1FX1NUQVJUEAASFAoQU1VCX1ND",
            "X0dBTUVfT1ZFUhABEhUKEVNVQl9TQ19TTUFMTF9HQU1FEAISEwoPU1VCX1ND",
            "X0JFVF9GQUlMEAMSGQoVU1VCX1NDX1VQREFURV9KQUNLUE9UEARiBnByb3Rv",
            "Mw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(new[] {typeof(global::XMZZ.EMsgIDXMZZ), }, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::XMZZ.SC_SceneInfo), global::XMZZ.SC_SceneInfo.Parser, new[]{ "FreeCount", "CurrentBet", "BetCount", "Bet", "ColWild", "FreeType" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::XMZZ.CMD_3D_SC_Result), global::XMZZ.CMD_3D_SC_Result.Parser, new[]{ "Icon", "HitIcon", "WinGold", "FreeCount", "FreeType" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::XMZZ.CMD_3D_SC_Jackpot), global::XMZZ.CMD_3D_SC_Jackpot.Parser, new[]{ "JackPotScore" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Enums
  public enum EMsgIDXMZZ {
    /// <summary>
    ///开始游戏
    /// </summary>
    [pbr::OriginalName("SUB_CS_GAME_START")] SubCsGameStart = 0,
    /// <summary>
    ///游戏结束	CMD_3D_SC_Result
    /// </summary>
    [pbr::OriginalName("SUB_SC_GAME_OVER")] SubScGameOver = 1,
    /// <summary>
    ///小游戏返回 没看到用
    /// </summary>
    [pbr::OriginalName("SUB_SC_SMALL_GAME")] SubScSmallGame = 2,
    /// <summary>
    ///下注失败
    /// </summary>
    [pbr::OriginalName("SUB_SC_BET_FAIL")] SubScBetFail = 3,
    /// <summary>
    ///奖池分数 CMD_3D_SC_Jackpot
    /// </summary>
    [pbr::OriginalName("SUB_SC_UPDATE_JACKPOT")] SubScUpdateJackpot = 4,
  }

  #endregion

  #region Messages
  /// <summary>
  ///场景消息		
  /// </summary>
  public sealed partial class SC_SceneInfo : pb::IMessage<SC_SceneInfo>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<SC_SceneInfo> _parser = new pb::MessageParser<SC_SceneInfo>(() => new SC_SceneInfo());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<SC_SceneInfo> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::XMZZ.XMZZReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public SC_SceneInfo() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public SC_SceneInfo(SC_SceneInfo other) : this() {
      freeCount_ = other.freeCount_;
      currentBet_ = other.currentBet_;
      betCount_ = other.betCount_;
      bet_ = other.bet_.Clone();
      colWild_ = other.colWild_.Clone();
      freeType_ = other.freeType_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public SC_SceneInfo Clone() {
      return new SC_SceneInfo(this);
    }

    /// <summary>Field number for the "free_count" field.</summary>
    public const int FreeCountFieldNumber = 1;
    private int freeCount_;
    /// <summary>
    ///免费次数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int FreeCount {
      get { return freeCount_; }
      set {
        freeCount_ = value;
      }
    }

    /// <summary>Field number for the "current_bet" field.</summary>
    public const int CurrentBetFieldNumber = 2;
    private int currentBet_;
    /// <summary>
    ///当前下注
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CurrentBet {
      get { return currentBet_; }
      set {
        currentBet_ = value;
      }
    }

    /// <summary>Field number for the "bet_count" field.</summary>
    public const int BetCountFieldNumber = 3;
    private int betCount_;
    /// <summary>
    ///下注列表个数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int BetCount {
      get { return betCount_; }
      set {
        betCount_ = value;
      }
    }

    /// <summary>Field number for the "bet" field.</summary>
    public const int BetFieldNumber = 4;
    private static readonly pb::FieldCodec<int> _repeated_bet_codec
        = pb::FieldCodec.ForInt32(34);
    private readonly pbc::RepeatedField<int> bet_ = new pbc::RepeatedField<int>();
    /// <summary>
    ///下注
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> Bet {
      get { return bet_; }
    }

    /// <summary>Field number for the "col_wild" field.</summary>
    public const int ColWildFieldNumber = 5;
    private static readonly pb::FieldCodec<int> _repeated_colWild_codec
        = pb::FieldCodec.ForInt32(42);
    private readonly pbc::RepeatedField<int> colWild_ = new pbc::RepeatedField<int>();
    /// <summary>
    ///是否出现新的整列wild
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> ColWild {
      get { return colWild_; }
    }

    /// <summary>Field number for the "free_type" field.</summary>
    public const int FreeTypeFieldNumber = 6;
    private int freeType_;
    /// <summary>
    ///免费类型
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int FreeType {
      get { return freeType_; }
      set {
        freeType_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as SC_SceneInfo);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(SC_SceneInfo other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (FreeCount != other.FreeCount) return false;
      if (CurrentBet != other.CurrentBet) return false;
      if (BetCount != other.BetCount) return false;
      if(!bet_.Equals(other.bet_)) return false;
      if(!colWild_.Equals(other.colWild_)) return false;
      if (FreeType != other.FreeType) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (FreeCount != 0) hash ^= FreeCount.GetHashCode();
      if (CurrentBet != 0) hash ^= CurrentBet.GetHashCode();
      if (BetCount != 0) hash ^= BetCount.GetHashCode();
      hash ^= bet_.GetHashCode();
      hash ^= colWild_.GetHashCode();
      if (FreeType != 0) hash ^= FreeType.GetHashCode();
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
      if (FreeCount != 0) {
        output.WriteRawTag(8);
        output.WriteInt32(FreeCount);
      }
      if (CurrentBet != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(CurrentBet);
      }
      if (BetCount != 0) {
        output.WriteRawTag(24);
        output.WriteInt32(BetCount);
      }
      bet_.WriteTo(output, _repeated_bet_codec);
      colWild_.WriteTo(output, _repeated_colWild_codec);
      if (FreeType != 0) {
        output.WriteRawTag(48);
        output.WriteInt32(FreeType);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (FreeCount != 0) {
        output.WriteRawTag(8);
        output.WriteInt32(FreeCount);
      }
      if (CurrentBet != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(CurrentBet);
      }
      if (BetCount != 0) {
        output.WriteRawTag(24);
        output.WriteInt32(BetCount);
      }
      bet_.WriteTo(ref output, _repeated_bet_codec);
      colWild_.WriteTo(ref output, _repeated_colWild_codec);
      if (FreeType != 0) {
        output.WriteRawTag(48);
        output.WriteInt32(FreeType);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (FreeCount != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(FreeCount);
      }
      if (CurrentBet != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(CurrentBet);
      }
      if (BetCount != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(BetCount);
      }
      size += bet_.CalculateSize(_repeated_bet_codec);
      size += colWild_.CalculateSize(_repeated_colWild_codec);
      if (FreeType != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(FreeType);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(SC_SceneInfo other) {
      if (other == null) {
        return;
      }
      if (other.FreeCount != 0) {
        FreeCount = other.FreeCount;
      }
      if (other.CurrentBet != 0) {
        CurrentBet = other.CurrentBet;
      }
      if (other.BetCount != 0) {
        BetCount = other.BetCount;
      }
      bet_.Add(other.bet_);
      colWild_.Add(other.colWild_);
      if (other.FreeType != 0) {
        FreeType = other.FreeType;
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
            FreeCount = input.ReadInt32();
            break;
          }
          case 16: {
            CurrentBet = input.ReadInt32();
            break;
          }
          case 24: {
            BetCount = input.ReadInt32();
            break;
          }
          case 34:
          case 32: {
            bet_.AddEntriesFrom(input, _repeated_bet_codec);
            break;
          }
          case 42:
          case 40: {
            colWild_.AddEntriesFrom(input, _repeated_colWild_codec);
            break;
          }
          case 48: {
            FreeType = input.ReadInt32();
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
            FreeCount = input.ReadInt32();
            break;
          }
          case 16: {
            CurrentBet = input.ReadInt32();
            break;
          }
          case 24: {
            BetCount = input.ReadInt32();
            break;
          }
          case 34:
          case 32: {
            bet_.AddEntriesFrom(ref input, _repeated_bet_codec);
            break;
          }
          case 42:
          case 40: {
            colWild_.AddEntriesFrom(ref input, _repeated_colWild_codec);
            break;
          }
          case 48: {
            FreeType = input.ReadInt32();
            break;
          }
        }
      }
    }
    #endif

  }

  /// <summary>
  /// 游戏结果返回
  /// </summary>
  public sealed partial class CMD_3D_SC_Result : pb::IMessage<CMD_3D_SC_Result>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<CMD_3D_SC_Result> _parser = new pb::MessageParser<CMD_3D_SC_Result>(() => new CMD_3D_SC_Result());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<CMD_3D_SC_Result> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::XMZZ.XMZZReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public CMD_3D_SC_Result() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public CMD_3D_SC_Result(CMD_3D_SC_Result other) : this() {
      icon_ = other.icon_.Clone();
      hitIcon_ = other.hitIcon_.Clone();
      winGold_ = other.winGold_;
      freeCount_ = other.freeCount_;
      freeType_ = other.freeType_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public CMD_3D_SC_Result Clone() {
      return new CMD_3D_SC_Result(this);
    }

    /// <summary>Field number for the "icon" field.</summary>
    public const int IconFieldNumber = 1;
    private static readonly pb::FieldCodec<int> _repeated_icon_codec
        = pb::FieldCodec.ForInt32(10);
    private readonly pbc::RepeatedField<int> icon_ = new pbc::RepeatedField<int>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> Icon {
      get { return icon_; }
    }

    /// <summary>Field number for the "hit_icon" field.</summary>
    public const int HitIconFieldNumber = 2;
    private static readonly pb::FieldCodec<int> _repeated_hitIcon_codec
        = pb::FieldCodec.ForInt32(18);
    private readonly pbc::RepeatedField<int> hitIcon_ = new pbc::RepeatedField<int>();
    /// <summary>
    ///击中的图标
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> HitIcon {
      get { return hitIcon_; }
    }

    /// <summary>Field number for the "win_gold" field.</summary>
    public const int WinGoldFieldNumber = 3;
    private int winGold_;
    /// <summary>
    ///赢得金币
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int WinGold {
      get { return winGold_; }
      set {
        winGold_ = value;
      }
    }

    /// <summary>Field number for the "free_count" field.</summary>
    public const int FreeCountFieldNumber = 4;
    private int freeCount_;
    /// <summary>
    ///免费次数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int FreeCount {
      get { return freeCount_; }
      set {
        freeCount_ = value;
      }
    }

    /// <summary>Field number for the "free_type" field.</summary>
    public const int FreeTypeFieldNumber = 5;
    private int freeType_;
    /// <summary>
    ///赢得金币
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int FreeType {
      get { return freeType_; }
      set {
        freeType_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as CMD_3D_SC_Result);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(CMD_3D_SC_Result other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!icon_.Equals(other.icon_)) return false;
      if(!hitIcon_.Equals(other.hitIcon_)) return false;
      if (WinGold != other.WinGold) return false;
      if (FreeCount != other.FreeCount) return false;
      if (FreeType != other.FreeType) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= icon_.GetHashCode();
      hash ^= hitIcon_.GetHashCode();
      if (WinGold != 0) hash ^= WinGold.GetHashCode();
      if (FreeCount != 0) hash ^= FreeCount.GetHashCode();
      if (FreeType != 0) hash ^= FreeType.GetHashCode();
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
      icon_.WriteTo(output, _repeated_icon_codec);
      hitIcon_.WriteTo(output, _repeated_hitIcon_codec);
      if (WinGold != 0) {
        output.WriteRawTag(24);
        output.WriteInt32(WinGold);
      }
      if (FreeCount != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(FreeCount);
      }
      if (FreeType != 0) {
        output.WriteRawTag(40);
        output.WriteInt32(FreeType);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      icon_.WriteTo(ref output, _repeated_icon_codec);
      hitIcon_.WriteTo(ref output, _repeated_hitIcon_codec);
      if (WinGold != 0) {
        output.WriteRawTag(24);
        output.WriteInt32(WinGold);
      }
      if (FreeCount != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(FreeCount);
      }
      if (FreeType != 0) {
        output.WriteRawTag(40);
        output.WriteInt32(FreeType);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      size += icon_.CalculateSize(_repeated_icon_codec);
      size += hitIcon_.CalculateSize(_repeated_hitIcon_codec);
      if (WinGold != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(WinGold);
      }
      if (FreeCount != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(FreeCount);
      }
      if (FreeType != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(FreeType);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(CMD_3D_SC_Result other) {
      if (other == null) {
        return;
      }
      icon_.Add(other.icon_);
      hitIcon_.Add(other.hitIcon_);
      if (other.WinGold != 0) {
        WinGold = other.WinGold;
      }
      if (other.FreeCount != 0) {
        FreeCount = other.FreeCount;
      }
      if (other.FreeType != 0) {
        FreeType = other.FreeType;
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
          case 10:
          case 8: {
            icon_.AddEntriesFrom(input, _repeated_icon_codec);
            break;
          }
          case 18:
          case 16: {
            hitIcon_.AddEntriesFrom(input, _repeated_hitIcon_codec);
            break;
          }
          case 24: {
            WinGold = input.ReadInt32();
            break;
          }
          case 32: {
            FreeCount = input.ReadInt32();
            break;
          }
          case 40: {
            FreeType = input.ReadInt32();
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
          case 10:
          case 8: {
            icon_.AddEntriesFrom(ref input, _repeated_icon_codec);
            break;
          }
          case 18:
          case 16: {
            hitIcon_.AddEntriesFrom(ref input, _repeated_hitIcon_codec);
            break;
          }
          case 24: {
            WinGold = input.ReadInt32();
            break;
          }
          case 32: {
            FreeCount = input.ReadInt32();
            break;
          }
          case 40: {
            FreeType = input.ReadInt32();
            break;
          }
        }
      }
    }
    #endif

  }

  /// <summary>
  ///更新奖池
  /// </summary>
  public sealed partial class CMD_3D_SC_Jackpot : pb::IMessage<CMD_3D_SC_Jackpot>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<CMD_3D_SC_Jackpot> _parser = new pb::MessageParser<CMD_3D_SC_Jackpot>(() => new CMD_3D_SC_Jackpot());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<CMD_3D_SC_Jackpot> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::XMZZ.XMZZReflection.Descriptor.MessageTypes[2]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public CMD_3D_SC_Jackpot() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public CMD_3D_SC_Jackpot(CMD_3D_SC_Jackpot other) : this() {
      jackPotScore_ = other.jackPotScore_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public CMD_3D_SC_Jackpot Clone() {
      return new CMD_3D_SC_Jackpot(this);
    }

    /// <summary>Field number for the "jack_pot_score" field.</summary>
    public const int JackPotScoreFieldNumber = 1;
    private int jackPotScore_;
    /// <summary>
    ///奖池分数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int JackPotScore {
      get { return jackPotScore_; }
      set {
        jackPotScore_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as CMD_3D_SC_Jackpot);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(CMD_3D_SC_Jackpot other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (JackPotScore != other.JackPotScore) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (JackPotScore != 0) hash ^= JackPotScore.GetHashCode();
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
      if (JackPotScore != 0) {
        output.WriteRawTag(8);
        output.WriteInt32(JackPotScore);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (JackPotScore != 0) {
        output.WriteRawTag(8);
        output.WriteInt32(JackPotScore);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (JackPotScore != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(JackPotScore);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(CMD_3D_SC_Jackpot other) {
      if (other == null) {
        return;
      }
      if (other.JackPotScore != 0) {
        JackPotScore = other.JackPotScore;
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
            JackPotScore = input.ReadInt32();
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
            JackPotScore = input.ReadInt32();
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
