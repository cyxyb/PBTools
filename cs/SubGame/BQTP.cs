// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Proto/SubGame/BQTP.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace BQTP {

  /// <summary>Holder for reflection information generated from Proto/SubGame/BQTP.proto</summary>
  public static partial class BQTPReflection {

    #region Descriptor
    /// <summary>File descriptor for Proto/SubGame/BQTP.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static BQTPReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChhQcm90by9TdWJHYW1lL0JRVFAucHJvdG8SBEJRVFAiUgoMU0NfU2NlbmVJ",
            "bmZvEhIKCmZyZWVfY291bnQYASABKAUSEgoKY3VycmVuX2JldBgCIAEoBRIL",
            "CgNiZXQYAyADKAUSDQoFcmVydW4YBCABKAUifQoQQ01EXzNEX1NDX1Jlc3Vs",
            "dBIMCgRpY29uGAEgAygFEhAKCGhpdF9pY29uGAIgAygFEhAKCHdpbl9nb2xk",
            "GAMgASgDEhIKCmZyZWVfY291bnQYBCABKAUSDQoFcmVydW4YBSABKAUSFAoM",
            "c3BlY2lhbF93aWxkGAYgASgFKk8KCkVNc2dJREJRVFASFQoRU1VCX0NTX0dB",
            "TUVfU1RBUlQQABITCg9TVUJfU0NfQkVUX0ZBSUwQARIVChFTVUJfU0NfU1RB",
            "UlRfR0FNRRACYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(new[] {typeof(global::BQTP.EMsgIDBQTP), }, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::BQTP.SC_SceneInfo), global::BQTP.SC_SceneInfo.Parser, new[]{ "FreeCount", "CurrenBet", "Bet", "Rerun" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::BQTP.CMD_3D_SC_Result), global::BQTP.CMD_3D_SC_Result.Parser, new[]{ "Icon", "HitIcon", "WinGold", "FreeCount", "Rerun", "SpecialWild" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Enums
  public enum EMsgIDBQTP {
    /// <summary>
    ///开始游戏(MsgCommonN32)
    /// </summary>
    [pbr::OriginalName("SUB_CS_GAME_START")] SubCsGameStart = 0,
    /// <summary>
    ///游戏下注(MsgCommonBool)
    /// </summary>
    [pbr::OriginalName("SUB_SC_BET_FAIL")] SubScBetFail = 1,
    /// <summary>
    ///开始游戏(CMD_3D_SC_Result)
    /// </summary>
    [pbr::OriginalName("SUB_SC_START_GAME")] SubScStartGame = 2,
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
      get { return global::BQTP.BQTPReflection.Descriptor.MessageTypes[0]; }
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
      currenBet_ = other.currenBet_;
      bet_ = other.bet_.Clone();
      rerun_ = other.rerun_;
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
    /// 免费次数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int FreeCount {
      get { return freeCount_; }
      set {
        freeCount_ = value;
      }
    }

    /// <summary>Field number for the "curren_bet" field.</summary>
    public const int CurrenBetFieldNumber = 2;
    private int currenBet_;
    /// <summary>
    /// 当前下注
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CurrenBet {
      get { return currenBet_; }
      set {
        currenBet_ = value;
      }
    }

    /// <summary>Field number for the "bet" field.</summary>
    public const int BetFieldNumber = 3;
    private static readonly pb::FieldCodec<int> _repeated_bet_codec
        = pb::FieldCodec.ForInt32(26);
    private readonly pbc::RepeatedField<int> bet_ = new pbc::RepeatedField<int>();
    /// <summary>
    /// 下注配置
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> Bet {
      get { return bet_; }
    }

    /// <summary>Field number for the "rerun" field.</summary>
    public const int RerunFieldNumber = 4;
    private int rerun_;
    /// <summary>
    /// 重转次数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int Rerun {
      get { return rerun_; }
      set {
        rerun_ = value;
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
      if (CurrenBet != other.CurrenBet) return false;
      if(!bet_.Equals(other.bet_)) return false;
      if (Rerun != other.Rerun) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (FreeCount != 0) hash ^= FreeCount.GetHashCode();
      if (CurrenBet != 0) hash ^= CurrenBet.GetHashCode();
      hash ^= bet_.GetHashCode();
      if (Rerun != 0) hash ^= Rerun.GetHashCode();
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
      if (CurrenBet != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(CurrenBet);
      }
      bet_.WriteTo(output, _repeated_bet_codec);
      if (Rerun != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(Rerun);
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
      if (CurrenBet != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(CurrenBet);
      }
      bet_.WriteTo(ref output, _repeated_bet_codec);
      if (Rerun != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(Rerun);
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
      if (CurrenBet != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(CurrenBet);
      }
      size += bet_.CalculateSize(_repeated_bet_codec);
      if (Rerun != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(Rerun);
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
      if (other.CurrenBet != 0) {
        CurrenBet = other.CurrenBet;
      }
      bet_.Add(other.bet_);
      if (other.Rerun != 0) {
        Rerun = other.Rerun;
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
            CurrenBet = input.ReadInt32();
            break;
          }
          case 26:
          case 24: {
            bet_.AddEntriesFrom(input, _repeated_bet_codec);
            break;
          }
          case 32: {
            Rerun = input.ReadInt32();
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
            CurrenBet = input.ReadInt32();
            break;
          }
          case 26:
          case 24: {
            bet_.AddEntriesFrom(ref input, _repeated_bet_codec);
            break;
          }
          case 32: {
            Rerun = input.ReadInt32();
            break;
          }
        }
      }
    }
    #endif

  }

  /// <summary>
  ///游戏结果返回
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
      get { return global::BQTP.BQTPReflection.Descriptor.MessageTypes[1]; }
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
      rerun_ = other.rerun_;
      specialWild_ = other.specialWild_;
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
    /// 击中的图标
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> HitIcon {
      get { return hitIcon_; }
    }

    /// <summary>Field number for the "win_gold" field.</summary>
    public const int WinGoldFieldNumber = 3;
    private long winGold_;
    /// <summary>
    /// 赢得金币
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public long WinGold {
      get { return winGold_; }
      set {
        winGold_ = value;
      }
    }

    /// <summary>Field number for the "free_count" field.</summary>
    public const int FreeCountFieldNumber = 4;
    private int freeCount_;
    /// <summary>
    /// 免费次数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int FreeCount {
      get { return freeCount_; }
      set {
        freeCount_ = value;
      }
    }

    /// <summary>Field number for the "rerun" field.</summary>
    public const int RerunFieldNumber = 5;
    private int rerun_;
    /// <summary>
    /// 下一次是重转第几次
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int Rerun {
      get { return rerun_; }
      set {
        rerun_ = value;
      }
    }

    /// <summary>Field number for the "special_wild" field.</summary>
    public const int SpecialWildFieldNumber = 6;
    private int specialWild_;
    /// <summary>
    /// 第几列中全wild
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int SpecialWild {
      get { return specialWild_; }
      set {
        specialWild_ = value;
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
      if (Rerun != other.Rerun) return false;
      if (SpecialWild != other.SpecialWild) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= icon_.GetHashCode();
      hash ^= hitIcon_.GetHashCode();
      if (WinGold != 0L) hash ^= WinGold.GetHashCode();
      if (FreeCount != 0) hash ^= FreeCount.GetHashCode();
      if (Rerun != 0) hash ^= Rerun.GetHashCode();
      if (SpecialWild != 0) hash ^= SpecialWild.GetHashCode();
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
      if (WinGold != 0L) {
        output.WriteRawTag(24);
        output.WriteInt64(WinGold);
      }
      if (FreeCount != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(FreeCount);
      }
      if (Rerun != 0) {
        output.WriteRawTag(40);
        output.WriteInt32(Rerun);
      }
      if (SpecialWild != 0) {
        output.WriteRawTag(48);
        output.WriteInt32(SpecialWild);
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
      if (WinGold != 0L) {
        output.WriteRawTag(24);
        output.WriteInt64(WinGold);
      }
      if (FreeCount != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(FreeCount);
      }
      if (Rerun != 0) {
        output.WriteRawTag(40);
        output.WriteInt32(Rerun);
      }
      if (SpecialWild != 0) {
        output.WriteRawTag(48);
        output.WriteInt32(SpecialWild);
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
      if (WinGold != 0L) {
        size += 1 + pb::CodedOutputStream.ComputeInt64Size(WinGold);
      }
      if (FreeCount != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(FreeCount);
      }
      if (Rerun != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(Rerun);
      }
      if (SpecialWild != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(SpecialWild);
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
      if (other.WinGold != 0L) {
        WinGold = other.WinGold;
      }
      if (other.FreeCount != 0) {
        FreeCount = other.FreeCount;
      }
      if (other.Rerun != 0) {
        Rerun = other.Rerun;
      }
      if (other.SpecialWild != 0) {
        SpecialWild = other.SpecialWild;
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
            WinGold = input.ReadInt64();
            break;
          }
          case 32: {
            FreeCount = input.ReadInt32();
            break;
          }
          case 40: {
            Rerun = input.ReadInt32();
            break;
          }
          case 48: {
            SpecialWild = input.ReadInt32();
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
            WinGold = input.ReadInt64();
            break;
          }
          case 32: {
            FreeCount = input.ReadInt32();
            break;
          }
          case 40: {
            Rerun = input.ReadInt32();
            break;
          }
          case 48: {
            SpecialWild = input.ReadInt32();
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