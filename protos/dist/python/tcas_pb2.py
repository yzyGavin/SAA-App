# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tcas.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='tcas.proto',
  package='',
  syntax='proto2',
  serialized_pb=_b('\n\ntcas.proto\"\\\n\nTcasReport\x12\n\n\x02id\x18\x01 \x02(\x0f\x12\r\n\x05range\x18\x02 \x02(\x02\x12\x10\n\x08\x61ltitude\x18\x03 \x02(\x02\x12\x0f\n\x07\x62\x65\x61ring\x18\x04 \x02(\x02\x12\x10\n\x08plane_id\x18\x05 \x01(\rB#\n\x1b\x65\x64u.calpoly.capstone.sensorB\x04Tcas')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_TCASREPORT = _descriptor.Descriptor(
  name='TcasReport',
  full_name='TcasReport',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='TcasReport.id', index=0,
      number=1, type=15, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='range', full_name='TcasReport.range', index=1,
      number=2, type=2, cpp_type=6, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='altitude', full_name='TcasReport.altitude', index=2,
      number=3, type=2, cpp_type=6, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bearing', full_name='TcasReport.bearing', index=3,
      number=4, type=2, cpp_type=6, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='plane_id', full_name='TcasReport.plane_id', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=14,
  serialized_end=106,
)

DESCRIPTOR.message_types_by_name['TcasReport'] = _TCASREPORT

TcasReport = _reflection.GeneratedProtocolMessageType('TcasReport', (_message.Message,), dict(
  DESCRIPTOR = _TCASREPORT,
  __module__ = 'tcas_pb2'
  # @@protoc_insertion_point(class_scope:TcasReport)
  ))
_sym_db.RegisterMessage(TcasReport)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\033edu.calpoly.capstone.sensorB\004Tcas'))
# @@protoc_insertion_point(module_scope)
