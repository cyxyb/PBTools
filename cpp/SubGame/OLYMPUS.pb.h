// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OLYMPUS.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_OLYMPUS_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_OLYMPUS_2eproto

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_OLYMPUS_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_OLYMPUS_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_OLYMPUS_2eproto;
namespace OLYMPUS {
class MsgResult;
class MsgResultDefaultTypeInternal;
extern MsgResultDefaultTypeInternal _MsgResult_default_instance_;
class MsgRound;
class MsgRoundDefaultTypeInternal;
extern MsgRoundDefaultTypeInternal _MsgRound_default_instance_;
class MsgSceneInfo;
class MsgSceneInfoDefaultTypeInternal;
extern MsgSceneInfoDefaultTypeInternal _MsgSceneInfo_default_instance_;
}  // namespace OLYMPUS
PROTOBUF_NAMESPACE_OPEN
template<> ::OLYMPUS::MsgResult* Arena::CreateMaybeMessage<::OLYMPUS::MsgResult>(Arena*);
template<> ::OLYMPUS::MsgRound* Arena::CreateMaybeMessage<::OLYMPUS::MsgRound>(Arena*);
template<> ::OLYMPUS::MsgSceneInfo* Arena::CreateMaybeMessage<::OLYMPUS::MsgSceneInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace OLYMPUS {

enum EMsgIDSubGame : int {
  MsgIDSubGame_Null = 0,
  MsgIDSubGame_GameStart = 1,
  MsgIDSubGame_BuyFree = 2,
  MsgIDSubGame_GameResultResp = 3,
  EMsgIDSubGame_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDSubGame_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDSubGame_IsValid(int value);
constexpr EMsgIDSubGame EMsgIDSubGame_MIN = MsgIDSubGame_Null;
constexpr EMsgIDSubGame EMsgIDSubGame_MAX = MsgIDSubGame_GameResultResp;
constexpr int EMsgIDSubGame_ARRAYSIZE = EMsgIDSubGame_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDSubGame_descriptor();
template<typename T>
inline const std::string& EMsgIDSubGame_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMsgIDSubGame>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMsgIDSubGame_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMsgIDSubGame_descriptor(), enum_t_value);
}
inline bool EMsgIDSubGame_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EMsgIDSubGame* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMsgIDSubGame>(
    EMsgIDSubGame_descriptor(), name, value);
}
// ===================================================================

class MsgSceneInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:OLYMPUS.MsgSceneInfo) */ {
 public:
  inline MsgSceneInfo() : MsgSceneInfo(nullptr) {}
  virtual ~MsgSceneInfo();

  MsgSceneInfo(const MsgSceneInfo& from);
  MsgSceneInfo(MsgSceneInfo&& from) noexcept
    : MsgSceneInfo() {
    *this = ::std::move(from);
  }

  inline MsgSceneInfo& operator=(const MsgSceneInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgSceneInfo& operator=(MsgSceneInfo&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MsgSceneInfo& default_instance();

  static inline const MsgSceneInfo* internal_default_instance() {
    return reinterpret_cast<const MsgSceneInfo*>(
               &_MsgSceneInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MsgSceneInfo& a, MsgSceneInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgSceneInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MsgSceneInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgSceneInfo* New() const final {
    return CreateMaybeMessage<MsgSceneInfo>(nullptr);
  }

  MsgSceneInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgSceneInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgSceneInfo& from);
  void MergeFrom(const MsgSceneInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MsgSceneInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "OLYMPUS.MsgSceneInfo";
  }
  protected:
  explicit MsgSceneInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_OLYMPUS_2eproto);
    return ::descriptor_table_OLYMPUS_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBetFieldNumber = 1,
    kCurBetFieldNumber = 2,
    kAddMulFieldNumber = 3,
    kFreeTimesFieldNumber = 4,
  };
  // repeated int32 bet = 1;
  int bet_size() const;
  private:
  int _internal_bet_size() const;
  public:
  void clear_bet();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_bet(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_bet() const;
  void _internal_add_bet(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_bet();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 bet(int index) const;
  void set_bet(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_bet(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      bet() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_bet();

  // int32 cur_bet = 2;
  void clear_cur_bet();
  ::PROTOBUF_NAMESPACE_ID::int32 cur_bet() const;
  void set_cur_bet(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_cur_bet() const;
  void _internal_set_cur_bet(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 add_mul = 3;
  void clear_add_mul();
  ::PROTOBUF_NAMESPACE_ID::int32 add_mul() const;
  void set_add_mul(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_add_mul() const;
  void _internal_set_add_mul(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 free_times = 4;
  void clear_free_times();
  ::PROTOBUF_NAMESPACE_ID::int32 free_times() const;
  void set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_free_times() const;
  void _internal_set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:OLYMPUS.MsgSceneInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > bet_;
  mutable std::atomic<int> _bet_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 cur_bet_;
  ::PROTOBUF_NAMESPACE_ID::int32 add_mul_;
  ::PROTOBUF_NAMESPACE_ID::int32 free_times_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_OLYMPUS_2eproto;
};
// -------------------------------------------------------------------

class MsgRound PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:OLYMPUS.MsgRound) */ {
 public:
  inline MsgRound() : MsgRound(nullptr) {}
  virtual ~MsgRound();

  MsgRound(const MsgRound& from);
  MsgRound(MsgRound&& from) noexcept
    : MsgRound() {
    *this = ::std::move(from);
  }

  inline MsgRound& operator=(const MsgRound& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgRound& operator=(MsgRound&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MsgRound& default_instance();

  static inline const MsgRound* internal_default_instance() {
    return reinterpret_cast<const MsgRound*>(
               &_MsgRound_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MsgRound& a, MsgRound& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgRound* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MsgRound* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgRound* New() const final {
    return CreateMaybeMessage<MsgRound>(nullptr);
  }

  MsgRound* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgRound>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgRound& from);
  void MergeFrom(const MsgRound& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MsgRound* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "OLYMPUS.MsgRound";
  }
  protected:
  explicit MsgRound(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_OLYMPUS_2eproto);
    return ::descriptor_table_OLYMPUS_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIconFieldNumber = 1,
    kHitFieldNumber = 2,
    kSpecialMulFieldNumber = 3,
    kOddFieldNumber = 4,
  };
  // repeated int32 icon = 1;
  int icon_size() const;
  private:
  int _internal_icon_size() const;
  public:
  void clear_icon();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_icon(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_icon() const;
  void _internal_add_icon(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_icon();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 icon(int index) const;
  void set_icon(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_icon(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      icon() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_icon();

  // repeated bool hit = 2;
  int hit_size() const;
  private:
  int _internal_hit_size() const;
  public:
  void clear_hit();
  private:
  bool _internal_hit(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
      _internal_hit() const;
  void _internal_add_hit(bool value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
      _internal_mutable_hit();
  public:
  bool hit(int index) const;
  void set_hit(int index, bool value);
  void add_hit(bool value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
      hit() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
      mutable_hit();

  // repeated int32 special_mul = 3;
  int special_mul_size() const;
  private:
  int _internal_special_mul_size() const;
  public:
  void clear_special_mul();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_special_mul(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_special_mul() const;
  void _internal_add_special_mul(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_special_mul();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 special_mul(int index) const;
  void set_special_mul(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_special_mul(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      special_mul() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_special_mul();

  // int32 odd = 4;
  void clear_odd();
  ::PROTOBUF_NAMESPACE_ID::int32 odd() const;
  void set_odd(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_odd() const;
  void _internal_set_odd(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:OLYMPUS.MsgRound)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > icon_;
  mutable std::atomic<int> _icon_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool > hit_;
  mutable std::atomic<int> _hit_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > special_mul_;
  mutable std::atomic<int> _special_mul_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 odd_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_OLYMPUS_2eproto;
};
// -------------------------------------------------------------------

class MsgResult PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:OLYMPUS.MsgResult) */ {
 public:
  inline MsgResult() : MsgResult(nullptr) {}
  virtual ~MsgResult();

  MsgResult(const MsgResult& from);
  MsgResult(MsgResult&& from) noexcept
    : MsgResult() {
    *this = ::std::move(from);
  }

  inline MsgResult& operator=(const MsgResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgResult& operator=(MsgResult&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MsgResult& default_instance();

  static inline const MsgResult* internal_default_instance() {
    return reinterpret_cast<const MsgResult*>(
               &_MsgResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MsgResult& a, MsgResult& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgResult* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MsgResult* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgResult* New() const final {
    return CreateMaybeMessage<MsgResult>(nullptr);
  }

  MsgResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgResult>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgResult& from);
  void MergeFrom(const MsgResult& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MsgResult* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "OLYMPUS.MsgResult";
  }
  protected:
  explicit MsgResult(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_OLYMPUS_2eproto);
    return ::descriptor_table_OLYMPUS_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRoundDataFieldNumber = 1,
    kTableAllMulFieldNumber = 2,
    kFreeTimesFieldNumber = 3,
    kFreeAddMulFieldNumber = 4,
  };
  // repeated .OLYMPUS.MsgRound round_data = 1;
  int round_data_size() const;
  private:
  int _internal_round_data_size() const;
  public:
  void clear_round_data();
  ::OLYMPUS::MsgRound* mutable_round_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::OLYMPUS::MsgRound >*
      mutable_round_data();
  private:
  const ::OLYMPUS::MsgRound& _internal_round_data(int index) const;
  ::OLYMPUS::MsgRound* _internal_add_round_data();
  public:
  const ::OLYMPUS::MsgRound& round_data(int index) const;
  ::OLYMPUS::MsgRound* add_round_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::OLYMPUS::MsgRound >&
      round_data() const;

  // int32 table_all_mul = 2;
  void clear_table_all_mul();
  ::PROTOBUF_NAMESPACE_ID::int32 table_all_mul() const;
  void set_table_all_mul(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_table_all_mul() const;
  void _internal_set_table_all_mul(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 free_times = 3;
  void clear_free_times();
  ::PROTOBUF_NAMESPACE_ID::int32 free_times() const;
  void set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_free_times() const;
  void _internal_set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 free_add_mul = 4;
  void clear_free_add_mul();
  ::PROTOBUF_NAMESPACE_ID::int32 free_add_mul() const;
  void set_free_add_mul(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_free_add_mul() const;
  void _internal_set_free_add_mul(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:OLYMPUS.MsgResult)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::OLYMPUS::MsgRound > round_data_;
  ::PROTOBUF_NAMESPACE_ID::int32 table_all_mul_;
  ::PROTOBUF_NAMESPACE_ID::int32 free_times_;
  ::PROTOBUF_NAMESPACE_ID::int32 free_add_mul_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_OLYMPUS_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgSceneInfo

// repeated int32 bet = 1;
inline int MsgSceneInfo::_internal_bet_size() const {
  return bet_.size();
}
inline int MsgSceneInfo::bet_size() const {
  return _internal_bet_size();
}
inline void MsgSceneInfo::clear_bet() {
  bet_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgSceneInfo::_internal_bet(int index) const {
  return bet_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgSceneInfo::bet(int index) const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgSceneInfo.bet)
  return _internal_bet(index);
}
inline void MsgSceneInfo::set_bet(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  bet_.Set(index, value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgSceneInfo.bet)
}
inline void MsgSceneInfo::_internal_add_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  bet_.Add(value);
}
inline void MsgSceneInfo::add_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_bet(value);
  // @@protoc_insertion_point(field_add:OLYMPUS.MsgSceneInfo.bet)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
MsgSceneInfo::_internal_bet() const {
  return bet_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
MsgSceneInfo::bet() const {
  // @@protoc_insertion_point(field_list:OLYMPUS.MsgSceneInfo.bet)
  return _internal_bet();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
MsgSceneInfo::_internal_mutable_bet() {
  return &bet_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
MsgSceneInfo::mutable_bet() {
  // @@protoc_insertion_point(field_mutable_list:OLYMPUS.MsgSceneInfo.bet)
  return _internal_mutable_bet();
}

// int32 cur_bet = 2;
inline void MsgSceneInfo::clear_cur_bet() {
  cur_bet_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgSceneInfo::_internal_cur_bet() const {
  return cur_bet_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgSceneInfo::cur_bet() const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgSceneInfo.cur_bet)
  return _internal_cur_bet();
}
inline void MsgSceneInfo::_internal_set_cur_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  cur_bet_ = value;
}
inline void MsgSceneInfo::set_cur_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_cur_bet(value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgSceneInfo.cur_bet)
}

// int32 add_mul = 3;
inline void MsgSceneInfo::clear_add_mul() {
  add_mul_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgSceneInfo::_internal_add_mul() const {
  return add_mul_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgSceneInfo::add_mul() const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgSceneInfo.add_mul)
  return _internal_add_mul();
}
inline void MsgSceneInfo::_internal_set_add_mul(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  add_mul_ = value;
}
inline void MsgSceneInfo::set_add_mul(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_add_mul(value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgSceneInfo.add_mul)
}

// int32 free_times = 4;
inline void MsgSceneInfo::clear_free_times() {
  free_times_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgSceneInfo::_internal_free_times() const {
  return free_times_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgSceneInfo::free_times() const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgSceneInfo.free_times)
  return _internal_free_times();
}
inline void MsgSceneInfo::_internal_set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  free_times_ = value;
}
inline void MsgSceneInfo::set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_free_times(value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgSceneInfo.free_times)
}

// -------------------------------------------------------------------

// MsgRound

// repeated int32 icon = 1;
inline int MsgRound::_internal_icon_size() const {
  return icon_.size();
}
inline int MsgRound::icon_size() const {
  return _internal_icon_size();
}
inline void MsgRound::clear_icon() {
  icon_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRound::_internal_icon(int index) const {
  return icon_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRound::icon(int index) const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgRound.icon)
  return _internal_icon(index);
}
inline void MsgRound::set_icon(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  icon_.Set(index, value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgRound.icon)
}
inline void MsgRound::_internal_add_icon(::PROTOBUF_NAMESPACE_ID::int32 value) {
  icon_.Add(value);
}
inline void MsgRound::add_icon(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_icon(value);
  // @@protoc_insertion_point(field_add:OLYMPUS.MsgRound.icon)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
MsgRound::_internal_icon() const {
  return icon_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
MsgRound::icon() const {
  // @@protoc_insertion_point(field_list:OLYMPUS.MsgRound.icon)
  return _internal_icon();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
MsgRound::_internal_mutable_icon() {
  return &icon_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
MsgRound::mutable_icon() {
  // @@protoc_insertion_point(field_mutable_list:OLYMPUS.MsgRound.icon)
  return _internal_mutable_icon();
}

// repeated bool hit = 2;
inline int MsgRound::_internal_hit_size() const {
  return hit_.size();
}
inline int MsgRound::hit_size() const {
  return _internal_hit_size();
}
inline void MsgRound::clear_hit() {
  hit_.Clear();
}
inline bool MsgRound::_internal_hit(int index) const {
  return hit_.Get(index);
}
inline bool MsgRound::hit(int index) const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgRound.hit)
  return _internal_hit(index);
}
inline void MsgRound::set_hit(int index, bool value) {
  hit_.Set(index, value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgRound.hit)
}
inline void MsgRound::_internal_add_hit(bool value) {
  hit_.Add(value);
}
inline void MsgRound::add_hit(bool value) {
  _internal_add_hit(value);
  // @@protoc_insertion_point(field_add:OLYMPUS.MsgRound.hit)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
MsgRound::_internal_hit() const {
  return hit_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
MsgRound::hit() const {
  // @@protoc_insertion_point(field_list:OLYMPUS.MsgRound.hit)
  return _internal_hit();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
MsgRound::_internal_mutable_hit() {
  return &hit_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
MsgRound::mutable_hit() {
  // @@protoc_insertion_point(field_mutable_list:OLYMPUS.MsgRound.hit)
  return _internal_mutable_hit();
}

// repeated int32 special_mul = 3;
inline int MsgRound::_internal_special_mul_size() const {
  return special_mul_.size();
}
inline int MsgRound::special_mul_size() const {
  return _internal_special_mul_size();
}
inline void MsgRound::clear_special_mul() {
  special_mul_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRound::_internal_special_mul(int index) const {
  return special_mul_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRound::special_mul(int index) const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgRound.special_mul)
  return _internal_special_mul(index);
}
inline void MsgRound::set_special_mul(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  special_mul_.Set(index, value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgRound.special_mul)
}
inline void MsgRound::_internal_add_special_mul(::PROTOBUF_NAMESPACE_ID::int32 value) {
  special_mul_.Add(value);
}
inline void MsgRound::add_special_mul(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_special_mul(value);
  // @@protoc_insertion_point(field_add:OLYMPUS.MsgRound.special_mul)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
MsgRound::_internal_special_mul() const {
  return special_mul_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
MsgRound::special_mul() const {
  // @@protoc_insertion_point(field_list:OLYMPUS.MsgRound.special_mul)
  return _internal_special_mul();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
MsgRound::_internal_mutable_special_mul() {
  return &special_mul_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
MsgRound::mutable_special_mul() {
  // @@protoc_insertion_point(field_mutable_list:OLYMPUS.MsgRound.special_mul)
  return _internal_mutable_special_mul();
}

// int32 odd = 4;
inline void MsgRound::clear_odd() {
  odd_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRound::_internal_odd() const {
  return odd_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRound::odd() const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgRound.odd)
  return _internal_odd();
}
inline void MsgRound::_internal_set_odd(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  odd_ = value;
}
inline void MsgRound::set_odd(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_odd(value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgRound.odd)
}

// -------------------------------------------------------------------

// MsgResult

// repeated .OLYMPUS.MsgRound round_data = 1;
inline int MsgResult::_internal_round_data_size() const {
  return round_data_.size();
}
inline int MsgResult::round_data_size() const {
  return _internal_round_data_size();
}
inline void MsgResult::clear_round_data() {
  round_data_.Clear();
}
inline ::OLYMPUS::MsgRound* MsgResult::mutable_round_data(int index) {
  // @@protoc_insertion_point(field_mutable:OLYMPUS.MsgResult.round_data)
  return round_data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::OLYMPUS::MsgRound >*
MsgResult::mutable_round_data() {
  // @@protoc_insertion_point(field_mutable_list:OLYMPUS.MsgResult.round_data)
  return &round_data_;
}
inline const ::OLYMPUS::MsgRound& MsgResult::_internal_round_data(int index) const {
  return round_data_.Get(index);
}
inline const ::OLYMPUS::MsgRound& MsgResult::round_data(int index) const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgResult.round_data)
  return _internal_round_data(index);
}
inline ::OLYMPUS::MsgRound* MsgResult::_internal_add_round_data() {
  return round_data_.Add();
}
inline ::OLYMPUS::MsgRound* MsgResult::add_round_data() {
  // @@protoc_insertion_point(field_add:OLYMPUS.MsgResult.round_data)
  return _internal_add_round_data();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::OLYMPUS::MsgRound >&
MsgResult::round_data() const {
  // @@protoc_insertion_point(field_list:OLYMPUS.MsgResult.round_data)
  return round_data_;
}

// int32 table_all_mul = 2;
inline void MsgResult::clear_table_all_mul() {
  table_all_mul_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgResult::_internal_table_all_mul() const {
  return table_all_mul_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgResult::table_all_mul() const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgResult.table_all_mul)
  return _internal_table_all_mul();
}
inline void MsgResult::_internal_set_table_all_mul(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  table_all_mul_ = value;
}
inline void MsgResult::set_table_all_mul(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_table_all_mul(value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgResult.table_all_mul)
}

// int32 free_times = 3;
inline void MsgResult::clear_free_times() {
  free_times_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgResult::_internal_free_times() const {
  return free_times_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgResult::free_times() const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgResult.free_times)
  return _internal_free_times();
}
inline void MsgResult::_internal_set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  free_times_ = value;
}
inline void MsgResult::set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_free_times(value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgResult.free_times)
}

// int32 free_add_mul = 4;
inline void MsgResult::clear_free_add_mul() {
  free_add_mul_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgResult::_internal_free_add_mul() const {
  return free_add_mul_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgResult::free_add_mul() const {
  // @@protoc_insertion_point(field_get:OLYMPUS.MsgResult.free_add_mul)
  return _internal_free_add_mul();
}
inline void MsgResult::_internal_set_free_add_mul(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  free_add_mul_ = value;
}
inline void MsgResult::set_free_add_mul(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_free_add_mul(value);
  // @@protoc_insertion_point(field_set:OLYMPUS.MsgResult.free_add_mul)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace OLYMPUS

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::OLYMPUS::EMsgIDSubGame> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::OLYMPUS::EMsgIDSubGame>() {
  return ::OLYMPUS::EMsgIDSubGame_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_OLYMPUS_2eproto