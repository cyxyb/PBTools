// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Proto/SubGame/WSZS.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace WSZS {

  /// <summary>Holder for reflection information generated from Proto/SubGame/WSZS.proto</summary>
  public static partial class WSZSReflection {

    #region Descriptor
    /// <summary>File descriptor for Proto/SubGame/WSZS.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static WSZSReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChhQcm90by9TdWJHYW1lL1dTWlMucHJvdG8SBFdTWlMibgoMU0NfU2NlbmVJ",
            "bmZvEhIKCmZyZWVfY291bnQYASABKAUSEwoLY3VycmVudF9iZXQYAiABKAUS",
            "EQoJYmV0X2NvdW50GAMgASgFEgsKA2JldBgEIAMoBRIVCg1taWFuX2p1X2Nv",
            "dW50GAUgAygFIoUBChBDTURfM0RfU0NfUmVzdWx0EgwKBGljb24YASADKAUS",
            "EAoIaGl0X2ljb24YAiADKAUSEAoId2luX2dvbGQYAyABKAUSFAoMbWlhbl9q",
            "dV9nb2xkGAQgASgFEhIKCmZyZWVfY291bnQYBSABKAUSFQoNbWlhbl9qdV9j",
            "b3VudBgGIAMoBSpOCgpFTXNnSURXU1pTEhUKEVNVQl9DU19HQU1FX1NUQVJU",
            "EAASFQoRU1VCX1NDX1NUQVJUX0dBTUUQARISCg5TVUJfU0NfQkVUX0VSUhAC",
            "YgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(new[] {typeof(global::WSZS.EMsgIDWSZS), }, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::WSZS.SC_SceneInfo), global::WSZS.SC_SceneInfo.Parser, new[]{ "FreeCount", "CurrentBet", "BetCount", "Bet", "MianJuCount" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::WSZS.CMD_3D_SC_Result), global::WSZS.CMD_3D_SC_Result.Parser, new[]{ "Icon", "HitIcon", "WinGold", "MianJuGold", "FreeCount", "MianJuCount" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Enums
  public enum EMsgIDWSZS {
    /// <summary>
    ///开始游戏
    /// </summary>
    [pbr::OriginalName("SUB_CS_GAME_START")] SubCsGameStart = 0,
    /// <summary>
    ///游戏结束(CMD_3D_SC_Result)
    /// </summary>
    [pbr::OriginalName("SUB_SC_START_GAME")] SubScStartGame = 1,
    /// <summary>
    ///下注失败
    /// </summary>
    [pbr::OriginalName("SUB_SC_BET_ERR")] SubScBetErr = 2,
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
      get { return global::WSZS.WSZSReflection.Descriptor.MessageTypes[0]; }
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
      mianJuCount_ = other.mianJuCount_.Clone();
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

    /// <summary>Field number for the "mian_ju_count" field.</summary>
    public const int MianJuCountFieldNumber = 5;
    private static readonly pb::FieldCodec<int> _repeated_mianJuCount_codec
        = pb::FieldCodec.ForInt32(42);
    private readonly pbc::RepeatedField<int> mianJuCount_ = new pbc::RepeatedField<int>();
    /// <summary>
    ///面具个数（0-3:4个面具 4：scatter）
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> MianJuCount {
      get { return mianJuCount_; }
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
      if(!mianJuCount_.Equals(other.mianJuCount_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (FreeCount != 0) hash ^= FreeCount.GetHashCode();
      if (CurrentBet != 0) hash ^= CurrentBet.GetHashCode();
      if (BetCount != 0) hash ^= BetCount.GetHashCode();
      hash ^= bet_.GetHashCode();
      hash ^= mianJuCount_.GetHashCode();
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
      mianJuCount_.WriteTo(output, _repeated_mianJuCount_codec);
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
      mianJuCount_.WriteTo(ref output, _repeated_mianJuCount_codec);
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
      size += mianJuCount_.CalculateSize(_repeated_mianJuCount_codec);
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
      mianJuCount_.Add(other.mianJuCount_);
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
            mianJuCount_.AddEntriesFrom(input, _repeated_mianJuCount_codec);
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
            mianJuCount_.AddEntriesFrom(ref input, _repeated_mianJuCount_codec);
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
      get { return global::WSZS.WSZSReflection.Descriptor.MessageTypes[1]; }
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
      mianJuGold_ = other.mianJuGold_;
      freeCount_ = other.freeCount_;
      mianJuCount_ = other.mianJuCount_.Clone();
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

    /// <summary>Field number for the "mian_ju_gold" field.</summary>
    public const int MianJuGoldFieldNumber = 4;
    private int mianJuGold_;
    /// <summary>
    ///赢得金币
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int MianJuGold {
      get { return mianJuGold_; }
      set {
        mianJuGold_ = value;
      }
    }

    /// <summary>Field number for the "free_count" field.</summary>
    public const int FreeCountFieldNumber = 5;
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

    /// <summary>Field number for the "mian_ju_count" field.</summary>
    public const int MianJuCountFieldNumber = 6;
    private static readonly pb::FieldCodec<int> _repeated_mianJuCount_codec
        = pb::FieldCodec.ForInt32(50);
    private readonly pbc::RepeatedField<int> mianJuCount_ = new pbc::RepeatedField<int>();
    /// <summary>
    ///面具个数（0-3:4个面具 4：scatter）
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> MianJuCount {
      get { return mianJuCount_; }
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
      if (MianJuGold != other.MianJuGold) return false;
      if (FreeCount != other.FreeCount) return false;
      if(!mianJuCount_.Equals(other.mianJuCount_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= icon_.GetHashCode();
      hash ^= hitIcon_.GetHashCode();
      if (WinGold != 0) hash ^= WinGold.GetHashCode();
      if (MianJuGold != 0) hash ^= MianJuGold.GetHashCode();
      if (FreeCount != 0) hash ^= FreeCount.GetHashCode();
      hash ^= mianJuCount_.GetHashCode();
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
      if (MianJuGold != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(MianJuGold);
      }
      if (FreeCount != 0) {
        output.WriteRawTag(40);
        output.WriteInt32(FreeCount);
      }
      mianJuCount_.WriteTo(output, _repeated_mianJuCount_codec);
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
      if (MianJuGold != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(MianJuGold);
      }
      if (FreeCount != 0) {
        output.WriteRawTag(40);
        output.WriteInt32(FreeCount);
      }
      mianJuCount_.WriteTo(ref output, _repeated_mianJuCount_codec);
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
      if (MianJuGold != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(MianJuGold);
      }
      if (FreeCount != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(FreeCount);
      }
      size += mianJuCount_.CalculateSize(_repeated_mianJuCount_codec);
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
      if (other.MianJuGold != 0) {
        MianJuGold = other.MianJuGold;
      }
      if (other.FreeCount != 0) {
        FreeCount = other.FreeCount;
      }
      mianJuCount_.Add(other.mianJuCount_);
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
            MianJuGold = input.ReadInt32();
            break;
          }
          case 40: {
            FreeCount = input.ReadInt32();
            break;
          }
          case 50:
          case 48: {
            mianJuCount_.AddEntriesFrom(input, _repeated_mianJuCount_codec);
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
            MianJuGold = input.ReadInt32();
            break;
          }
          case 40: {
            FreeCount = input.ReadInt32();
            break;
          }
          case 50:
          case 48: {
            mianJuCount_.AddEntriesFrom(ref input, _repeated_mianJuCount_codec);
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
