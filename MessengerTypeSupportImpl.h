/* -*- C++ -*- */
/* Generated by /home/yan/Downloads/OpenDDS-3.16.1/bin/opendds_idl version 3.16.1 (ACE version 6.2a_p21) running on input file Messenger.idl */
#ifndef OPENDDS_IDL_GENERATED_MESSENGERTYPESUPPORTIMPL_H_442LUM
#define OPENDDS_IDL_GENERATED_MESSENGERTYPESUPPORTIMPL_H_442LUM
#include "MessengerC.h"
#include "dds/DCPS/Definitions.h"
#include "dds/DdsDcpsC.h"
#include "dds/Version.h"
#if DDS_MAJOR_VERSION != 3 || DDS_MINOR_VERSION != 16 || DDS_MICRO_VERSION != 1
#error This file should be regenerated with opendds_idl
#endif
#include "MessengerTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"
#include "dds/DCPS/ValueWriter.h"
#include "dds/DCPS/XTypes/TypeObject.h"
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL



/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: Messenger */



/* Begin STRUCT: Message */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void set_default(Messenger::Message& stru);

void serialized_size(const Encoding& encoding, size_t& size, const Messenger::Message& stru);

bool operator<<(Serializer& strm, const Messenger::Message& stru);

bool operator>>(Serializer& strm, Messenger::Message& stru);

void serialized_size(const Encoding& encoding, size_t& size, const NestedKeyOnly<const Messenger::Message>& stru);

bool operator<<(Serializer& strm, const NestedKeyOnly<const Messenger::Message>& stru);

bool operator>>(Serializer& strm, const NestedKeyOnly<Messenger::Message>& stru);

void serialized_size(const Encoding& encoding, size_t& size, const KeyOnly<const Messenger::Message>& stru);

bool operator<<(Serializer& strm, const KeyOnly<const Messenger::Message>& stru);

bool operator>>(Serializer& strm, const KeyOnly<Messenger::Message>& stru);

template <>
struct MarshalTraits<Messenger::Message> {
  static void representations_allowed_by_type(DDS::DataRepresentationIdSeq& seq)
  {
    seq.length(3);
    seq[0] = DDS::XCDR_DATA_REPRESENTATION;
    seq[1] = DDS::XCDR2_DATA_REPRESENTATION;
    seq[2] = DDS::XML_DATA_REPRESENTATION;
  }

  static SerializedSizeBound serialized_size_bound(const Encoding& encoding)
  {
    switch (encoding.kind()) {
    case Encoding::KIND_UNALIGNED_CDR:
      return SerializedSizeBound();
    case Encoding::KIND_XCDR1:
      return SerializedSizeBound();
    case Encoding::KIND_XCDR2:
      return SerializedSizeBound();
    default:
      OPENDDS_ASSERT(false);
      return SerializedSizeBound();
    }
  }

  static SerializedSizeBound key_only_serialized_size_bound(const Encoding& encoding)
  {
    switch (encoding.kind()) {
    case Encoding::KIND_UNALIGNED_CDR:
      return SerializedSizeBound(4);
    case Encoding::KIND_XCDR1:
      return SerializedSizeBound();
    case Encoding::KIND_XCDR2:
      return SerializedSizeBound();
    default:
      OPENDDS_ASSERT(false);
      return SerializedSizeBound();
    }
  }

  static bool to_message_block(ACE_Message_Block&, const Messenger::Message&) { return false; }
  static bool from_message_block(Messenger::Message&, const ACE_Message_Block&) { return false; }
  static Extensibility extensibility() { return APPENDABLE; }
  static Extensibility max_extensibility_level() { return APPENDABLE; }
};
} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger {
/// This structure supports use of std::map with one or more keys.
struct  Message_OpenDDS_KeyLessThan {
  bool operator()(const Messenger::Message& v1, const Messenger::Message& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.business_id < v2.business_id) return true;
    if (v2.business_id < v1.business_id) return false;
    return false;
  }
};
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void vwrite(OpenDDS::DCPS::ValueWriter& value_writer, const Messenger::Message& value);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger {
class MessageTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS {
namespace DCPS {
template <>
struct DDSTraits<Messenger::Message> {
  typedef Messenger::Message MessageType;
  typedef Messenger::MessageSeq MessageSequenceType;
  typedef Messenger::MessageTypeSupport TypeSupportType;
  typedef Messenger::MessageTypeSupportImpl TypeSupportTypeImpl;
  typedef Messenger::MessageDataWriter DataWriterType;
  typedef Messenger::MessageDataReader DataReaderType;
  typedef Messenger::Message_OpenDDS_KeyLessThan LessThanType;
  typedef OpenDDS::DCPS::KeyOnly<const Messenger::Message> KeyOnlyType;

  static const char* type_name() { return "Messenger::Message"; }
  static bool gen_has_key() { return true; }
  static size_t key_count() { return 1; }
};
} // namespace DCPS
} // namespace OpenDDS
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger {
class  MessageTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<MessageTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Message> TraitsType;
  typedef OpenDDS::DCPS::MarshalTraits<Message> MarshalTraitsType;
  typedef MessageTypeSupport TypeSupportType;
  typedef MessageTypeSupport::_var_type _var_type;
  typedef MessageTypeSupport::_ptr_type _ptr_type;

  MessageTypeSupportImpl() {}
  virtual ~MessageTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;

  void representations_allowed_by_type(::DDS::DataRepresentationIdSeq& seq);

  virtual const OpenDDS::XTypes::TypeIdentifier& getMinimalTypeIdentifier() const;
  virtual const OpenDDS::XTypes::TypeMap& getMinimalTypeMap() const;

  virtual OpenDDS::DCPS::Extensibility getExtensibility() const;

  static MessageTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
const MetaStruct& getMetaStruct<Messenger::Message>();
bool gen_skip_over(Serializer& ser, Messenger::Message*);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

struct Messenger_Message_xtag {};
template<> const XTypes::TypeIdentifier & getMinimalTypeIdentifier<Messenger_Message_xtag>();

template<> const XTypes::TypeMap& getMinimalTypeMap<Messenger_Message_xtag>();

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


/* End STRUCT: Message */

/* End MODULE: Messenger */
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif /* OPENDDS_IDL_GENERATED_MESSENGERTYPESUPPORTIMPL_H_442LUM */
