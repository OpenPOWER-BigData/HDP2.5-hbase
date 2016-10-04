// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RSGroup.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RSGroup.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace hbase {
namespace pb {

namespace {

const ::google::protobuf::Descriptor* RSGroupInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RSGroupInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RSGroup_2eproto() {
  protobuf_AddDesc_RSGroup_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RSGroup.proto");
  GOOGLE_CHECK(file != NULL);
  RSGroupInfo_descriptor_ = file->message_type(0);
  static const int RSGroupInfo_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RSGroupInfo, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RSGroupInfo, servers_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RSGroupInfo, tables_),
  };
  RSGroupInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RSGroupInfo_descriptor_,
      RSGroupInfo::default_instance_,
      RSGroupInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RSGroupInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RSGroupInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RSGroupInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RSGroup_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RSGroupInfo_descriptor_, &RSGroupInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RSGroup_2eproto() {
  delete RSGroupInfo::default_instance_;
  delete RSGroupInfo_reflection_;
}

void protobuf_AddDesc_RSGroup_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::hbase::pb::protobuf_AddDesc_HBase_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rRSGroup.proto\022\010hbase.pb\032\013HBase.proto\"g"
    "\n\013RSGroupInfo\022\014\n\004name\030\001 \002(\t\022%\n\007servers\030\004"
    " \003(\0132\024.hbase.pb.ServerName\022#\n\006tables\030\003 \003"
    "(\0132\023.hbase.pb.TableNameBC\n*org.apache.ha"
    "doop.hbase.protobuf.generatedB\rRSGroupPr"
    "otosH\001\210\001\001\240\001\001", 212);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RSGroup.proto", &protobuf_RegisterTypes);
  RSGroupInfo::default_instance_ = new RSGroupInfo();
  RSGroupInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RSGroup_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RSGroup_2eproto {
  StaticDescriptorInitializer_RSGroup_2eproto() {
    protobuf_AddDesc_RSGroup_2eproto();
  }
} static_descriptor_initializer_RSGroup_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RSGroupInfo::kNameFieldNumber;
const int RSGroupInfo::kServersFieldNumber;
const int RSGroupInfo::kTablesFieldNumber;
#endif  // !_MSC_VER

RSGroupInfo::RSGroupInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RSGroupInfo::InitAsDefaultInstance() {
}

RSGroupInfo::RSGroupInfo(const RSGroupInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RSGroupInfo::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RSGroupInfo::~RSGroupInfo() {
  SharedDtor();
}

void RSGroupInfo::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void RSGroupInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RSGroupInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RSGroupInfo_descriptor_;
}

const RSGroupInfo& RSGroupInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RSGroup_2eproto();
  return *default_instance_;
}

RSGroupInfo* RSGroupInfo::default_instance_ = NULL;

RSGroupInfo* RSGroupInfo::New() const {
  return new RSGroupInfo;
}

void RSGroupInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
  }
  servers_.Clear();
  tables_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RSGroupInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_tables;
        break;
      }

      // repeated .hbase.pb.TableName tables = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_tables:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_tables()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_tables;
        if (input->ExpectTag(34)) goto parse_servers;
        break;
      }

      // repeated .hbase.pb.ServerName servers = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_servers:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_servers()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_servers;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RSGroupInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }

  // repeated .hbase.pb.TableName tables = 3;
  for (int i = 0; i < this->tables_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->tables(i), output);
  }

  // repeated .hbase.pb.ServerName servers = 4;
  for (int i = 0; i < this->servers_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->servers(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RSGroupInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .hbase.pb.TableName tables = 3;
  for (int i = 0; i < this->tables_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->tables(i), target);
  }

  // repeated .hbase.pb.ServerName servers = 4;
  for (int i = 0; i < this->servers_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->servers(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RSGroupInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

  }
  // repeated .hbase.pb.ServerName servers = 4;
  total_size += 1 * this->servers_size();
  for (int i = 0; i < this->servers_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->servers(i));
  }

  // repeated .hbase.pb.TableName tables = 3;
  total_size += 1 * this->tables_size();
  for (int i = 0; i < this->tables_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->tables(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RSGroupInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RSGroupInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RSGroupInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RSGroupInfo::MergeFrom(const RSGroupInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  servers_.MergeFrom(from.servers_);
  tables_.MergeFrom(from.tables_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RSGroupInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RSGroupInfo::CopyFrom(const RSGroupInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RSGroupInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < servers_size(); i++) {
    if (!this->servers(i).IsInitialized()) return false;
  }
  for (int i = 0; i < tables_size(); i++) {
    if (!this->tables(i).IsInitialized()) return false;
  }
  return true;
}

void RSGroupInfo::Swap(RSGroupInfo* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    servers_.Swap(&other->servers_);
    tables_.Swap(&other->tables_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RSGroupInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RSGroupInfo_descriptor_;
  metadata.reflection = RSGroupInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace hbase

// @@protoc_insertion_point(global_scope)
