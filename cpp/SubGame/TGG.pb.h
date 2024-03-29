// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TGG.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_TGG_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_TGG_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_TGG_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_TGG_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TGG_2eproto;
namespace TGG {
class CMD_3D_SC_Result;
class CMD_3D_SC_ResultDefaultTypeInternal;
extern CMD_3D_SC_ResultDefaultTypeInternal _CMD_3D_SC_Result_default_instance_;
class SC_SceneInfo;
class SC_SceneInfoDefaultTypeInternal;
extern SC_SceneInfoDefaultTypeInternal _SC_SceneInfo_default_instance_;
class stLineInfo;
class stLineInfoDefaultTypeInternal;
extern stLineInfoDefaultTypeInternal _stLineInfo_default_instance_;
}  // namespace TGG
PROTOBUF_NAMESPACE_OPEN
template<> ::TGG::CMD_3D_SC_Result* Arena::CreateMaybeMessage<::TGG::CMD_3D_SC_Result>(Arena*);
template<> ::TGG::SC_SceneInfo* Arena::CreateMaybeMessage<::TGG::SC_SceneInfo>(Arena*);
template<> ::TGG::stLineInfo* Arena::CreateMaybeMessage<::TGG::stLineInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TGG {

enum EMsgIDTGG : int {
  SUB_CS_GAME_START = 0,
  SUB_SC_GAME_OVER = 1,
  SUB_SC_BET_ERR = 2,
  EMsgIDTGG_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMsgIDTGG_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMsgIDTGG_IsValid(int value);
constexpr EMsgIDTGG EMsgIDTGG_MIN = SUB_CS_GAME_START;
constexpr EMsgIDTGG EMsgIDTGG_MAX = SUB_SC_BET_ERR;
constexpr int EMsgIDTGG_ARRAYSIZE = EMsgIDTGG_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDTGG_descriptor();
template<typename T>
inline const std::string& EMsgIDTGG_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMsgIDTGG>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMsgIDTGG_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMsgIDTGG_descriptor(), enum_t_value);
}
inline bool EMsgIDTGG_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EMsgIDTGG* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMsgIDTGG>(
    EMsgIDTGG_descriptor(), name, value);
}
// ===================================================================

class SC_SceneInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TGG.SC_SceneInfo) */ {
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
    0;

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
    return "TGG.SC_SceneInfo";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_TGG_2eproto);
    return ::descriptor_table_TGG_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBetFieldNumber = 3,
    kCurBetFieldNumber = 1,
    kUserGoldFieldNumber = 2,
    kFreeCountFieldNumber = 4,
    kCurFreeDoubleFieldNumber = 5,
    kCaiJinFieldNumber = 6,
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

  // int32 cur_bet = 1;
  void clear_cur_bet();
  ::PROTOBUF_NAMESPACE_ID::int32 cur_bet() const;
  void set_cur_bet(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_cur_bet() const;
  void _internal_set_cur_bet(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 user_gold = 2;
  void clear_user_gold();
  ::PROTOBUF_NAMESPACE_ID::int32 user_gold() const;
  void set_user_gold(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_user_gold() const;
  void _internal_set_user_gold(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 free_count = 4;
  void clear_free_count();
  ::PROTOBUF_NAMESPACE_ID::int32 free_count() const;
  void set_free_count(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_free_count() const;
  void _internal_set_free_count(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 cur_free_double = 5;
  void clear_cur_free_double();
  ::PROTOBUF_NAMESPACE_ID::int32 cur_free_double() const;
  void set_cur_free_double(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_cur_free_double() const;
  void _internal_set_cur_free_double(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 cai_jin = 6;
  void clear_cai_jin();
  ::PROTOBUF_NAMESPACE_ID::int32 cai_jin() const;
  void set_cai_jin(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_cai_jin() const;
  void _internal_set_cai_jin(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:TGG.SC_SceneInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > bet_;
  mutable std::atomic<int> _bet_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 cur_bet_;
  ::PROTOBUF_NAMESPACE_ID::int32 user_gold_;
  ::PROTOBUF_NAMESPACE_ID::int32 free_count_;
  ::PROTOBUF_NAMESPACE_ID::int32 cur_free_double_;
  ::PROTOBUF_NAMESPACE_ID::int32 cai_jin_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_TGG_2eproto;
};
// -------------------------------------------------------------------

class stLineInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TGG.stLineInfo) */ {
 public:
  inline stLineInfo() : stLineInfo(nullptr) {}
  virtual ~stLineInfo();

  stLineInfo(const stLineInfo& from);
  stLineInfo(stLineInfo&& from) noexcept
    : stLineInfo() {
    *this = ::std::move(from);
  }

  inline stLineInfo& operator=(const stLineInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline stLineInfo& operator=(stLineInfo&& from) noexcept {
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
  static const stLineInfo& default_instance();

  static inline const stLineInfo* internal_default_instance() {
    return reinterpret_cast<const stLineInfo*>(
               &_stLineInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(stLineInfo& a, stLineInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(stLineInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(stLineInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline stLineInfo* New() const final {
    return CreateMaybeMessage<stLineInfo>(nullptr);
  }

  stLineInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<stLineInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const stLineInfo& from);
  void MergeFrom(const stLineInfo& from);
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
  void InternalSwap(stLineInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TGG.stLineInfo";
  }
  protected:
  explicit stLineInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_TGG_2eproto);
    return ::descriptor_table_TGG_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIconFieldNumber = 1,
    kCountFieldNumber = 2,
  };
  // int32 Icon = 1;
  void clear_icon();
  ::PROTOBUF_NAMESPACE_ID::int32 icon() const;
  void set_icon(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_icon() const;
  void _internal_set_icon(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 Count = 2;
  void clear_count();
  ::PROTOBUF_NAMESPACE_ID::int32 count() const;
  void set_count(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_count() const;
  void _internal_set_count(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:TGG.stLineInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 icon_;
  ::PROTOBUF_NAMESPACE_ID::int32 count_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_TGG_2eproto;
};
// -------------------------------------------------------------------

class CMD_3D_SC_Result PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TGG.CMD_3D_SC_Result) */ {
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
    return "TGG.CMD_3D_SC_Result";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_TGG_2eproto);
    return ::descriptor_table_TGG_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIconFieldNumber = 1,
    kLineInfoFieldNumber = 2,
    kLineWinScoreFieldNumber = 3,
    kFreeNumFieldNumber = 4,
    kWinCaiJinFieldNumber = 5,
    kChangeLineFieldNumber = 6,
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

  // repeated .TGG.stLineInfo line_info = 2;
  int line_info_size() const;
  private:
  int _internal_line_info_size() const;
  public:
  void clear_line_info();
  ::TGG::stLineInfo* mutable_line_info(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TGG::stLineInfo >*
      mutable_line_info();
  private:
  const ::TGG::stLineInfo& _internal_line_info(int index) const;
  ::TGG::stLineInfo* _internal_add_line_info();
  public:
  const ::TGG::stLineInfo& line_info(int index) const;
  ::TGG::stLineInfo* add_line_info();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TGG::stLineInfo >&
      line_info() const;

  // int32 line_win_score = 3;
  void clear_line_win_score();
  ::PROTOBUF_NAMESPACE_ID::int32 line_win_score() const;
  void set_line_win_score(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_line_win_score() const;
  void _internal_set_line_win_score(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 free_num = 4;
  void clear_free_num();
  ::PROTOBUF_NAMESPACE_ID::int32 free_num() const;
  void set_free_num(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_free_num() const;
  void _internal_set_free_num(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 win_cai_jin = 5;
  void clear_win_cai_jin();
  ::PROTOBUF_NAMESPACE_ID::int32 win_cai_jin() const;
  void set_win_cai_jin(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_win_cai_jin() const;
  void _internal_set_win_cai_jin(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 change_line = 6;
  void clear_change_line();
  ::PROTOBUF_NAMESPACE_ID::int32 change_line() const;
  void set_change_line(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_change_line() const;
  void _internal_set_change_line(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:TGG.CMD_3D_SC_Result)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > icon_;
  mutable std::atomic<int> _icon_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TGG::stLineInfo > line_info_;
  ::PROTOBUF_NAMESPACE_ID::int32 line_win_score_;
  ::PROTOBUF_NAMESPACE_ID::int32 free_num_;
  ::PROTOBUF_NAMESPACE_ID::int32 win_cai_jin_;
  ::PROTOBUF_NAMESPACE_ID::int32 change_line_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_TGG_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SC_SceneInfo

// int32 cur_bet = 1;
inline void SC_SceneInfo::clear_cur_bet() {
  cur_bet_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::_internal_cur_bet() const {
  return cur_bet_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::cur_bet() const {
  // @@protoc_insertion_point(field_get:TGG.SC_SceneInfo.cur_bet)
  return _internal_cur_bet();
}
inline void SC_SceneInfo::_internal_set_cur_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  cur_bet_ = value;
}
inline void SC_SceneInfo::set_cur_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_cur_bet(value);
  // @@protoc_insertion_point(field_set:TGG.SC_SceneInfo.cur_bet)
}

// int32 user_gold = 2;
inline void SC_SceneInfo::clear_user_gold() {
  user_gold_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::_internal_user_gold() const {
  return user_gold_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::user_gold() const {
  // @@protoc_insertion_point(field_get:TGG.SC_SceneInfo.user_gold)
  return _internal_user_gold();
}
inline void SC_SceneInfo::_internal_set_user_gold(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  user_gold_ = value;
}
inline void SC_SceneInfo::set_user_gold(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_user_gold(value);
  // @@protoc_insertion_point(field_set:TGG.SC_SceneInfo.user_gold)
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
  // @@protoc_insertion_point(field_get:TGG.SC_SceneInfo.bet)
  return _internal_bet(index);
}
inline void SC_SceneInfo::set_bet(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  bet_.Set(index, value);
  // @@protoc_insertion_point(field_set:TGG.SC_SceneInfo.bet)
}
inline void SC_SceneInfo::_internal_add_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  bet_.Add(value);
}
inline void SC_SceneInfo::add_bet(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_bet(value);
  // @@protoc_insertion_point(field_add:TGG.SC_SceneInfo.bet)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SC_SceneInfo::_internal_bet() const {
  return bet_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
SC_SceneInfo::bet() const {
  // @@protoc_insertion_point(field_list:TGG.SC_SceneInfo.bet)
  return _internal_bet();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SC_SceneInfo::_internal_mutable_bet() {
  return &bet_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
SC_SceneInfo::mutable_bet() {
  // @@protoc_insertion_point(field_mutable_list:TGG.SC_SceneInfo.bet)
  return _internal_mutable_bet();
}

// int32 free_count = 4;
inline void SC_SceneInfo::clear_free_count() {
  free_count_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::_internal_free_count() const {
  return free_count_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::free_count() const {
  // @@protoc_insertion_point(field_get:TGG.SC_SceneInfo.free_count)
  return _internal_free_count();
}
inline void SC_SceneInfo::_internal_set_free_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  free_count_ = value;
}
inline void SC_SceneInfo::set_free_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_free_count(value);
  // @@protoc_insertion_point(field_set:TGG.SC_SceneInfo.free_count)
}

// int32 cur_free_double = 5;
inline void SC_SceneInfo::clear_cur_free_double() {
  cur_free_double_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::_internal_cur_free_double() const {
  return cur_free_double_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::cur_free_double() const {
  // @@protoc_insertion_point(field_get:TGG.SC_SceneInfo.cur_free_double)
  return _internal_cur_free_double();
}
inline void SC_SceneInfo::_internal_set_cur_free_double(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  cur_free_double_ = value;
}
inline void SC_SceneInfo::set_cur_free_double(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_cur_free_double(value);
  // @@protoc_insertion_point(field_set:TGG.SC_SceneInfo.cur_free_double)
}

// int32 cai_jin = 6;
inline void SC_SceneInfo::clear_cai_jin() {
  cai_jin_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::_internal_cai_jin() const {
  return cai_jin_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SC_SceneInfo::cai_jin() const {
  // @@protoc_insertion_point(field_get:TGG.SC_SceneInfo.cai_jin)
  return _internal_cai_jin();
}
inline void SC_SceneInfo::_internal_set_cai_jin(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  cai_jin_ = value;
}
inline void SC_SceneInfo::set_cai_jin(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_cai_jin(value);
  // @@protoc_insertion_point(field_set:TGG.SC_SceneInfo.cai_jin)
}

// -------------------------------------------------------------------

// stLineInfo

// int32 Icon = 1;
inline void stLineInfo::clear_icon() {
  icon_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 stLineInfo::_internal_icon() const {
  return icon_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 stLineInfo::icon() const {
  // @@protoc_insertion_point(field_get:TGG.stLineInfo.Icon)
  return _internal_icon();
}
inline void stLineInfo::_internal_set_icon(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  icon_ = value;
}
inline void stLineInfo::set_icon(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_icon(value);
  // @@protoc_insertion_point(field_set:TGG.stLineInfo.Icon)
}

// int32 Count = 2;
inline void stLineInfo::clear_count() {
  count_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 stLineInfo::_internal_count() const {
  return count_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 stLineInfo::count() const {
  // @@protoc_insertion_point(field_get:TGG.stLineInfo.Count)
  return _internal_count();
}
inline void stLineInfo::_internal_set_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  count_ = value;
}
inline void stLineInfo::set_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:TGG.stLineInfo.Count)
}

// -------------------------------------------------------------------

// CMD_3D_SC_Result

// repeated int32 icon = 1;
inline int CMD_3D_SC_Result::_internal_icon_size() const {
  return icon_.size();
}
inline int CMD_3D_SC_Result::icon_size() const {
  return _internal_icon_size();
}
inline void CMD_3D_SC_Result::clear_icon() {
  icon_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::_internal_icon(int index) const {
  return icon_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::icon(int index) const {
  // @@protoc_insertion_point(field_get:TGG.CMD_3D_SC_Result.icon)
  return _internal_icon(index);
}
inline void CMD_3D_SC_Result::set_icon(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  icon_.Set(index, value);
  // @@protoc_insertion_point(field_set:TGG.CMD_3D_SC_Result.icon)
}
inline void CMD_3D_SC_Result::_internal_add_icon(::PROTOBUF_NAMESPACE_ID::int32 value) {
  icon_.Add(value);
}
inline void CMD_3D_SC_Result::add_icon(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_icon(value);
  // @@protoc_insertion_point(field_add:TGG.CMD_3D_SC_Result.icon)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
CMD_3D_SC_Result::_internal_icon() const {
  return icon_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
CMD_3D_SC_Result::icon() const {
  // @@protoc_insertion_point(field_list:TGG.CMD_3D_SC_Result.icon)
  return _internal_icon();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
CMD_3D_SC_Result::_internal_mutable_icon() {
  return &icon_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
CMD_3D_SC_Result::mutable_icon() {
  // @@protoc_insertion_point(field_mutable_list:TGG.CMD_3D_SC_Result.icon)
  return _internal_mutable_icon();
}

// repeated .TGG.stLineInfo line_info = 2;
inline int CMD_3D_SC_Result::_internal_line_info_size() const {
  return line_info_.size();
}
inline int CMD_3D_SC_Result::line_info_size() const {
  return _internal_line_info_size();
}
inline void CMD_3D_SC_Result::clear_line_info() {
  line_info_.Clear();
}
inline ::TGG::stLineInfo* CMD_3D_SC_Result::mutable_line_info(int index) {
  // @@protoc_insertion_point(field_mutable:TGG.CMD_3D_SC_Result.line_info)
  return line_info_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TGG::stLineInfo >*
CMD_3D_SC_Result::mutable_line_info() {
  // @@protoc_insertion_point(field_mutable_list:TGG.CMD_3D_SC_Result.line_info)
  return &line_info_;
}
inline const ::TGG::stLineInfo& CMD_3D_SC_Result::_internal_line_info(int index) const {
  return line_info_.Get(index);
}
inline const ::TGG::stLineInfo& CMD_3D_SC_Result::line_info(int index) const {
  // @@protoc_insertion_point(field_get:TGG.CMD_3D_SC_Result.line_info)
  return _internal_line_info(index);
}
inline ::TGG::stLineInfo* CMD_3D_SC_Result::_internal_add_line_info() {
  return line_info_.Add();
}
inline ::TGG::stLineInfo* CMD_3D_SC_Result::add_line_info() {
  // @@protoc_insertion_point(field_add:TGG.CMD_3D_SC_Result.line_info)
  return _internal_add_line_info();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TGG::stLineInfo >&
CMD_3D_SC_Result::line_info() const {
  // @@protoc_insertion_point(field_list:TGG.CMD_3D_SC_Result.line_info)
  return line_info_;
}

// int32 line_win_score = 3;
inline void CMD_3D_SC_Result::clear_line_win_score() {
  line_win_score_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::_internal_line_win_score() const {
  return line_win_score_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::line_win_score() const {
  // @@protoc_insertion_point(field_get:TGG.CMD_3D_SC_Result.line_win_score)
  return _internal_line_win_score();
}
inline void CMD_3D_SC_Result::_internal_set_line_win_score(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  line_win_score_ = value;
}
inline void CMD_3D_SC_Result::set_line_win_score(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_line_win_score(value);
  // @@protoc_insertion_point(field_set:TGG.CMD_3D_SC_Result.line_win_score)
}

// int32 free_num = 4;
inline void CMD_3D_SC_Result::clear_free_num() {
  free_num_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::_internal_free_num() const {
  return free_num_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::free_num() const {
  // @@protoc_insertion_point(field_get:TGG.CMD_3D_SC_Result.free_num)
  return _internal_free_num();
}
inline void CMD_3D_SC_Result::_internal_set_free_num(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  free_num_ = value;
}
inline void CMD_3D_SC_Result::set_free_num(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_free_num(value);
  // @@protoc_insertion_point(field_set:TGG.CMD_3D_SC_Result.free_num)
}

// int32 win_cai_jin = 5;
inline void CMD_3D_SC_Result::clear_win_cai_jin() {
  win_cai_jin_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::_internal_win_cai_jin() const {
  return win_cai_jin_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::win_cai_jin() const {
  // @@protoc_insertion_point(field_get:TGG.CMD_3D_SC_Result.win_cai_jin)
  return _internal_win_cai_jin();
}
inline void CMD_3D_SC_Result::_internal_set_win_cai_jin(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  win_cai_jin_ = value;
}
inline void CMD_3D_SC_Result::set_win_cai_jin(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_win_cai_jin(value);
  // @@protoc_insertion_point(field_set:TGG.CMD_3D_SC_Result.win_cai_jin)
}

// int32 change_line = 6;
inline void CMD_3D_SC_Result::clear_change_line() {
  change_line_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::_internal_change_line() const {
  return change_line_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CMD_3D_SC_Result::change_line() const {
  // @@protoc_insertion_point(field_get:TGG.CMD_3D_SC_Result.change_line)
  return _internal_change_line();
}
inline void CMD_3D_SC_Result::_internal_set_change_line(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  change_line_ = value;
}
inline void CMD_3D_SC_Result::set_change_line(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_change_line(value);
  // @@protoc_insertion_point(field_set:TGG.CMD_3D_SC_Result.change_line)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace TGG

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::TGG::EMsgIDTGG> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TGG::EMsgIDTGG>() {
  return ::TGG::EMsgIDTGG_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_TGG_2eproto
