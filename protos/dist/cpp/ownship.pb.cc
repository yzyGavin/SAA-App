// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ownship.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ownship.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* OwnshipReport_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OwnshipReport_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ownship_2eproto() {
  protobuf_AddDesc_ownship_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ownship.proto");
  GOOGLE_CHECK(file != NULL);
  OwnshipReport_descriptor_ = file->message_type(0);
  static const int OwnshipReport_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OwnshipReport, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OwnshipReport, ownship_latitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OwnshipReport, ownship_longitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OwnshipReport, ownship_altitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OwnshipReport, north_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OwnshipReport, east_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OwnshipReport, down_),
  };
  OwnshipReport_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OwnshipReport_descriptor_,
      OwnshipReport::default_instance_,
      OwnshipReport_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OwnshipReport, _has_bits_[0]),
      -1,
      -1,
      sizeof(OwnshipReport),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OwnshipReport, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ownship_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OwnshipReport_descriptor_, &OwnshipReport::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ownship_2eproto() {
  delete OwnshipReport::default_instance_;
  delete OwnshipReport_reflection_;
}

void protobuf_AddDesc_ownship_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rownship.proto\"\234\001\n\rOwnshipReport\022\021\n\ttim"
    "estamp\030\001 \002(\020\022\030\n\020ownship_latitude\030\002 \002(\002\022\031"
    "\n\021ownship_longitude\030\003 \002(\002\022\030\n\020ownship_alt"
    "itude\030\004 \002(\002\022\r\n\005north\030\005 \002(\002\022\014\n\004east\030\006 \002(\002"
    "\022\014\n\004down\030\007 \002(\002B&\n\033edu.calpoly.capstone.s"
    "ensorB\007Ownship", 214);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ownship.proto", &protobuf_RegisterTypes);
  OwnshipReport::default_instance_ = new OwnshipReport();
  OwnshipReport::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ownship_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ownship_2eproto {
  StaticDescriptorInitializer_ownship_2eproto() {
    protobuf_AddDesc_ownship_2eproto();
  }
} static_descriptor_initializer_ownship_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OwnshipReport::kTimestampFieldNumber;
const int OwnshipReport::kOwnshipLatitudeFieldNumber;
const int OwnshipReport::kOwnshipLongitudeFieldNumber;
const int OwnshipReport::kOwnshipAltitudeFieldNumber;
const int OwnshipReport::kNorthFieldNumber;
const int OwnshipReport::kEastFieldNumber;
const int OwnshipReport::kDownFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OwnshipReport::OwnshipReport()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:OwnshipReport)
}

void OwnshipReport::InitAsDefaultInstance() {
}

OwnshipReport::OwnshipReport(const OwnshipReport& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:OwnshipReport)
}

void OwnshipReport::SharedCtor() {
  _cached_size_ = 0;
  timestamp_ = GOOGLE_LONGLONG(0);
  ownship_latitude_ = 0;
  ownship_longitude_ = 0;
  ownship_altitude_ = 0;
  north_ = 0;
  east_ = 0;
  down_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OwnshipReport::~OwnshipReport() {
  // @@protoc_insertion_point(destructor:OwnshipReport)
  SharedDtor();
}

void OwnshipReport::SharedDtor() {
  if (this != default_instance_) {
  }
}

void OwnshipReport::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OwnshipReport::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OwnshipReport_descriptor_;
}

const OwnshipReport& OwnshipReport::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ownship_2eproto();
  return *default_instance_;
}

OwnshipReport* OwnshipReport::default_instance_ = NULL;

OwnshipReport* OwnshipReport::New(::google::protobuf::Arena* arena) const {
  OwnshipReport* n = new OwnshipReport;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OwnshipReport::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<OwnshipReport*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 127u) {
    ZR_(timestamp_, down_);
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool OwnshipReport::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:OwnshipReport)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required sfixed64 timestamp = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SFIXED64>(
                 input, &timestamp_)));
          set_has_timestamp();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_ownship_latitude;
        break;
      }

      // required float ownship_latitude = 2;
      case 2: {
        if (tag == 21) {
         parse_ownship_latitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ownship_latitude_)));
          set_has_ownship_latitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_ownship_longitude;
        break;
      }

      // required float ownship_longitude = 3;
      case 3: {
        if (tag == 29) {
         parse_ownship_longitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ownship_longitude_)));
          set_has_ownship_longitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_ownship_altitude;
        break;
      }

      // required float ownship_altitude = 4;
      case 4: {
        if (tag == 37) {
         parse_ownship_altitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ownship_altitude_)));
          set_has_ownship_altitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(45)) goto parse_north;
        break;
      }

      // required float north = 5;
      case 5: {
        if (tag == 45) {
         parse_north:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &north_)));
          set_has_north();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(53)) goto parse_east;
        break;
      }

      // required float east = 6;
      case 6: {
        if (tag == 53) {
         parse_east:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &east_)));
          set_has_east();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(61)) goto parse_down;
        break;
      }

      // required float down = 7;
      case 7: {
        if (tag == 61) {
         parse_down:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &down_)));
          set_has_down();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:OwnshipReport)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:OwnshipReport)
  return false;
#undef DO_
}

void OwnshipReport::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:OwnshipReport)
  // required sfixed64 timestamp = 1;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteSFixed64(1, this->timestamp(), output);
  }

  // required float ownship_latitude = 2;
  if (has_ownship_latitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->ownship_latitude(), output);
  }

  // required float ownship_longitude = 3;
  if (has_ownship_longitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->ownship_longitude(), output);
  }

  // required float ownship_altitude = 4;
  if (has_ownship_altitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->ownship_altitude(), output);
  }

  // required float north = 5;
  if (has_north()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->north(), output);
  }

  // required float east = 6;
  if (has_east()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->east(), output);
  }

  // required float down = 7;
  if (has_down()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->down(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:OwnshipReport)
}

::google::protobuf::uint8* OwnshipReport::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:OwnshipReport)
  // required sfixed64 timestamp = 1;
  if (has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSFixed64ToArray(1, this->timestamp(), target);
  }

  // required float ownship_latitude = 2;
  if (has_ownship_latitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->ownship_latitude(), target);
  }

  // required float ownship_longitude = 3;
  if (has_ownship_longitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->ownship_longitude(), target);
  }

  // required float ownship_altitude = 4;
  if (has_ownship_altitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->ownship_altitude(), target);
  }

  // required float north = 5;
  if (has_north()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->north(), target);
  }

  // required float east = 6;
  if (has_east()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->east(), target);
  }

  // required float down = 7;
  if (has_down()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->down(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:OwnshipReport)
  return target;
}

int OwnshipReport::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_timestamp()) {
    // required sfixed64 timestamp = 1;
    total_size += 1 + 8;
  }

  if (has_ownship_latitude()) {
    // required float ownship_latitude = 2;
    total_size += 1 + 4;
  }

  if (has_ownship_longitude()) {
    // required float ownship_longitude = 3;
    total_size += 1 + 4;
  }

  if (has_ownship_altitude()) {
    // required float ownship_altitude = 4;
    total_size += 1 + 4;
  }

  if (has_north()) {
    // required float north = 5;
    total_size += 1 + 4;
  }

  if (has_east()) {
    // required float east = 6;
    total_size += 1 + 4;
  }

  if (has_down()) {
    // required float down = 7;
    total_size += 1 + 4;
  }

  return total_size;
}
int OwnshipReport::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000007f) ^ 0x0000007f) == 0) {  // All required fields are present.
    // required sfixed64 timestamp = 1;
    total_size += 1 + 8;

    // required float ownship_latitude = 2;
    total_size += 1 + 4;

    // required float ownship_longitude = 3;
    total_size += 1 + 4;

    // required float ownship_altitude = 4;
    total_size += 1 + 4;

    // required float north = 5;
    total_size += 1 + 4;

    // required float east = 6;
    total_size += 1 + 4;

    // required float down = 7;
    total_size += 1 + 4;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OwnshipReport::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const OwnshipReport* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OwnshipReport>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OwnshipReport::MergeFrom(const OwnshipReport& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_timestamp()) {
      set_timestamp(from.timestamp());
    }
    if (from.has_ownship_latitude()) {
      set_ownship_latitude(from.ownship_latitude());
    }
    if (from.has_ownship_longitude()) {
      set_ownship_longitude(from.ownship_longitude());
    }
    if (from.has_ownship_altitude()) {
      set_ownship_altitude(from.ownship_altitude());
    }
    if (from.has_north()) {
      set_north(from.north());
    }
    if (from.has_east()) {
      set_east(from.east());
    }
    if (from.has_down()) {
      set_down(from.down());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void OwnshipReport::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OwnshipReport::CopyFrom(const OwnshipReport& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OwnshipReport::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  return true;
}

void OwnshipReport::Swap(OwnshipReport* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OwnshipReport::InternalSwap(OwnshipReport* other) {
  std::swap(timestamp_, other->timestamp_);
  std::swap(ownship_latitude_, other->ownship_latitude_);
  std::swap(ownship_longitude_, other->ownship_longitude_);
  std::swap(ownship_altitude_, other->ownship_altitude_);
  std::swap(north_, other->north_);
  std::swap(east_, other->east_);
  std::swap(down_, other->down_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OwnshipReport::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OwnshipReport_descriptor_;
  metadata.reflection = OwnshipReport_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OwnshipReport

// required sfixed64 timestamp = 1;
bool OwnshipReport::has_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void OwnshipReport::set_has_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
void OwnshipReport::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
void OwnshipReport::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
 ::google::protobuf::int64 OwnshipReport::timestamp() const {
  // @@protoc_insertion_point(field_get:OwnshipReport.timestamp)
  return timestamp_;
}
 void OwnshipReport::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:OwnshipReport.timestamp)
}

// required float ownship_latitude = 2;
bool OwnshipReport::has_ownship_latitude() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void OwnshipReport::set_has_ownship_latitude() {
  _has_bits_[0] |= 0x00000002u;
}
void OwnshipReport::clear_has_ownship_latitude() {
  _has_bits_[0] &= ~0x00000002u;
}
void OwnshipReport::clear_ownship_latitude() {
  ownship_latitude_ = 0;
  clear_has_ownship_latitude();
}
 float OwnshipReport::ownship_latitude() const {
  // @@protoc_insertion_point(field_get:OwnshipReport.ownship_latitude)
  return ownship_latitude_;
}
 void OwnshipReport::set_ownship_latitude(float value) {
  set_has_ownship_latitude();
  ownship_latitude_ = value;
  // @@protoc_insertion_point(field_set:OwnshipReport.ownship_latitude)
}

// required float ownship_longitude = 3;
bool OwnshipReport::has_ownship_longitude() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void OwnshipReport::set_has_ownship_longitude() {
  _has_bits_[0] |= 0x00000004u;
}
void OwnshipReport::clear_has_ownship_longitude() {
  _has_bits_[0] &= ~0x00000004u;
}
void OwnshipReport::clear_ownship_longitude() {
  ownship_longitude_ = 0;
  clear_has_ownship_longitude();
}
 float OwnshipReport::ownship_longitude() const {
  // @@protoc_insertion_point(field_get:OwnshipReport.ownship_longitude)
  return ownship_longitude_;
}
 void OwnshipReport::set_ownship_longitude(float value) {
  set_has_ownship_longitude();
  ownship_longitude_ = value;
  // @@protoc_insertion_point(field_set:OwnshipReport.ownship_longitude)
}

// required float ownship_altitude = 4;
bool OwnshipReport::has_ownship_altitude() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void OwnshipReport::set_has_ownship_altitude() {
  _has_bits_[0] |= 0x00000008u;
}
void OwnshipReport::clear_has_ownship_altitude() {
  _has_bits_[0] &= ~0x00000008u;
}
void OwnshipReport::clear_ownship_altitude() {
  ownship_altitude_ = 0;
  clear_has_ownship_altitude();
}
 float OwnshipReport::ownship_altitude() const {
  // @@protoc_insertion_point(field_get:OwnshipReport.ownship_altitude)
  return ownship_altitude_;
}
 void OwnshipReport::set_ownship_altitude(float value) {
  set_has_ownship_altitude();
  ownship_altitude_ = value;
  // @@protoc_insertion_point(field_set:OwnshipReport.ownship_altitude)
}

// required float north = 5;
bool OwnshipReport::has_north() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void OwnshipReport::set_has_north() {
  _has_bits_[0] |= 0x00000010u;
}
void OwnshipReport::clear_has_north() {
  _has_bits_[0] &= ~0x00000010u;
}
void OwnshipReport::clear_north() {
  north_ = 0;
  clear_has_north();
}
 float OwnshipReport::north() const {
  // @@protoc_insertion_point(field_get:OwnshipReport.north)
  return north_;
}
 void OwnshipReport::set_north(float value) {
  set_has_north();
  north_ = value;
  // @@protoc_insertion_point(field_set:OwnshipReport.north)
}

// required float east = 6;
bool OwnshipReport::has_east() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void OwnshipReport::set_has_east() {
  _has_bits_[0] |= 0x00000020u;
}
void OwnshipReport::clear_has_east() {
  _has_bits_[0] &= ~0x00000020u;
}
void OwnshipReport::clear_east() {
  east_ = 0;
  clear_has_east();
}
 float OwnshipReport::east() const {
  // @@protoc_insertion_point(field_get:OwnshipReport.east)
  return east_;
}
 void OwnshipReport::set_east(float value) {
  set_has_east();
  east_ = value;
  // @@protoc_insertion_point(field_set:OwnshipReport.east)
}

// required float down = 7;
bool OwnshipReport::has_down() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void OwnshipReport::set_has_down() {
  _has_bits_[0] |= 0x00000040u;
}
void OwnshipReport::clear_has_down() {
  _has_bits_[0] &= ~0x00000040u;
}
void OwnshipReport::clear_down() {
  down_ = 0;
  clear_has_down();
}
 float OwnshipReport::down() const {
  // @@protoc_insertion_point(field_get:OwnshipReport.down)
  return down_;
}
 void OwnshipReport::set_down(float value) {
  set_has_down();
  down_ = value;
  // @@protoc_insertion_point(field_set:OwnshipReport.down)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)