// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MJHL.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MJHL_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MJHL_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_MJHL_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MJHL_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MJHL_2eproto;
namespace MJHL {
class CMD_3D_SC_Result;
class CMD_3D_SC_ResultDefaultTypeInternal;
extern CMD_3D_SC_ResultDefaultTypeInternal _CMD_3D_SC_Result_default_instance_;
class Round;
class RoundDefaultTypeInternal;
extern RoundDefaultTypeInternal _Round_default_instance_;
class SC_SceneInfo;
class SC_SceneInfoDefaultTypeInternal;
extern SC_SceneInfoDefaultTypeInternal _SC_SceneInfo_default_instance_;
}  // namespace MJHL
PROTOBUF_NAMESPACE_OPEN
template<> ::MJHL::CMD_3D_SC_Result* Arena::CreateMaybeMessage<::MJHL::CMD_3D_SC_Result>(Arena*);
template<> ::MJHL::Round* Arena::CreateMaybeMessage<::MJHL::Round>(Arena*);
template<> ::MJHL::SC_SceneInfo* Arena::CreateMaybeMessage<::MJHL::SC_SceneInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace MJHL {

enum EMsgIDMJHL : int {
  SUB_CS_GAME_START = 0,
  SUB_SC_BET_FAIL = 1,
  SUB_SC_START_GAME = 2,
  EMsgIDMJHL_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDMJHL_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDMJHL_IsValid(int value);
constexpr EMsgIDMJHL EMsgIDMJHL_MIN = SUB_CS_GAME_START;
constexpr EMsgIDMJHL EMsgIDMJHL_MAX = SUB_SC_START_GAME;
constexpr int EMsgIDMJHL_ARRAYSIZE = EMsgIDMJHL_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDMJHL_descriptor();
template<typename T>
inline const std::string& EMsgIDMJHL_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMsgIDMJHL>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMsgIDMJHL_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMsgIDMJHL_descriptor(), enum_t_value);
}
inline bool EMsgIDMJHL_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EMsgIDMJHL* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMsgIDMJHL>(
    EMsgIDMJHL_descriptor(), name, value);
}
// ===================================================================

class Round PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MJHL.Round) */ {
 public:
  inline Round() : Round(nullptr) {}
  virtual ~Round();

  Round(const Round& from);
  Round(Round&& from) noexcept
    : Round() {
    *this = ::std::move(from);
  }

  inline Round& operator=(const Round& from) {
    CopyFrom(from);
    return *this;
  }
  inline Round& operator=(Round&& from) noexcept {
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
  static const Round& default_instance();

  static inline const Round* internal_default_instance() {
    return reinterpret_cast<const Round*>(
               &_Round_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Round& a, Round& b) {
    a.Swap(&b);
  }
  inline void Swap(Round* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Round* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Round* New() const final {
    return CreateMaybeMessage<Round>(nullptr);
  }

  Round* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Round>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Round& from);
  void MergeFrom(const Round& from);
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
  void InternalSwap(Round* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MJHL.Round";
  }
  protected:
  explicit Round(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MJHL_2eproto);
    return ::descriptor_table_MJHL_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIconFieldNumber = 1,
    kHitIdxFieldNumber = 2,
    kGoldIconInfoFieldNumber = 3,
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

  // repeated int32 hit_idx = 2;
  int hit_idx_size() const;
  private:
  int _internal_hit_idx_size() const;
  public:
  void clear_hit_idx();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_hit_idx(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_hit_idx() const;
  void _internal_add_hit_idx(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_hit_idx();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 hit_idx(int index) const;
  void set_hit_idx(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_hit_idx(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      hit_idx() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_hit_idx();

  // repeated int32 gold_icon_info = 3;
  int gold_icon_info_size() const;
  private:
  int _internal_gold_icon_info_size() const;
  public:
  void clear_gold_icon_info();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_gold_icon_info(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_gold_icon_info() const;
  void _internal_add_gold_icon_info(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_gold_icon_info();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 gold_icon_info(int index) const;
  void set_gold_icon_info(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_gold_icon_info(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      gold_icon_info() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_gold_icon_info();

  // int32 odd = 4;
  void clear_odd();
  ::PROTOBUF_NAMESPACE_ID::int32 odd() const;
  void set_odd(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_odd() const;
  void _internal_set_odd(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:MJHL.Round)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > icon_;
  mutable std::atomic<int> _icon_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > hit_idx_;
  mutable std::atomic<int> _hit_idx_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > gold_icon_info_;
  mutable std::atomic<int> _gold_icon_info_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 odd_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MJHL_2eproto;
};
// -------------------------------------------------------------------

class SC_SceneInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MJHL.SC_SceneInfo) */ {
 public:
  inline SC_SceneInfo() : SC_SceneInfo(nullptr) {}
  virtual ~SC_SceneInfo();

  SC_SceneInfo(const SC_SceneInfo& from);
  SC_SceneInfo(SC_SceneInfo&& from) noexcept
    : SC_SceneInfo() {
    *this = ::std::move(from);
  }

  inline SC_SceneInfo& operator=(const SC_SceneInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline SC_SceneInfo& operator=(SC_SceneInfo&& from) noexcept {
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
  static const SC_SceneInfo& default_instance();

  static inline const SC_SceneInfo* internal_default_instance() {
    return reinterpret_cast<const SC_SceneInfo*>(
               &_SC_SceneInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SC_SceneInfo& a, SC_SceneInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(SC_SceneInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SC_SceneInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SC_SceneInfo* New() const final {
    return CreateMaybeMessage<SC_SceneInfo>(nullptr);
  }

  SC_SceneInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SC_SceneInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SC_SceneInfo& from);
  void MergeFrom(const SC_SceneInfo& from);
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
  void InternalSwap(SC_SceneInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MJHL.SC_SceneInfo";
  }
  protected:
  explicit SC_SceneInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MJHL_2eproto);
    return ::descriptor_table_MJHL_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBetFieldNumber = 3,
    kFreeCountFieldNumber = 1,
    kCurrenBetFieldNumber = 2,
  };
  // repeated int32 bet = 3;
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

  // int32 free_count = 1;
  void clear_free_count();
  ::PROTOBUF_NAMESPACE_ID::int32 free_count() const;
  void set_free_count(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_free_count() const;
  void _internal_set_free_count(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 curren_bet = 2;
  void clear_curren_bet();
  ::PROTOBUF_NAMESPACE_ID::int32 curren_bet() const;
  void set_curren_bet(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_curren_bet() const;
  void _internal_set_curren_bet(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:MJHL.SC_SceneInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > bet_;
  mutable std::atomic<int> _bet_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 free_count_;
  ::PROTOBUF_NAMESPACE_ID::int32 curren_bet_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MJHL_2eproto;
};
// -------------------------------------------------------------------

class CMD_3D_SC_Result PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MJHL.CMD_3D_SC_Result) */ {
 public:
  inline CMD_3D_SC_Result() : CMD_3D_SC_Result(nullptr) {}
  virtual ~CMD_3D_SC_Result();

  CMD_3D_SC_Result(const CMD_3D_SC_Result& from);
  CMD_3D_SC_Result(CMD_3D_SC_Result&& from) noexcept
    : CMD_3D_SC_Result() {
    *this = ::std::move(from);
  }

  inline CMD_3D_SC_Result& operator=(const CMD_3D_SC_Result& from) {
    CopyFrom(from);
    return *this;
  }
  inline CMD_3D_SC_Result& operator=(CMD_3D_SC_Result&& from) noexcept {
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
  static const CMD_3D_SC_Result& default_instance();

  static inline const CMD_3D_SC_Result* internal_default_instance() {
    return reinterpret_cast<const CMD_3D_SC_Result*>(
               &_CMD_3D_SC_Result_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(CMD_3D_SC_Result& a, CMD_3D_SC_Result& b) {
    a.Swap(&b);
  }
  inline void Swap(CMD_3D_SC_Result* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CMD_3D_SC_Result* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CMD_3D_SC_Result* New() const final {
    return CreateMaybeMessage<CMD_3D_SC_Result>(nullptr);
  }

  CMD_3D_SC_Result* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CMD_3D_SC_Result>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CMD_3D_SC_Result& from);
  void MergeFrom(const CMD_3D_SC_Result& from);
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
  void InternalSwap(CMD_3D_SC_Result* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MJHL.CMD_3D_SC_Result";
  }
  protected:
  explicit CMD_3D_SC_Result(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MJHL_2eproto);
    return ::descriptor_table_MJHL_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTagIconInfoFieldNumber = 1,
    kTableAllOddFieldNumber = 2,
    kFreeTimesFieldNumber = 3,
    kWinGoldFieldNumber = 4,
  };
  // repeated .MJHL.Round tag_icon_info = 1;
  int tag_icon_info_size() const;
  private:
  int _internal_tag_icon_info_size() const;
  public:
  void clear_tag_icon_info();
  ::MJHL::Round* mutable_tag_icon_info(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::MJHL::Round >*
      mutable_tag_icon_info();
  private:
  const ::MJHL::Round& _internal_tag_icon_info(int index) const;
  ::MJHL::Round* _internal_add_tag_icon_info();
  public:
  const ::MJHL::Round& tag_icon_info(int index) const;
  ::MJHL::Round* add_tag_icon_info();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::MJHL::Round >&
      tag_icon_info() const;

  // int32 table_all_odd = 2;
  void clear_table_all_odd();
  ::PROTOBUF_NAMESPACE_ID::int32 table_all_odd() const;
  void set_table_all_odd(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_table_all_odd() const;
  void _internal_set_table_all_odd(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 free_times = 3;
  void clear_free_times();
  ::PROTOBUF_NAMESPACE_ID::int32 free_times() const;
  void set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_free_times() const;
  void _internal_set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 win_gold = 4;
  void clear_win_gold();
  ::PROTOBUF_NAMESPACE_ID::int32 win_gold() const;
  void set_win_gold(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_win_gold() const;
  void _internal_set_win_gold(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:MJHL.CMD_3D_SC_Result)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::MJHL::Round > tag_icon_info_;
  ::PROTOBUF_NAMESPACE_ID::int32 table_all_odd_;
  ::PROTOBUF_NAMESPACE_ID::int32 free_times_;
  ::PROTOBUF_NAMESPACE_ID::int32 win_gold_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MJHL_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Round

// repeated int32 icon = 1;
inline int Round::_internal_icon_size() const {
  return icon_.size();
}
inline int Round::icon_size() const {
  return _internal_icon_size();
}
inline void Round::clear_icon() {
  icon_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Round::_internal_icon(int index) const {
  return icon_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Round::icon(int index) const {
  // @@protoc_insertion_point(field_get:MJHL.Round.icon)
  return _internal_icon(index);
}
inline void Round::set_icon(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  icon_.Set(index, value);
  // @@protoc_insertion_point(field_set:MJHL.Round.icon)
}
inline void Round::_internal_add_icon(::PROTOBUF_NAMESPACE_ID::int32 value) {
  icon_.Add(value);
}
inline void Round::add_icon(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_icon(value);
  // @@protoc_insertion_point(field_add:MJHL.Round.icon)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Round::_internal_icon() const {
  return icon_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Round::icon() const {
  // @@protoc_insertion_point(field_list:MJHL.Round.icon)
  return _internal_icon();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Round::_internal_mutable_icon() {
  return &icon_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Round::mutable_icon() {
  // @@protoc_insertion_point(field_mutable_list:MJHL.Round.icon)
  return _internal_mutable_icon();
}

// repeated int32 hit_idx = 2;
inline int Round::_internal_hit_idx_size() const {
  return hit_idx_.size();
}
inline int Round::hit_idx_size() const {
  return _internal_hit_idx_size();
}
inline void Round::clear_hit_idx() {
  hit_idx_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Round::_internal_hit_idx(int index) const {
  return hit_idx_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Round::hit_idx(int index) const {
  // @@protoc_insertion_point(field_get:MJHL.Round.hit_idx)
  return _internal_hit_idx(index);
}
inline void Round::set_hit_idx(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  hit_idx_.Set(index, value);
  // @@protoc_insertion_point(field_set:MJHL.Round.hit_idx)
}
inline void Round::_internal_add_hit_idx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  hit_idx_.Add(value);
}
inline void Round::add_hit_idx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_hit_idx(value);
  // @@protoc_insertion_point(field_add:MJHL.Round.hit_idx)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Round::_internal_hit_idx() const {
  return hit_idx_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Round::hit_idx() const {
  // @@protoc_insertion_point(field_list:MJHL.Round.hit_idx)
  return _internal_hit_idx();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Round::_internal_mutable_hit_idx() {
  return &hit_idx_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Round::mutable_hit_idx() {
  // @@protoc_insertion_point(field_mutable_list:MJHL.Round.hit_idx)
  return _internal_mutable_hit_idx();
}

// repeated int32 gold_icon_info = 3;
inline int Round::_internal_gold_icon_info_size() const {
  return gold_icon_info_.size();
}
inline int Round::gold_icon_info_size() const {
  return _internal_gold_icon_info_size();
}
inline void Round::clear_gold_icon_info() {
  gold_icon_info_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Round::_internal_gold_icon_info(int index) const {
  return gold_icon_info_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Round::gold_icon_info(int index) const {
  // @@protoc_insertion_point(field_get:MJHL.Round.gold_icon_info)
  return _internal_gold_icon_info(index);
}
inline void Round::set_gold_icon_info(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  gold_icon_info_.Set(index, value);
  // @@protoc_insertion_point(field_set:MJHL.Round.gold_icon_info)
}
inline void Round::_internal_add_gold_icon_info(::PROTOBUF_NAMESPACE_ID::int32 value) {
  gold_icon_info_.Add(value);
}
inline void Round::add_gold_icon_info(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_gold_icon_info(value);
  // @@protoc_insertion_point(field_add:MJHL.Round.gold_icon_info)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Round::_internal_gold_icon_info() const {
  return gold_icon_info_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Round::gold_icon_info() const {
  // @@protoc_insertion_point(field_list:MJHL.Round.gold_icon_info)
  return _internal_gold_icon_info();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Round::_internal_mutable_gold_icon_info() {
  return &gold_icon_info_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Round::mutable_gold_icon_info() {
  // @@protoc_insertion_point(field_mutable_list:MJHL.Round.gold_icon_info)
  return _internal_mutable_gold_icon_info();
}

// int32 odd = 4;
inline void Round::clear_odd() {
  odd_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Round::_internal_odd() const {
  return odd_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Round::odd() const {
  // @@protoc_insertion_point(field_get:MJHL.Round.odd)
  return _internal_odd();
}
inline void Round::_internal_set_odd(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  odd_ = value;
}
inline void Round::set_odd(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_odd(value);
  // @@protoc_insertion_point(field_set:MJHL.Round.odd)
}

// -------------------------------------------------------------------

// SC_SceneInfo

// int32 free_count = 1;
inline void SC_SceneInfo::clear_free_count() {
  free_count_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::_internal_free_count() const {
  return free_count_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::free_count() const {
  // @@protoc_insertion_point(field_get:MJHL.SC_SceneInfo.free_count)
  return _internal_free_count();
}
inline void SC_SceneInfo::_internal_set_free_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  free_count_ = value;
}
inline void SC_SceneInfo::set_free_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_free_count(value);
  // @@protoc_insertion_point(field_set:MJHL.SC_SceneInfo.free_count)
}

// int32 curren_bet = 2;
inline void SC_SceneInfo::clear_curren_bet() {
  curren_bet_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::_internal_curren_bet() const {
  return curren_bet_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::curren_bet() const {
  // @@protoc_insertion_point(field_get:MJHL.SC_SceneInfo.curren_bet)
  return _internal_curren_bet();
}
inline void SC_SceneInfo::_internal_set_curren_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  curren_bet_ = value;
}
inline void SC_SceneInfo::set_curren_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_curren_bet(value);
  // @@protoc_insertion_point(field_set:MJHL.SC_SceneInfo.curren_bet)
}

// repeated int32 bet = 3;
inline int SC_SceneInfo::_internal_bet_size() const {
  return bet_.size();
}
inline int SC_SceneInfo::bet_size() const {
  return _internal_bet_size();
}
inline void SC_SceneInfo::clear_bet() {
  bet_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::_internal_bet(int index) const {
  return bet_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::bet(int index) const {
  // @@protoc_insertion_point(field_get:MJHL.SC_SceneInfo.bet)
  return _internal_bet(index);
}
inline void SC_SceneInfo::set_bet(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  bet_.Set(index, value);
  // @@protoc_insertion_point(field_set:MJHL.SC_SceneInfo.bet)
}
inline void SC_SceneInfo::_internal_add_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  bet_.Add(value);
}
inline void SC_SceneInfo::add_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_bet(value);
  // @@protoc_insertion_point(field_add:MJHL.SC_SceneInfo.bet)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SC_SceneInfo::_internal_bet() const {
  return bet_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SC_SceneInfo::bet() const {
  // @@protoc_insertion_point(field_list:MJHL.SC_SceneInfo.bet)
  return _internal_bet();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SC_SceneInfo::_internal_mutable_bet() {
  return &bet_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SC_SceneInfo::mutable_bet() {
  // @@protoc_insertion_point(field_mutable_list:MJHL.SC_SceneInfo.bet)
  return _internal_mutable_bet();
}

// -------------------------------------------------------------------

// CMD_3D_SC_Result

// repeated .MJHL.Round tag_icon_info = 1;
inline int CMD_3D_SC_Result::_internal_tag_icon_info_size() const {
  return tag_icon_info_.size();
}
inline int CMD_3D_SC_Result::tag_icon_info_size() const {
  return _internal_tag_icon_info_size();
}
inline void CMD_3D_SC_Result::clear_tag_icon_info() {
  tag_icon_info_.Clear();
}
inline ::MJHL::Round* CMD_3D_SC_Result::mutable_tag_icon_info(int index) {
  // @@protoc_insertion_point(field_mutable:MJHL.CMD_3D_SC_Result.tag_icon_info)
  return tag_icon_info_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::MJHL::Round >*
CMD_3D_SC_Result::mutable_tag_icon_info() {
  // @@protoc_insertion_point(field_mutable_list:MJHL.CMD_3D_SC_Result.tag_icon_info)
  return &tag_icon_info_;
}
inline const ::MJHL::Round& CMD_3D_SC_Result::_internal_tag_icon_info(int index) const {
  return tag_icon_info_.Get(index);
}
inline const ::MJHL::Round& CMD_3D_SC_Result::tag_icon_info(int index) const {
  // @@protoc_insertion_point(field_get:MJHL.CMD_3D_SC_Result.tag_icon_info)
  return _internal_tag_icon_info(index);
}
inline ::MJHL::Round* CMD_3D_SC_Result::_internal_add_tag_icon_info() {
  return tag_icon_info_.Add();
}
inline ::MJHL::Round* CMD_3D_SC_Result::add_tag_icon_info() {
  // @@protoc_insertion_point(field_add:MJHL.CMD_3D_SC_Result.tag_icon_info)
  return _internal_add_tag_icon_info();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::MJHL::Round >&
CMD_3D_SC_Result::tag_icon_info() const {
  // @@protoc_insertion_point(field_list:MJHL.CMD_3D_SC_Result.tag_icon_info)
  return tag_icon_info_;
}

// int32 table_all_odd = 2;
inline void CMD_3D_SC_Result::clear_table_all_odd() {
  table_all_odd_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::_internal_table_all_odd() const {
  return table_all_odd_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::table_all_odd() const {
  // @@protoc_insertion_point(field_get:MJHL.CMD_3D_SC_Result.table_all_odd)
  return _internal_table_all_odd();
}
inline void CMD_3D_SC_Result::_internal_set_table_all_odd(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  table_all_odd_ = value;
}
inline void CMD_3D_SC_Result::set_table_all_odd(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_table_all_odd(value);
  // @@protoc_insertion_point(field_set:MJHL.CMD_3D_SC_Result.table_all_odd)
}

// int32 free_times = 3;
inline void CMD_3D_SC_Result::clear_free_times() {
  free_times_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::_internal_free_times() const {
  return free_times_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::free_times() const {
  // @@protoc_insertion_point(field_get:MJHL.CMD_3D_SC_Result.free_times)
  return _internal_free_times();
}
inline void CMD_3D_SC_Result::_internal_set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  free_times_ = value;
}
inline void CMD_3D_SC_Result::set_free_times(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_free_times(value);
  // @@protoc_insertion_point(field_set:MJHL.CMD_3D_SC_Result.free_times)
}

// int32 win_gold = 4;
inline void CMD_3D_SC_Result::clear_win_gold() {
  win_gold_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::_internal_win_gold() const {
  return win_gold_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::win_gold() const {
  // @@protoc_insertion_point(field_get:MJHL.CMD_3D_SC_Result.win_gold)
  return _internal_win_gold();
}
inline void CMD_3D_SC_Result::_internal_set_win_gold(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  win_gold_ = value;
}
inline void CMD_3D_SC_Result::set_win_gold(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_win_gold(value);
  // @@protoc_insertion_point(field_set:MJHL.CMD_3D_SC_Result.win_gold)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace MJHL

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::MJHL::EMsgIDMJHL> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MJHL::EMsgIDMJHL>() {
  return ::MJHL::EMsgIDMJHL_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MJHL_2eproto
