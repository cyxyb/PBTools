// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BQTP.proto

#include "BQTP.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace BQTP {
class SC_SceneInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SC_SceneInfo> _instance;
} _SC_SceneInfo_default_instance_;
class CMD_3D_SC_ResultDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CMD_3D_SC_Result> _instance;
} _CMD_3D_SC_Result_default_instance_;
}  // namespace BQTP
static void InitDefaultsscc_info_CMD_3D_SC_Result_BQTP_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::BQTP::_CMD_3D_SC_Result_default_instance_;
    new (ptr) ::BQTP::CMD_3D_SC_Result();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CMD_3D_SC_Result_BQTP_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_CMD_3D_SC_Result_BQTP_2eproto}, {}};

static void InitDefaultsscc_info_SC_SceneInfo_BQTP_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::BQTP::_SC_SceneInfo_default_instance_;
    new (ptr) ::BQTP::SC_SceneInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SC_SceneInfo_BQTP_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SC_SceneInfo_BQTP_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_BQTP_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_BQTP_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_BQTP_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_BQTP_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::BQTP::SC_SceneInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::BQTP::SC_SceneInfo, free_count_),
  PROTOBUF_FIELD_OFFSET(::BQTP::SC_SceneInfo, curren_bet_),
  PROTOBUF_FIELD_OFFSET(::BQTP::SC_SceneInfo, bet_),
  PROTOBUF_FIELD_OFFSET(::BQTP::SC_SceneInfo, rerun_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::BQTP::CMD_3D_SC_Result, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::BQTP::CMD_3D_SC_Result, icon_),
  PROTOBUF_FIELD_OFFSET(::BQTP::CMD_3D_SC_Result, hit_icon_),
  PROTOBUF_FIELD_OFFSET(::BQTP::CMD_3D_SC_Result, win_gold_),
  PROTOBUF_FIELD_OFFSET(::BQTP::CMD_3D_SC_Result, free_count_),
  PROTOBUF_FIELD_OFFSET(::BQTP::CMD_3D_SC_Result, rerun_),
  PROTOBUF_FIELD_OFFSET(::BQTP::CMD_3D_SC_Result, special_wild_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::BQTP::SC_SceneInfo)},
  { 9, -1, sizeof(::BQTP::CMD_3D_SC_Result)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::BQTP::_SC_SceneInfo_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::BQTP::_CMD_3D_SC_Result_default_instance_),
};

const char descriptor_table_protodef_BQTP_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nBQTP.proto\022\004BQTP\"R\n\014SC_SceneInfo\022\022\n\nfr"
  "ee_count\030\001 \001(\005\022\022\n\ncurren_bet\030\002 \001(\005\022\013\n\003be"
  "t\030\003 \003(\005\022\r\n\005rerun\030\004 \001(\005\"}\n\020CMD_3D_SC_Resu"
  "lt\022\014\n\004icon\030\001 \003(\005\022\020\n\010hit_icon\030\002 \003(\005\022\020\n\010wi"
  "n_gold\030\003 \001(\003\022\022\n\nfree_count\030\004 \001(\005\022\r\n\005reru"
  "n\030\005 \001(\005\022\024\n\014special_wild\030\006 \001(\005*O\n\nEMsgIDB"
  "QTP\022\025\n\021SUB_CS_GAME_START\020\000\022\023\n\017SUB_SC_BET"
  "_FAIL\020\001\022\025\n\021SUB_SC_START_GAME\020\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_BQTP_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_BQTP_2eproto_sccs[2] = {
  &scc_info_CMD_3D_SC_Result_BQTP_2eproto.base,
  &scc_info_SC_SceneInfo_BQTP_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_BQTP_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_BQTP_2eproto = {
  false, false, descriptor_table_protodef_BQTP_2eproto, "BQTP.proto", 318,
  &descriptor_table_BQTP_2eproto_once, descriptor_table_BQTP_2eproto_sccs, descriptor_table_BQTP_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_BQTP_2eproto::offsets,
  file_level_metadata_BQTP_2eproto, 2, file_level_enum_descriptors_BQTP_2eproto, file_level_service_descriptors_BQTP_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_BQTP_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_BQTP_2eproto)), true);
namespace BQTP {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDBQTP_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_BQTP_2eproto);
  return file_level_enum_descriptors_BQTP_2eproto[0];
}
bool EMsgIDBQTP_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class SC_SceneInfo::_Internal {
 public:
};

SC_SceneInfo::SC_SceneInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  bet_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:BQTP.SC_SceneInfo)
}
SC_SceneInfo::SC_SceneInfo(const SC_SceneInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      bet_(from.bet_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&free_count_, &from.free_count_,
    static_cast<size_t>(reinterpret_cast<char*>(&rerun_) -
    reinterpret_cast<char*>(&free_count_)) + sizeof(rerun_));
  // @@protoc_insertion_point(copy_constructor:BQTP.SC_SceneInfo)
}

void SC_SceneInfo::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&free_count_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&rerun_) -
      reinterpret_cast<char*>(&free_count_)) + sizeof(rerun_));
}

SC_SceneInfo::~SC_SceneInfo() {
  // @@protoc_insertion_point(destructor:BQTP.SC_SceneInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SC_SceneInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void SC_SceneInfo::ArenaDtor(void* object) {
  SC_SceneInfo* _this = reinterpret_cast< SC_SceneInfo* >(object);
  (void)_this;
}
void SC_SceneInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SC_SceneInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SC_SceneInfo& SC_SceneInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SC_SceneInfo_BQTP_2eproto.base);
  return *internal_default_instance();
}


void SC_SceneInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:BQTP.SC_SceneInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  bet_.Clear();
  ::memset(&free_count_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&rerun_) -
      reinterpret_cast<char*>(&free_count_)) + sizeof(rerun_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SC_SceneInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 free_count = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          free_count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 curren_bet = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          curren_bet_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated int32 bet = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_bet(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24) {
          _internal_add_bet(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 rerun = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          rerun_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SC_SceneInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:BQTP.SC_SceneInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 free_count = 1;
  if (this->free_count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_free_count(), target);
  }

  // int32 curren_bet = 2;
  if (this->curren_bet() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_curren_bet(), target);
  }

  // repeated int32 bet = 3;
  {
    int byte_size = _bet_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          3, _internal_bet(), byte_size, target);
    }
  }

  // int32 rerun = 4;
  if (this->rerun() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_rerun(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:BQTP.SC_SceneInfo)
  return target;
}

size_t SC_SceneInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:BQTP.SC_SceneInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 bet = 3;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->bet_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _bet_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // int32 free_count = 1;
  if (this->free_count() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_free_count());
  }

  // int32 curren_bet = 2;
  if (this->curren_bet() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_curren_bet());
  }

  // int32 rerun = 4;
  if (this->rerun() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_rerun());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SC_SceneInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:BQTP.SC_SceneInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const SC_SceneInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SC_SceneInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:BQTP.SC_SceneInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:BQTP.SC_SceneInfo)
    MergeFrom(*source);
  }
}

void SC_SceneInfo::MergeFrom(const SC_SceneInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:BQTP.SC_SceneInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  bet_.MergeFrom(from.bet_);
  if (from.free_count() != 0) {
    _internal_set_free_count(from._internal_free_count());
  }
  if (from.curren_bet() != 0) {
    _internal_set_curren_bet(from._internal_curren_bet());
  }
  if (from.rerun() != 0) {
    _internal_set_rerun(from._internal_rerun());
  }
}

void SC_SceneInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:BQTP.SC_SceneInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SC_SceneInfo::CopyFrom(const SC_SceneInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:BQTP.SC_SceneInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SC_SceneInfo::IsInitialized() const {
  return true;
}

void SC_SceneInfo::InternalSwap(SC_SceneInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  bet_.InternalSwap(&other->bet_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SC_SceneInfo, rerun_)
      + sizeof(SC_SceneInfo::rerun_)
      - PROTOBUF_FIELD_OFFSET(SC_SceneInfo, free_count_)>(
          reinterpret_cast<char*>(&free_count_),
          reinterpret_cast<char*>(&other->free_count_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SC_SceneInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class CMD_3D_SC_Result::_Internal {
 public:
};

CMD_3D_SC_Result::CMD_3D_SC_Result(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  icon_(arena),
  hit_icon_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:BQTP.CMD_3D_SC_Result)
}
CMD_3D_SC_Result::CMD_3D_SC_Result(const CMD_3D_SC_Result& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      icon_(from.icon_),
      hit_icon_(from.hit_icon_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&win_gold_, &from.win_gold_,
    static_cast<size_t>(reinterpret_cast<char*>(&special_wild_) -
    reinterpret_cast<char*>(&win_gold_)) + sizeof(special_wild_));
  // @@protoc_insertion_point(copy_constructor:BQTP.CMD_3D_SC_Result)
}

void CMD_3D_SC_Result::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&win_gold_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&special_wild_) -
      reinterpret_cast<char*>(&win_gold_)) + sizeof(special_wild_));
}

CMD_3D_SC_Result::~CMD_3D_SC_Result() {
  // @@protoc_insertion_point(destructor:BQTP.CMD_3D_SC_Result)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CMD_3D_SC_Result::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void CMD_3D_SC_Result::ArenaDtor(void* object) {
  CMD_3D_SC_Result* _this = reinterpret_cast< CMD_3D_SC_Result* >(object);
  (void)_this;
}
void CMD_3D_SC_Result::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CMD_3D_SC_Result::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CMD_3D_SC_Result& CMD_3D_SC_Result::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CMD_3D_SC_Result_BQTP_2eproto.base);
  return *internal_default_instance();
}


void CMD_3D_SC_Result::Clear() {
// @@protoc_insertion_point(message_clear_start:BQTP.CMD_3D_SC_Result)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  icon_.Clear();
  hit_icon_.Clear();
  ::memset(&win_gold_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&special_wild_) -
      reinterpret_cast<char*>(&win_gold_)) + sizeof(special_wild_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CMD_3D_SC_Result::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated int32 icon = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_icon(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8) {
          _internal_add_icon(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated int32 hit_icon = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_hit_icon(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16) {
          _internal_add_hit_icon(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 win_gold = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          win_gold_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 free_count = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          free_count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 rerun = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          rerun_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 special_wild = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          special_wild_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CMD_3D_SC_Result::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:BQTP.CMD_3D_SC_Result)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 icon = 1;
  {
    int byte_size = _icon_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          1, _internal_icon(), byte_size, target);
    }
  }

  // repeated int32 hit_icon = 2;
  {
    int byte_size = _hit_icon_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          2, _internal_hit_icon(), byte_size, target);
    }
  }

  // int64 win_gold = 3;
  if (this->win_gold() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_win_gold(), target);
  }

  // int32 free_count = 4;
  if (this->free_count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_free_count(), target);
  }

  // int32 rerun = 5;
  if (this->rerun() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_rerun(), target);
  }

  // int32 special_wild = 6;
  if (this->special_wild() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(6, this->_internal_special_wild(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:BQTP.CMD_3D_SC_Result)
  return target;
}

size_t CMD_3D_SC_Result::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:BQTP.CMD_3D_SC_Result)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 icon = 1;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->icon_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _icon_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated int32 hit_icon = 2;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->hit_icon_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _hit_icon_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // int64 win_gold = 3;
  if (this->win_gold() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_win_gold());
  }

  // int32 free_count = 4;
  if (this->free_count() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_free_count());
  }

  // int32 rerun = 5;
  if (this->rerun() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_rerun());
  }

  // int32 special_wild = 6;
  if (this->special_wild() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_special_wild());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CMD_3D_SC_Result::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:BQTP.CMD_3D_SC_Result)
  GOOGLE_DCHECK_NE(&from, this);
  const CMD_3D_SC_Result* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CMD_3D_SC_Result>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:BQTP.CMD_3D_SC_Result)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:BQTP.CMD_3D_SC_Result)
    MergeFrom(*source);
  }
}

void CMD_3D_SC_Result::MergeFrom(const CMD_3D_SC_Result& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:BQTP.CMD_3D_SC_Result)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  icon_.MergeFrom(from.icon_);
  hit_icon_.MergeFrom(from.hit_icon_);
  if (from.win_gold() != 0) {
    _internal_set_win_gold(from._internal_win_gold());
  }
  if (from.free_count() != 0) {
    _internal_set_free_count(from._internal_free_count());
  }
  if (from.rerun() != 0) {
    _internal_set_rerun(from._internal_rerun());
  }
  if (from.special_wild() != 0) {
    _internal_set_special_wild(from._internal_special_wild());
  }
}

void CMD_3D_SC_Result::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:BQTP.CMD_3D_SC_Result)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CMD_3D_SC_Result::CopyFrom(const CMD_3D_SC_Result& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:BQTP.CMD_3D_SC_Result)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CMD_3D_SC_Result::IsInitialized() const {
  return true;
}

void CMD_3D_SC_Result::InternalSwap(CMD_3D_SC_Result* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  icon_.InternalSwap(&other->icon_);
  hit_icon_.InternalSwap(&other->hit_icon_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CMD_3D_SC_Result, special_wild_)
      + sizeof(CMD_3D_SC_Result::special_wild_)
      - PROTOBUF_FIELD_OFFSET(CMD_3D_SC_Result, win_gold_)>(
          reinterpret_cast<char*>(&win_gold_),
          reinterpret_cast<char*>(&other->win_gold_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CMD_3D_SC_Result::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace BQTP
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::BQTP::SC_SceneInfo* Arena::CreateMaybeMessage< ::BQTP::SC_SceneInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::BQTP::SC_SceneInfo >(arena);
}
template<> PROTOBUF_NOINLINE ::BQTP::CMD_3D_SC_Result* Arena::CreateMaybeMessage< ::BQTP::CMD_3D_SC_Result >(Arena* arena) {
  return Arena::CreateMessageInternal< ::BQTP::CMD_3D_SC_Result >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>