// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Record.proto

#include "Record.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
        template <typename>
PROTOBUF_CONSTEXPR Record::Record(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.address_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.name_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.activity_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.foreigneconomicactivity_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.year_)*/ 0,
    } {}
struct RecordDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RecordDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RecordDefaultTypeInternal() {}
  union {
    Record _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RecordDefaultTypeInternal _Record_default_instance_;
static ::_pb::Metadata file_level_metadata_Record_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_Record_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_Record_2eproto = nullptr;
const ::uint32_t TableStruct_Record_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::Record, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::Record, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::Record, _impl_.year_),
    PROTOBUF_FIELD_OFFSET(::Record, _impl_.address_),
    PROTOBUF_FIELD_OFFSET(::Record, _impl_.name_),
    PROTOBUF_FIELD_OFFSET(::Record, _impl_.activity_),
    PROTOBUF_FIELD_OFFSET(::Record, _impl_.foreigneconomicactivity_),
    4,
    0,
    1,
    2,
    3,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, 13, -1, sizeof(::Record)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::_Record_default_instance_._instance,
};
const char descriptor_table_protodef_Record_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\014Record.proto\"h\n\006Record\022\014\n\004year\030\001 \002(\005\022\017"
    "\n\007address\030\002 \002(\t\022\014\n\004name\030\003 \002(\t\022\020\n\010activit"
    "y\030\004 \001(\t\022\037\n\027foreignEconomicActivity\030\005 \001(\t"
};
static ::absl::once_flag descriptor_table_Record_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Record_2eproto = {
    false,
    false,
    120,
    descriptor_table_protodef_Record_2eproto,
    "Record.proto",
    &descriptor_table_Record_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_Record_2eproto::offsets,
    file_level_metadata_Record_2eproto,
    file_level_enum_descriptors_Record_2eproto,
    file_level_service_descriptors_Record_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Record_2eproto_getter() {
  return &descriptor_table_Record_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Record_2eproto(&descriptor_table_Record_2eproto);
// ===================================================================

class Record::_Internal {
 public:
  using HasBits = decltype(std::declval<Record>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Record, _impl_._has_bits_);
  static void set_has_year(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_address(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_activity(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_foreigneconomicactivity(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000013) ^ 0x00000013) != 0;
  }
};

Record::Record(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Record)
}
Record::Record(const Record& from) : ::google::protobuf::Message() {
  Record* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.address_){},
      decltype(_impl_.name_){},
      decltype(_impl_.activity_){},
      decltype(_impl_.foreigneconomicactivity_){},
      decltype(_impl_.year_){},
  };
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  _impl_.address_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.address_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.address_.Set(from._internal_address(), _this->GetArenaForAllocation());
  }
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.name_.Set(from._internal_name(), _this->GetArenaForAllocation());
  }
  _impl_.activity_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.activity_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000004u) != 0) {
    _this->_impl_.activity_.Set(from._internal_activity(), _this->GetArenaForAllocation());
  }
  _impl_.foreigneconomicactivity_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.foreigneconomicactivity_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000008u) != 0) {
    _this->_impl_.foreigneconomicactivity_.Set(from._internal_foreigneconomicactivity(), _this->GetArenaForAllocation());
  }
  _this->_impl_.year_ = from._impl_.year_;

  // @@protoc_insertion_point(copy_constructor:Record)
}
inline void Record::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.address_){},
      decltype(_impl_.name_){},
      decltype(_impl_.activity_){},
      decltype(_impl_.foreigneconomicactivity_){},
      decltype(_impl_.year_){0},
  };
  _impl_.address_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.address_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.activity_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.activity_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.foreigneconomicactivity_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.foreigneconomicactivity_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
Record::~Record() {
  // @@protoc_insertion_point(destructor:Record)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Record::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.address_.Destroy();
  _impl_.name_.Destroy();
  _impl_.activity_.Destroy();
  _impl_.foreigneconomicactivity_.Destroy();
}
void Record::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void Record::Clear() {
// @@protoc_insertion_point(message_clear_start:Record)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.address_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.activity_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      _impl_.foreigneconomicactivity_.ClearNonDefaultToEmpty();
    }
  }
  _impl_.year_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Record::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 5, 0, 57, 2> Record::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Record, _impl_._has_bits_),
    0, // no _extensions_
    5, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967264,  // skipmap
    offsetof(decltype(_table_), field_entries),
    5,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Record_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // required int32 year = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Record, _impl_.year_), 4>(),
     {8, 4, 0, PROTOBUF_FIELD_OFFSET(Record, _impl_.year_)}},
    // required string address = 2;
    {::_pbi::TcParser::FastSS1,
     {18, 0, 0, PROTOBUF_FIELD_OFFSET(Record, _impl_.address_)}},
    // required string name = 3;
    {::_pbi::TcParser::FastSS1,
     {26, 1, 0, PROTOBUF_FIELD_OFFSET(Record, _impl_.name_)}},
    // optional string activity = 4;
    {::_pbi::TcParser::FastSS1,
     {34, 2, 0, PROTOBUF_FIELD_OFFSET(Record, _impl_.activity_)}},
    // optional string foreignEconomicActivity = 5;
    {::_pbi::TcParser::FastSS1,
     {42, 3, 0, PROTOBUF_FIELD_OFFSET(Record, _impl_.foreigneconomicactivity_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // required int32 year = 1;
    {PROTOBUF_FIELD_OFFSET(Record, _impl_.year_), _Internal::kHasBitsOffset + 4, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
    // required string address = 2;
    {PROTOBUF_FIELD_OFFSET(Record, _impl_.address_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kRawString | ::_fl::kRepAString)},
    // required string name = 3;
    {PROTOBUF_FIELD_OFFSET(Record, _impl_.name_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kRawString | ::_fl::kRepAString)},
    // optional string activity = 4;
    {PROTOBUF_FIELD_OFFSET(Record, _impl_.activity_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kRawString | ::_fl::kRepAString)},
    // optional string foreignEconomicActivity = 5;
    {PROTOBUF_FIELD_OFFSET(Record, _impl_.foreigneconomicactivity_), _Internal::kHasBitsOffset + 3, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kRawString | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\6\0\7\4\10\27\0\0"
    "Record"
    "address"
    "name"
    "activity"
    "foreignEconomicActivity"
  }},
};

::uint8_t* Record::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Record)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required int32 year = 1;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_year(), target);
  }

  // required string address = 2;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_address();
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormat::SERIALIZE,
                                "Record.address");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // required string name = 3;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_name();
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormat::SERIALIZE,
                                "Record.name");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // optional string activity = 4;
  if (cached_has_bits & 0x00000004u) {
    const std::string& _s = this->_internal_activity();
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormat::SERIALIZE,
                                "Record.activity");
    target = stream->WriteStringMaybeAliased(4, _s, target);
  }

  // optional string foreignEconomicActivity = 5;
  if (cached_has_bits & 0x00000008u) {
    const std::string& _s = this->_internal_foreigneconomicactivity();
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormat::SERIALIZE,
                                "Record.foreignEconomicActivity");
    target = stream->WriteStringMaybeAliased(5, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Record)
  return target;
}

::size_t Record::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Record)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // required string address = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_address());
    }

    // required string name = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_name());
    }

  }
  if (cached_has_bits & 0x0000000cu) {
    // optional string activity = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_activity());
    }

    // optional string foreignEconomicActivity = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_foreigneconomicactivity());
    }

  }
  // required int32 year = 1;
  if (cached_has_bits & 0x00000010u) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_year());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Record::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    Record::MergeImpl
};
const ::google::protobuf::Message::ClassData*Record::GetClassData() const { return &_class_data_; }


void Record::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Record*>(&to_msg);
  auto& from = static_cast<const Record&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Record)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_address(from._internal_address());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_activity(from._internal_activity());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_set_foreigneconomicactivity(from._internal_foreigneconomicactivity());
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.year_ = from._impl_.year_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Record::CopyFrom(const Record& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Record)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Record::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) {
    return false;
  }
  return true;
}

void Record::InternalSwap(Record* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.address_, lhs_arena,
                                       &other->_impl_.address_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, lhs_arena,
                                       &other->_impl_.name_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.activity_, lhs_arena,
                                       &other->_impl_.activity_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.foreigneconomicactivity_, lhs_arena,
                                       &other->_impl_.foreigneconomicactivity_, rhs_arena);
        swap(_impl_.year_, other->_impl_.year_);
}

::google::protobuf::Metadata Record::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Record_2eproto_getter, &descriptor_table_Record_2eproto_once,
      file_level_metadata_Record_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
