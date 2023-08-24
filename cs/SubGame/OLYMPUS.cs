// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Proto/SubGame/OLYMPUS.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace OLYMPUS {

  /// <summary>Holder for reflection information generated from Proto/SubGame/OLYMPUS.proto</summary>
  public static partial class OLYMPUSReflection {

    #region Descriptor
    /// <summary>File descriptor for Proto/SubGame/OLYMPUS.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static OLYMPUSReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChtQcm90by9TdWJHYW1lL09MWU1QVVMucHJvdG8SB09MWU1QVVMiUQoMTXNn",
            "U2NlbmVJbmZvEgsKA2JldBgBIAMoBRIPCgdjdXJfYmV0GAIgASgFEg8KB2Fk",
            "ZF9tdWwYAyABKAUSEgoKZnJlZV90aW1lcxgEIAEoBSJHCghNc2dSb3VuZBIM",
            "CgRpY29uGAEgAygFEgsKA2hpdBgCIAMoCBITCgtzcGVjaWFsX211bBgDIAMo",
            "BRILCgNvZGQYBCABKAUicwoJTXNnUmVzdWx0EiUKCnJvdW5kX2RhdGEYASAD",
            "KAsyES5PTFlNUFVTLk1zZ1JvdW5kEhUKDXRhYmxlX2FsbF9tdWwYAiABKAUS",
            "EgoKZnJlZV90aW1lcxgDIAEoBRIUCgxmcmVlX2FkZF9tdWwYBCABKAUqfQoN",
            "RU1zZ0lEU3ViR2FtZRIVChFNc2dJRFN1YkdhbWVfTnVsbBAAEhoKFk1zZ0lE",
            "U3ViR2FtZV9HYW1lU3RhcnQQARIYChRNc2dJRFN1YkdhbWVfQnV5RnJlZRAC",
            "Eh8KG01zZ0lEU3ViR2FtZV9HYW1lUmVzdWx0UmVzcBADYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(new[] {typeof(global::OLYMPUS.EMsgIDSubGame), }, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::OLYMPUS.MsgSceneInfo), global::OLYMPUS.MsgSceneInfo.Parser, new[]{ "Bet", "CurBet", "AddMul", "FreeTimes" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::OLYMPUS.MsgRound), global::OLYMPUS.MsgRound.Parser, new[]{ "Icon", "Hit", "SpecialMul", "Odd" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::OLYMPUS.MsgResult), global::OLYMPUS.MsgResult.Parser, new[]{ "RoundData", "TableAllMul", "FreeTimes", "FreeAddMul" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Enums
  public enum EMsgIDSubGame {
    [pbr::OriginalName("MsgIDSubGame_Null")] MsgIdsubGameNull = 0,
    /// <summary>
    ///玩家开始游戏(MsgCommonN32)
    /// </summary>
    [pbr::OriginalName("MsgIDSubGame_GameStart")] MsgIdsubGameGameStart = 1,
    /// <summary>
    ///玩家购买免费游戏(MsgCommonN32)
    /// </summary>
    [pbr::OriginalName("MsgIDSubGame_BuyFree")] MsgIdsubGameBuyFree = 2,
    /// <summary>
    ///游戏结果(MsgResult)
    /// </summary>
    [pbr::OriginalName("MsgIDSubGame_GameResultResp")] MsgIdsubGameGameResultResp = 3,
  }

  #endregion

  #region Messages
  /// <summary>
  ///场景消息
  /// </summary>
  public sealed partial class MsgSceneInfo : pb::IMessage<MsgSceneInfo>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<MsgSceneInfo> _parser = new pb::MessageParser<MsgSceneInfo>(() => new MsgSceneInfo());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<MsgSceneInfo> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::OLYMPUS.OLYMPUSReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgSceneInfo() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgSceneInfo(MsgSceneInfo other) : this() {
      bet_ = other.bet_.Clone();
      curBet_ = other.curBet_;
      addMul_ = other.addMul_;
      freeTimes_ = other.freeTimes_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgSceneInfo Clone() {
      return new MsgSceneInfo(this);
    }

    /// <summary>Field number for the "bet" field.</summary>
    public const int BetFieldNumber = 1;
    private static readonly pb::FieldCodec<int> _repeated_bet_codec
        = pb::FieldCodec.ForInt32(10);
    private readonly pbc::RepeatedField<int> bet_ = new pbc::RepeatedField<int>();
    /// <summary>
    ///固定押注配置
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> Bet {
      get { return bet_; }
    }

    /// <summary>Field number for the "cur_bet" field.</summary>
    public const int CurBetFieldNumber = 2;
    private int curBet_;
    /// <summary>
    ///当前押注
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CurBet {
      get { return curBet_; }
      set {
        curBet_ = value;
      }
    }

    /// <summary>Field number for the "add_mul" field.</summary>
    public const int AddMulFieldNumber = 3;
    private int addMul_;
    /// <summary>
    ///免费累加倍数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int AddMul {
      get { return addMul_; }
      set {
        addMul_ = value;
      }
    }

    /// <summary>Field number for the "free_times" field.</summary>
    public const int FreeTimesFieldNumber = 4;
    private int freeTimes_;
    /// <summary>
    ///剩余免费次数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int FreeTimes {
      get { return freeTimes_; }
      set {
        freeTimes_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as MsgSceneInfo);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(MsgSceneInfo other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!bet_.Equals(other.bet_)) return false;
      if (CurBet != other.CurBet) return false;
      if (AddMul != other.AddMul) return false;
      if (FreeTimes != other.FreeTimes) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= bet_.GetHashCode();
      if (CurBet != 0) hash ^= CurBet.GetHashCode();
      if (AddMul != 0) hash ^= AddMul.GetHashCode();
      if (FreeTimes != 0) hash ^= FreeTimes.GetHashCode();
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
      bet_.WriteTo(output, _repeated_bet_codec);
      if (CurBet != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(CurBet);
      }
      if (AddMul != 0) {
        output.WriteRawTag(24);
        output.WriteInt32(AddMul);
      }
      if (FreeTimes != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(FreeTimes);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      bet_.WriteTo(ref output, _repeated_bet_codec);
      if (CurBet != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(CurBet);
      }
      if (AddMul != 0) {
        output.WriteRawTag(24);
        output.WriteInt32(AddMul);
      }
      if (FreeTimes != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(FreeTimes);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      size += bet_.CalculateSize(_repeated_bet_codec);
      if (CurBet != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(CurBet);
      }
      if (AddMul != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(AddMul);
      }
      if (FreeTimes != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(FreeTimes);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(MsgSceneInfo other) {
      if (other == null) {
        return;
      }
      bet_.Add(other.bet_);
      if (other.CurBet != 0) {
        CurBet = other.CurBet;
      }
      if (other.AddMul != 0) {
        AddMul = other.AddMul;
      }
      if (other.FreeTimes != 0) {
        FreeTimes = other.FreeTimes;
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
            bet_.AddEntriesFrom(input, _repeated_bet_codec);
            break;
          }
          case 16: {
            CurBet = input.ReadInt32();
            break;
          }
          case 24: {
            AddMul = input.ReadInt32();
            break;
          }
          case 32: {
            FreeTimes = input.ReadInt32();
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
            bet_.AddEntriesFrom(ref input, _repeated_bet_codec);
            break;
          }
          case 16: {
            CurBet = input.ReadInt32();
            break;
          }
          case 24: {
            AddMul = input.ReadInt32();
            break;
          }
          case 32: {
            FreeTimes = input.ReadInt32();
            break;
          }
        }
      }
    }
    #endif

  }

  /// <summary>
  ///游戏结果
  /// </summary>
  public sealed partial class MsgRound : pb::IMessage<MsgRound>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<MsgRound> _parser = new pb::MessageParser<MsgRound>(() => new MsgRound());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<MsgRound> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::OLYMPUS.OLYMPUSReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgRound() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgRound(MsgRound other) : this() {
      icon_ = other.icon_.Clone();
      hit_ = other.hit_.Clone();
      specialMul_ = other.specialMul_.Clone();
      odd_ = other.odd_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgRound Clone() {
      return new MsgRound(this);
    }

    /// <summary>Field number for the "icon" field.</summary>
    public const int IconFieldNumber = 1;
    private static readonly pb::FieldCodec<int> _repeated_icon_codec
        = pb::FieldCodec.ForInt32(10);
    private readonly pbc::RepeatedField<int> icon_ = new pbc::RepeatedField<int>();
    /// <summary>
    ///图标结果
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> Icon {
      get { return icon_; }
    }

    /// <summary>Field number for the "hit" field.</summary>
    public const int HitFieldNumber = 2;
    private static readonly pb::FieldCodec<bool> _repeated_hit_codec
        = pb::FieldCodec.ForBool(18);
    private readonly pbc::RepeatedField<bool> hit_ = new pbc::RepeatedField<bool>();
    /// <summary>
    ///击中图标
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<bool> Hit {
      get { return hit_; }
    }

    /// <summary>Field number for the "special_mul" field.</summary>
    public const int SpecialMulFieldNumber = 3;
    private static readonly pb::FieldCodec<int> _repeated_specialMul_codec
        = pb::FieldCodec.ForInt32(26);
    private readonly pbc::RepeatedField<int> specialMul_ = new pbc::RepeatedField<int>();
    /// <summary>
    ///特殊图标倍数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<int> SpecialMul {
      get { return specialMul_; }
    }

    /// <summary>Field number for the "odd" field.</summary>
    public const int OddFieldNumber = 4;
    private int odd_;
    /// <summary>
    ///倍数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int Odd {
      get { return odd_; }
      set {
        odd_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as MsgRound);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(MsgRound other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!icon_.Equals(other.icon_)) return false;
      if(!hit_.Equals(other.hit_)) return false;
      if(!specialMul_.Equals(other.specialMul_)) return false;
      if (Odd != other.Odd) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= icon_.GetHashCode();
      hash ^= hit_.GetHashCode();
      hash ^= specialMul_.GetHashCode();
      if (Odd != 0) hash ^= Odd.GetHashCode();
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
      hit_.WriteTo(output, _repeated_hit_codec);
      specialMul_.WriteTo(output, _repeated_specialMul_codec);
      if (Odd != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(Odd);
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
      hit_.WriteTo(ref output, _repeated_hit_codec);
      specialMul_.WriteTo(ref output, _repeated_specialMul_codec);
      if (Odd != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(Odd);
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
      size += hit_.CalculateSize(_repeated_hit_codec);
      size += specialMul_.CalculateSize(_repeated_specialMul_codec);
      if (Odd != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(Odd);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(MsgRound other) {
      if (other == null) {
        return;
      }
      icon_.Add(other.icon_);
      hit_.Add(other.hit_);
      specialMul_.Add(other.specialMul_);
      if (other.Odd != 0) {
        Odd = other.Odd;
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
            hit_.AddEntriesFrom(input, _repeated_hit_codec);
            break;
          }
          case 26:
          case 24: {
            specialMul_.AddEntriesFrom(input, _repeated_specialMul_codec);
            break;
          }
          case 32: {
            Odd = input.ReadInt32();
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
            hit_.AddEntriesFrom(ref input, _repeated_hit_codec);
            break;
          }
          case 26:
          case 24: {
            specialMul_.AddEntriesFrom(ref input, _repeated_specialMul_codec);
            break;
          }
          case 32: {
            Odd = input.ReadInt32();
            break;
          }
        }
      }
    }
    #endif

  }

  /// <summary>
  ///游戏结果
  /// </summary>
  public sealed partial class MsgResult : pb::IMessage<MsgResult>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<MsgResult> _parser = new pb::MessageParser<MsgResult>(() => new MsgResult());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<MsgResult> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::OLYMPUS.OLYMPUSReflection.Descriptor.MessageTypes[2]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgResult() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgResult(MsgResult other) : this() {
      roundData_ = other.roundData_.Clone();
      tableAllMul_ = other.tableAllMul_;
      freeTimes_ = other.freeTimes_;
      freeAddMul_ = other.freeAddMul_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public MsgResult Clone() {
      return new MsgResult(this);
    }

    /// <summary>Field number for the "round_data" field.</summary>
    public const int RoundDataFieldNumber = 1;
    private static readonly pb::FieldCodec<global::OLYMPUS.MsgRound> _repeated_roundData_codec
        = pb::FieldCodec.ForMessage(10, global::OLYMPUS.MsgRound.Parser);
    private readonly pbc::RepeatedField<global::OLYMPUS.MsgRound> roundData_ = new pbc::RepeatedField<global::OLYMPUS.MsgRound>();
    /// <summary>
    ///每回合图标信息
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::OLYMPUS.MsgRound> RoundData {
      get { return roundData_; }
    }

    /// <summary>Field number for the "table_all_mul" field.</summary>
    public const int TableAllMulFieldNumber = 2;
    private int tableAllMul_;
    /// <summary>
    ///总倍数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int TableAllMul {
      get { return tableAllMul_; }
      set {
        tableAllMul_ = value;
      }
    }

    /// <summary>Field number for the "free_times" field.</summary>
    public const int FreeTimesFieldNumber = 3;
    private int freeTimes_;
    /// <summary>
    ///免费次数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int FreeTimes {
      get { return freeTimes_; }
      set {
        freeTimes_ = value;
      }
    }

    /// <summary>Field number for the "free_add_mul" field.</summary>
    public const int FreeAddMulFieldNumber = 4;
    private int freeAddMul_;
    /// <summary>
    ///免费累加倍数
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int FreeAddMul {
      get { return freeAddMul_; }
      set {
        freeAddMul_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as MsgResult);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(MsgResult other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!roundData_.Equals(other.roundData_)) return false;
      if (TableAllMul != other.TableAllMul) return false;
      if (FreeTimes != other.FreeTimes) return false;
      if (FreeAddMul != other.FreeAddMul) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= roundData_.GetHashCode();
      if (TableAllMul != 0) hash ^= TableAllMul.GetHashCode();
      if (FreeTimes != 0) hash ^= FreeTimes.GetHashCode();
      if (FreeAddMul != 0) hash ^= FreeAddMul.GetHashCode();
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
      roundData_.WriteTo(output, _repeated_roundData_codec);
      if (TableAllMul != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(TableAllMul);
      }
      if (FreeTimes != 0) {
        output.WriteRawTag(24);
        output.WriteInt32(FreeTimes);
      }
      if (FreeAddMul != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(FreeAddMul);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      roundData_.WriteTo(ref output, _repeated_roundData_codec);
      if (TableAllMul != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(TableAllMul);
      }
      if (FreeTimes != 0) {
        output.WriteRawTag(24);
        output.WriteInt32(FreeTimes);
      }
      if (FreeAddMul != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(FreeAddMul);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      size += roundData_.CalculateSize(_repeated_roundData_codec);
      if (TableAllMul != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(TableAllMul);
      }
      if (FreeTimes != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(FreeTimes);
      }
      if (FreeAddMul != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(FreeAddMul);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(MsgResult other) {
      if (other == null) {
        return;
      }
      roundData_.Add(other.roundData_);
      if (other.TableAllMul != 0) {
        TableAllMul = other.TableAllMul;
      }
      if (other.FreeTimes != 0) {
        FreeTimes = other.FreeTimes;
      }
      if (other.FreeAddMul != 0) {
        FreeAddMul = other.FreeAddMul;
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
          case 10: {
            roundData_.AddEntriesFrom(input, _repeated_roundData_codec);
            break;
          }
          case 16: {
            TableAllMul = input.ReadInt32();
            break;
          }
          case 24: {
            FreeTimes = input.ReadInt32();
            break;
          }
          case 32: {
            FreeAddMul = input.ReadInt32();
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
          case 10: {
            roundData_.AddEntriesFrom(ref input, _repeated_roundData_codec);
            break;
          }
          case 16: {
            TableAllMul = input.ReadInt32();
            break;
          }
          case 24: {
            FreeTimes = input.ReadInt32();
            break;
          }
          case 32: {
            FreeAddMul = input.ReadInt32();
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