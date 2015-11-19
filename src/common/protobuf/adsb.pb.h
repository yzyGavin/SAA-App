// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: adsb.proto

#ifndef PROTOBUF_adsb_2eproto__INCLUDED
#define PROTOBUF_adsb_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_adsb_2eproto();
void protobuf_AssignDesc_adsb_2eproto();
void protobuf_ShutdownFile_adsb_2eproto();

class AdsBReport;

// ===================================================================

class AdsBReport : public ::google::protobuf::Message {
 public:
  AdsBReport();
  virtual ~AdsBReport();

  AdsBReport(const AdsBReport& from);

  inline AdsBReport& operator=(const AdsBReport& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AdsBReport& default_instance();

  void Swap(AdsBReport* other);

  // implements Message ----------------------------------------------

  inline AdsBReport* New() const { return New(NULL); }

  AdsBReport* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AdsBReport& from);
  void MergeFrom(const AdsBReport& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AdsBReport* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required sfixed64 timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::google::protobuf::int64 timestamp() const;
  void set_timestamp(::google::protobuf::int64 value);

  // required sfixed32 latitude = 2;
  bool has_latitude() const;
  void clear_latitude();
  static const int kLatitudeFieldNumber = 2;
  ::google::protobuf::int32 latitude() const;
  void set_latitude(::google::protobuf::int32 value);

  // required sfixed32 longitude = 3;
  bool has_longitude() const;
  void clear_longitude();
  static const int kLongitudeFieldNumber = 3;
  ::google::protobuf::int32 longitude() const;
  void set_longitude(::google::protobuf::int32 value);

  // required sfixed32 altitude = 4;
  bool has_altitude() const;
  void clear_altitude();
  static const int kAltitudeFieldNumber = 4;
  ::google::protobuf::int32 altitude() const;
  void set_altitude(::google::protobuf::int32 value);

  // required string tail_number = 5;
  bool has_tail_number() const;
  void clear_tail_number();
  static const int kTailNumberFieldNumber = 5;
  const ::std::string& tail_number() const;
  void set_tail_number(const ::std::string& value);
  void set_tail_number(const char* value);
  void set_tail_number(const char* value, size_t size);
  ::std::string* mutable_tail_number();
  ::std::string* release_tail_number();
  void set_allocated_tail_number(::std::string* tail_number);

  // required float north = 6;
  bool has_north() const;
  void clear_north();
  static const int kNorthFieldNumber = 6;
  float north() const;
  void set_north(float value);

  // required float east = 7;
  bool has_east() const;
  void clear_east();
  static const int kEastFieldNumber = 7;
  float east() const;
  void set_east(float value);

  // required float down = 8;
  bool has_down() const;
  void clear_down();
  static const int kDownFieldNumber = 8;
  float down() const;
  void set_down(float value);

  // @@protoc_insertion_point(class_scope:AdsBReport)
 private:
  inline void set_has_timestamp();
  inline void clear_has_timestamp();
  inline void set_has_latitude();
  inline void clear_has_latitude();
  inline void set_has_longitude();
  inline void clear_has_longitude();
  inline void set_has_altitude();
  inline void clear_has_altitude();
  inline void set_has_tail_number();
  inline void clear_has_tail_number();
  inline void set_has_north();
  inline void clear_has_north();
  inline void set_has_east();
  inline void clear_has_east();
  inline void set_has_down();
  inline void clear_has_down();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 timestamp_;
  ::google::protobuf::int32 latitude_;
  ::google::protobuf::int32 longitude_;
  ::google::protobuf::internal::ArenaStringPtr tail_number_;
  ::google::protobuf::int32 altitude_;
  float north_;
  float east_;
  float down_;
  friend void  protobuf_AddDesc_adsb_2eproto();
  friend void protobuf_AssignDesc_adsb_2eproto();
  friend void protobuf_ShutdownFile_adsb_2eproto();

  void InitAsDefaultInstance();
  static AdsBReport* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AdsBReport

// required sfixed64 timestamp = 1;
inline bool AdsBReport::has_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AdsBReport::set_has_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AdsBReport::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AdsBReport::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::int64 AdsBReport::timestamp() const {
  // @@protoc_insertion_point(field_get:AdsBReport.timestamp)
  return timestamp_;
}
inline void AdsBReport::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:AdsBReport.timestamp)
}

// required sfixed32 latitude = 2;
inline bool AdsBReport::has_latitude() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AdsBReport::set_has_latitude() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AdsBReport::clear_has_latitude() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AdsBReport::clear_latitude() {
  latitude_ = 0;
  clear_has_latitude();
}
inline ::google::protobuf::int32 AdsBReport::latitude() const {
  // @@protoc_insertion_point(field_get:AdsBReport.latitude)
  return latitude_;
}
inline void AdsBReport::set_latitude(::google::protobuf::int32 value) {
  set_has_latitude();
  latitude_ = value;
  // @@protoc_insertion_point(field_set:AdsBReport.latitude)
}

// required sfixed32 longitude = 3;
inline bool AdsBReport::has_longitude() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AdsBReport::set_has_longitude() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AdsBReport::clear_has_longitude() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AdsBReport::clear_longitude() {
  longitude_ = 0;
  clear_has_longitude();
}
inline ::google::protobuf::int32 AdsBReport::longitude() const {
  // @@protoc_insertion_point(field_get:AdsBReport.longitude)
  return longitude_;
}
inline void AdsBReport::set_longitude(::google::protobuf::int32 value) {
  set_has_longitude();
  longitude_ = value;
  // @@protoc_insertion_point(field_set:AdsBReport.longitude)
}

// required sfixed32 altitude = 4;
inline bool AdsBReport::has_altitude() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AdsBReport::set_has_altitude() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AdsBReport::clear_has_altitude() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AdsBReport::clear_altitude() {
  altitude_ = 0;
  clear_has_altitude();
}
inline ::google::protobuf::int32 AdsBReport::altitude() const {
  // @@protoc_insertion_point(field_get:AdsBReport.altitude)
  return altitude_;
}
inline void AdsBReport::set_altitude(::google::protobuf::int32 value) {
  set_has_altitude();
  altitude_ = value;
  // @@protoc_insertion_point(field_set:AdsBReport.altitude)
}

// required string tail_number = 5;
inline bool AdsBReport::has_tail_number() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AdsBReport::set_has_tail_number() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AdsBReport::clear_has_tail_number() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AdsBReport::clear_tail_number() {
  tail_number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_tail_number();
}
inline const ::std::string& AdsBReport::tail_number() const {
  // @@protoc_insertion_point(field_get:AdsBReport.tail_number)
  return tail_number_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AdsBReport::set_tail_number(const ::std::string& value) {
  set_has_tail_number();
  tail_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AdsBReport.tail_number)
}
inline void AdsBReport::set_tail_number(const char* value) {
  set_has_tail_number();
  tail_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AdsBReport.tail_number)
}
inline void AdsBReport::set_tail_number(const char* value, size_t size) {
  set_has_tail_number();
  tail_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AdsBReport.tail_number)
}
inline ::std::string* AdsBReport::mutable_tail_number() {
  set_has_tail_number();
  // @@protoc_insertion_point(field_mutable:AdsBReport.tail_number)
  return tail_number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AdsBReport::release_tail_number() {
  clear_has_tail_number();
  return tail_number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AdsBReport::set_allocated_tail_number(::std::string* tail_number) {
  if (tail_number != NULL) {
    set_has_tail_number();
  } else {
    clear_has_tail_number();
  }
  tail_number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tail_number);
  // @@protoc_insertion_point(field_set_allocated:AdsBReport.tail_number)
}

// required float north = 6;
inline bool AdsBReport::has_north() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AdsBReport::set_has_north() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AdsBReport::clear_has_north() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AdsBReport::clear_north() {
  north_ = 0;
  clear_has_north();
}
inline float AdsBReport::north() const {
  // @@protoc_insertion_point(field_get:AdsBReport.north)
  return north_;
}
inline void AdsBReport::set_north(float value) {
  set_has_north();
  north_ = value;
  // @@protoc_insertion_point(field_set:AdsBReport.north)
}

// required float east = 7;
inline bool AdsBReport::has_east() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void AdsBReport::set_has_east() {
  _has_bits_[0] |= 0x00000040u;
}
inline void AdsBReport::clear_has_east() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void AdsBReport::clear_east() {
  east_ = 0;
  clear_has_east();
}
inline float AdsBReport::east() const {
  // @@protoc_insertion_point(field_get:AdsBReport.east)
  return east_;
}
inline void AdsBReport::set_east(float value) {
  set_has_east();
  east_ = value;
  // @@protoc_insertion_point(field_set:AdsBReport.east)
}

// required float down = 8;
inline bool AdsBReport::has_down() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void AdsBReport::set_has_down() {
  _has_bits_[0] |= 0x00000080u;
}
inline void AdsBReport::clear_has_down() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void AdsBReport::clear_down() {
  down_ = 0;
  clear_has_down();
}
inline float AdsBReport::down() const {
  // @@protoc_insertion_point(field_get:AdsBReport.down)
  return down_;
}
inline void AdsBReport::set_down(float value) {
  set_has_down();
  down_ = value;
  // @@protoc_insertion_point(field_set:AdsBReport.down)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_adsb_2eproto__INCLUDED
