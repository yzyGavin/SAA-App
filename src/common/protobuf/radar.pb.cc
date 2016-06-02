/**
 * Copyright (c) 2016 Cal Poly Capstone Team Rocket
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in the
 * Software without restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: radar.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "radar.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* RadarReport_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RadarReport_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_radar_2eproto() {
  protobuf_AddDesc_radar_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "radar.proto");
  GOOGLE_CHECK(file != NULL);
  RadarReport_descriptor_ = file->message_type(0);
  static const int RadarReport_offsets_[12] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, azimuth_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, elevation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, north_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, east_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, down_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, latitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, longitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, altitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, plane_id_),
  };
  RadarReport_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RadarReport_descriptor_,
      RadarReport::default_instance_,
      RadarReport_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, _has_bits_[0]),
      -1,
      -1,
      sizeof(RadarReport),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadarReport, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_radar_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RadarReport_descriptor_, &RadarReport::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_radar_2eproto() {
  delete RadarReport::default_instance_;
  delete RadarReport_reflection_;
}

void protobuf_AddDesc_radar_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013radar.proto\"\323\001\n\013RadarReport\022\021\n\ttimesta"
    "mp\030\001 \002(\020\022\r\n\005range\030\002 \002(\002\022\017\n\007azimuth\030\003 \002(\002"
    "\022\021\n\televation\030\004 \002(\002\022\n\n\002id\030\005 \002(\017\022\r\n\005north"
    "\030\006 \002(\002\022\014\n\004east\030\007 \002(\002\022\014\n\004down\030\010 \002(\002\022\020\n\010la"
    "titude\030\t \002(\002\022\021\n\tlongitude\030\n \002(\002\022\020\n\010altit"
    "ude\030\013 \002(\002\022\020\n\010plane_id\030\014 \001(\rB$\n\033edu.calpo"
    "ly.capstone.sensorB\005Radar", 265);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "radar.proto", &protobuf_RegisterTypes);
  RadarReport::default_instance_ = new RadarReport();
  RadarReport::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_radar_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_radar_2eproto {
  StaticDescriptorInitializer_radar_2eproto() {
    protobuf_AddDesc_radar_2eproto();
  }
} static_descriptor_initializer_radar_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RadarReport::kTimestampFieldNumber;
const int RadarReport::kRangeFieldNumber;
const int RadarReport::kAzimuthFieldNumber;
const int RadarReport::kElevationFieldNumber;
const int RadarReport::kIdFieldNumber;
const int RadarReport::kNorthFieldNumber;
const int RadarReport::kEastFieldNumber;
const int RadarReport::kDownFieldNumber;
const int RadarReport::kLatitudeFieldNumber;
const int RadarReport::kLongitudeFieldNumber;
const int RadarReport::kAltitudeFieldNumber;
const int RadarReport::kPlaneIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RadarReport::RadarReport()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:RadarReport)
}

void RadarReport::InitAsDefaultInstance() {
}

RadarReport::RadarReport(const RadarReport& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:RadarReport)
}

void RadarReport::SharedCtor() {
  _cached_size_ = 0;
  timestamp_ = GOOGLE_LONGLONG(0);
  range_ = 0;
  azimuth_ = 0;
  elevation_ = 0;
  id_ = 0;
  north_ = 0;
  east_ = 0;
  down_ = 0;
  latitude_ = 0;
  longitude_ = 0;
  altitude_ = 0;
  plane_id_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RadarReport::~RadarReport() {
  // @@protoc_insertion_point(destructor:RadarReport)
  SharedDtor();
}

void RadarReport::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RadarReport::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RadarReport::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RadarReport_descriptor_;
}

const RadarReport& RadarReport::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_radar_2eproto();
  return *default_instance_;
}

RadarReport* RadarReport::default_instance_ = NULL;

RadarReport* RadarReport::New(::google::protobuf::Arena* arena) const {
  RadarReport* n = new RadarReport;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RadarReport::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<RadarReport*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 255u) {
    ZR_(timestamp_, down_);
  }
  ZR_(latitude_, plane_id_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool RadarReport::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:RadarReport)
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
        if (input->ExpectTag(21)) goto parse_range;
        break;
      }

      // required float range = 2;
      case 2: {
        if (tag == 21) {
         parse_range:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &range_)));
          set_has_range();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_azimuth;
        break;
      }

      // required float azimuth = 3;
      case 3: {
        if (tag == 29) {
         parse_azimuth:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &azimuth_)));
          set_has_azimuth();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_elevation;
        break;
      }

      // required float elevation = 4;
      case 4: {
        if (tag == 37) {
         parse_elevation:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &elevation_)));
          set_has_elevation();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(45)) goto parse_id;
        break;
      }

      // required sfixed32 id = 5;
      case 5: {
        if (tag == 45) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SFIXED32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(53)) goto parse_north;
        break;
      }

      // required float north = 6;
      case 6: {
        if (tag == 53) {
         parse_north:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &north_)));
          set_has_north();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(61)) goto parse_east;
        break;
      }

      // required float east = 7;
      case 7: {
        if (tag == 61) {
         parse_east:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &east_)));
          set_has_east();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(69)) goto parse_down;
        break;
      }

      // required float down = 8;
      case 8: {
        if (tag == 69) {
         parse_down:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &down_)));
          set_has_down();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(77)) goto parse_latitude;
        break;
      }

      // required float latitude = 9;
      case 9: {
        if (tag == 77) {
         parse_latitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &latitude_)));
          set_has_latitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(85)) goto parse_longitude;
        break;
      }

      // required float longitude = 10;
      case 10: {
        if (tag == 85) {
         parse_longitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &longitude_)));
          set_has_longitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(93)) goto parse_altitude;
        break;
      }

      // required float altitude = 11;
      case 11: {
        if (tag == 93) {
         parse_altitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &altitude_)));
          set_has_altitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(96)) goto parse_plane_id;
        break;
      }

      // optional uint32 plane_id = 12;
      case 12: {
        if (tag == 96) {
         parse_plane_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &plane_id_)));
          set_has_plane_id();
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
  // @@protoc_insertion_point(parse_success:RadarReport)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:RadarReport)
  return false;
#undef DO_
}

void RadarReport::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:RadarReport)
  // required sfixed64 timestamp = 1;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteSFixed64(1, this->timestamp(), output);
  }

  // required float range = 2;
  if (has_range()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->range(), output);
  }

  // required float azimuth = 3;
  if (has_azimuth()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->azimuth(), output);
  }

  // required float elevation = 4;
  if (has_elevation()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->elevation(), output);
  }

  // required sfixed32 id = 5;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteSFixed32(5, this->id(), output);
  }

  // required float north = 6;
  if (has_north()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->north(), output);
  }

  // required float east = 7;
  if (has_east()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->east(), output);
  }

  // required float down = 8;
  if (has_down()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(8, this->down(), output);
  }

  // required float latitude = 9;
  if (has_latitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(9, this->latitude(), output);
  }

  // required float longitude = 10;
  if (has_longitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(10, this->longitude(), output);
  }

  // required float altitude = 11;
  if (has_altitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(11, this->altitude(), output);
  }

  // optional uint32 plane_id = 12;
  if (has_plane_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->plane_id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:RadarReport)
}

::google::protobuf::uint8* RadarReport::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:RadarReport)
  // required sfixed64 timestamp = 1;
  if (has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSFixed64ToArray(1, this->timestamp(), target);
  }

  // required float range = 2;
  if (has_range()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->range(), target);
  }

  // required float azimuth = 3;
  if (has_azimuth()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->azimuth(), target);
  }

  // required float elevation = 4;
  if (has_elevation()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->elevation(), target);
  }

  // required sfixed32 id = 5;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSFixed32ToArray(5, this->id(), target);
  }

  // required float north = 6;
  if (has_north()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->north(), target);
  }

  // required float east = 7;
  if (has_east()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->east(), target);
  }

  // required float down = 8;
  if (has_down()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(8, this->down(), target);
  }

  // required float latitude = 9;
  if (has_latitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(9, this->latitude(), target);
  }

  // required float longitude = 10;
  if (has_longitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(10, this->longitude(), target);
  }

  // required float altitude = 11;
  if (has_altitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(11, this->altitude(), target);
  }

  // optional uint32 plane_id = 12;
  if (has_plane_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->plane_id(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RadarReport)
  return target;
}

int RadarReport::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_timestamp()) {
    // required sfixed64 timestamp = 1;
    total_size += 1 + 8;
  }

  if (has_range()) {
    // required float range = 2;
    total_size += 1 + 4;
  }

  if (has_azimuth()) {
    // required float azimuth = 3;
    total_size += 1 + 4;
  }

  if (has_elevation()) {
    // required float elevation = 4;
    total_size += 1 + 4;
  }

  if (has_id()) {
    // required sfixed32 id = 5;
    total_size += 1 + 4;
  }

  if (has_north()) {
    // required float north = 6;
    total_size += 1 + 4;
  }

  if (has_east()) {
    // required float east = 7;
    total_size += 1 + 4;
  }

  if (has_down()) {
    // required float down = 8;
    total_size += 1 + 4;
  }

  if (has_latitude()) {
    // required float latitude = 9;
    total_size += 1 + 4;
  }

  if (has_longitude()) {
    // required float longitude = 10;
    total_size += 1 + 4;
  }

  if (has_altitude()) {
    // required float altitude = 11;
    total_size += 1 + 4;
  }

  return total_size;
}
int RadarReport::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x000007ff) ^ 0x000007ff) == 0) {  // All required fields are present.
    // required sfixed64 timestamp = 1;
    total_size += 1 + 8;

    // required float range = 2;
    total_size += 1 + 4;

    // required float azimuth = 3;
    total_size += 1 + 4;

    // required float elevation = 4;
    total_size += 1 + 4;

    // required sfixed32 id = 5;
    total_size += 1 + 4;

    // required float north = 6;
    total_size += 1 + 4;

    // required float east = 7;
    total_size += 1 + 4;

    // required float down = 8;
    total_size += 1 + 4;

    // required float latitude = 9;
    total_size += 1 + 4;

    // required float longitude = 10;
    total_size += 1 + 4;

    // required float altitude = 11;
    total_size += 1 + 4;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional uint32 plane_id = 12;
  if (has_plane_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->plane_id());
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

void RadarReport::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const RadarReport* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RadarReport>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RadarReport::MergeFrom(const RadarReport& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_timestamp()) {
      set_timestamp(from.timestamp());
    }
    if (from.has_range()) {
      set_range(from.range());
    }
    if (from.has_azimuth()) {
      set_azimuth(from.azimuth());
    }
    if (from.has_elevation()) {
      set_elevation(from.elevation());
    }
    if (from.has_id()) {
      set_id(from.id());
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
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_latitude()) {
      set_latitude(from.latitude());
    }
    if (from.has_longitude()) {
      set_longitude(from.longitude());
    }
    if (from.has_altitude()) {
      set_altitude(from.altitude());
    }
    if (from.has_plane_id()) {
      set_plane_id(from.plane_id());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void RadarReport::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RadarReport::CopyFrom(const RadarReport& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RadarReport::IsInitialized() const {
  if ((_has_bits_[0] & 0x000007ff) != 0x000007ff) return false;

  return true;
}

void RadarReport::Swap(RadarReport* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RadarReport::InternalSwap(RadarReport* other) {
  std::swap(timestamp_, other->timestamp_);
  std::swap(range_, other->range_);
  std::swap(azimuth_, other->azimuth_);
  std::swap(elevation_, other->elevation_);
  std::swap(id_, other->id_);
  std::swap(north_, other->north_);
  std::swap(east_, other->east_);
  std::swap(down_, other->down_);
  std::swap(latitude_, other->latitude_);
  std::swap(longitude_, other->longitude_);
  std::swap(altitude_, other->altitude_);
  std::swap(plane_id_, other->plane_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RadarReport::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RadarReport_descriptor_;
  metadata.reflection = RadarReport_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RadarReport

// required sfixed64 timestamp = 1;
bool RadarReport::has_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void RadarReport::set_has_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
void RadarReport::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
void RadarReport::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
 ::google::protobuf::int64 RadarReport::timestamp() const {
  // @@protoc_insertion_point(field_get:RadarReport.timestamp)
  return timestamp_;
}
 void RadarReport::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.timestamp)
}

// required float range = 2;
bool RadarReport::has_range() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void RadarReport::set_has_range() {
  _has_bits_[0] |= 0x00000002u;
}
void RadarReport::clear_has_range() {
  _has_bits_[0] &= ~0x00000002u;
}
void RadarReport::clear_range() {
  range_ = 0;
  clear_has_range();
}
 float RadarReport::range() const {
  // @@protoc_insertion_point(field_get:RadarReport.range)
  return range_;
}
 void RadarReport::set_range(float value) {
  set_has_range();
  range_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.range)
}

// required float azimuth = 3;
bool RadarReport::has_azimuth() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void RadarReport::set_has_azimuth() {
  _has_bits_[0] |= 0x00000004u;
}
void RadarReport::clear_has_azimuth() {
  _has_bits_[0] &= ~0x00000004u;
}
void RadarReport::clear_azimuth() {
  azimuth_ = 0;
  clear_has_azimuth();
}
 float RadarReport::azimuth() const {
  // @@protoc_insertion_point(field_get:RadarReport.azimuth)
  return azimuth_;
}
 void RadarReport::set_azimuth(float value) {
  set_has_azimuth();
  azimuth_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.azimuth)
}

// required float elevation = 4;
bool RadarReport::has_elevation() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void RadarReport::set_has_elevation() {
  _has_bits_[0] |= 0x00000008u;
}
void RadarReport::clear_has_elevation() {
  _has_bits_[0] &= ~0x00000008u;
}
void RadarReport::clear_elevation() {
  elevation_ = 0;
  clear_has_elevation();
}
 float RadarReport::elevation() const {
  // @@protoc_insertion_point(field_get:RadarReport.elevation)
  return elevation_;
}
 void RadarReport::set_elevation(float value) {
  set_has_elevation();
  elevation_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.elevation)
}

// required sfixed32 id = 5;
bool RadarReport::has_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void RadarReport::set_has_id() {
  _has_bits_[0] |= 0x00000010u;
}
void RadarReport::clear_has_id() {
  _has_bits_[0] &= ~0x00000010u;
}
void RadarReport::clear_id() {
  id_ = 0;
  clear_has_id();
}
 ::google::protobuf::int32 RadarReport::id() const {
  // @@protoc_insertion_point(field_get:RadarReport.id)
  return id_;
}
 void RadarReport::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.id)
}

// required float north = 6;
bool RadarReport::has_north() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void RadarReport::set_has_north() {
  _has_bits_[0] |= 0x00000020u;
}
void RadarReport::clear_has_north() {
  _has_bits_[0] &= ~0x00000020u;
}
void RadarReport::clear_north() {
  north_ = 0;
  clear_has_north();
}
 float RadarReport::north() const {
  // @@protoc_insertion_point(field_get:RadarReport.north)
  return north_;
}
 void RadarReport::set_north(float value) {
  set_has_north();
  north_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.north)
}

// required float east = 7;
bool RadarReport::has_east() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void RadarReport::set_has_east() {
  _has_bits_[0] |= 0x00000040u;
}
void RadarReport::clear_has_east() {
  _has_bits_[0] &= ~0x00000040u;
}
void RadarReport::clear_east() {
  east_ = 0;
  clear_has_east();
}
 float RadarReport::east() const {
  // @@protoc_insertion_point(field_get:RadarReport.east)
  return east_;
}
 void RadarReport::set_east(float value) {
  set_has_east();
  east_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.east)
}

// required float down = 8;
bool RadarReport::has_down() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void RadarReport::set_has_down() {
  _has_bits_[0] |= 0x00000080u;
}
void RadarReport::clear_has_down() {
  _has_bits_[0] &= ~0x00000080u;
}
void RadarReport::clear_down() {
  down_ = 0;
  clear_has_down();
}
 float RadarReport::down() const {
  // @@protoc_insertion_point(field_get:RadarReport.down)
  return down_;
}
 void RadarReport::set_down(float value) {
  set_has_down();
  down_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.down)
}

// required float latitude = 9;
bool RadarReport::has_latitude() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
void RadarReport::set_has_latitude() {
  _has_bits_[0] |= 0x00000100u;
}
void RadarReport::clear_has_latitude() {
  _has_bits_[0] &= ~0x00000100u;
}
void RadarReport::clear_latitude() {
  latitude_ = 0;
  clear_has_latitude();
}
 float RadarReport::latitude() const {
  // @@protoc_insertion_point(field_get:RadarReport.latitude)
  return latitude_;
}
 void RadarReport::set_latitude(float value) {
  set_has_latitude();
  latitude_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.latitude)
}

// required float longitude = 10;
bool RadarReport::has_longitude() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
void RadarReport::set_has_longitude() {
  _has_bits_[0] |= 0x00000200u;
}
void RadarReport::clear_has_longitude() {
  _has_bits_[0] &= ~0x00000200u;
}
void RadarReport::clear_longitude() {
  longitude_ = 0;
  clear_has_longitude();
}
 float RadarReport::longitude() const {
  // @@protoc_insertion_point(field_get:RadarReport.longitude)
  return longitude_;
}
 void RadarReport::set_longitude(float value) {
  set_has_longitude();
  longitude_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.longitude)
}

// required float altitude = 11;
bool RadarReport::has_altitude() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
void RadarReport::set_has_altitude() {
  _has_bits_[0] |= 0x00000400u;
}
void RadarReport::clear_has_altitude() {
  _has_bits_[0] &= ~0x00000400u;
}
void RadarReport::clear_altitude() {
  altitude_ = 0;
  clear_has_altitude();
}
 float RadarReport::altitude() const {
  // @@protoc_insertion_point(field_get:RadarReport.altitude)
  return altitude_;
}
 void RadarReport::set_altitude(float value) {
  set_has_altitude();
  altitude_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.altitude)
}

// optional uint32 plane_id = 12;
bool RadarReport::has_plane_id() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
void RadarReport::set_has_plane_id() {
  _has_bits_[0] |= 0x00000800u;
}
void RadarReport::clear_has_plane_id() {
  _has_bits_[0] &= ~0x00000800u;
}
void RadarReport::clear_plane_id() {
  plane_id_ = 0u;
  clear_has_plane_id();
}
 ::google::protobuf::uint32 RadarReport::plane_id() const {
  // @@protoc_insertion_point(field_get:RadarReport.plane_id)
  return plane_id_;
}
 void RadarReport::set_plane_id(::google::protobuf::uint32 value) {
  set_has_plane_id();
  plane_id_ = value;
  // @@protoc_insertion_point(field_set:RadarReport.plane_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
