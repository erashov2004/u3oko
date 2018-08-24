﻿//This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
/**
\file       face-detect.cpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       01.05.2018
\copyright  www.uuusoft.com
\project    uuu_ievents
*/
#include "mmedia/defines/defines.hpp"
#include "mmedia/defines/includes.hpp"
#include "../../includes_int.hpp"
#include "face-detect.hpp"

namespace libs { namespace ievents { namespace runtime { namespace video {

FaceDetect::FaceDetect (const Acessor& _ph, bool _start) :
  start_ (_start)
{
  property_name_ = gen_get_type_text_id ();
}


FaceDetect::~FaceDetect ()
{}


bool
FaceDetect::is_start () const
{
  return start_;
}


::libs::events::IEvent::ptr
FaceDetect::clone_int (const ::libs::events::TypeCloneEvent& _deep) const
{
  return helper_impl_clone_funct<FaceDetect> (this, _deep);
}


void
FaceDetect::copy_int (const IEvent::craw_ptr _src)
{
  CHECK_STATE_COPY_EVENT (FaceDetect);
  super::copy_int (_src);
  start_ = _dsrc->start_;
  return;
}


template <class Archive>
void
FaceDetect::serialize (Archive& ar, const unsigned int /* file_version */)
{
  ar& BOOST_SERIALIZATION_BASE_OBJECT_NVP (super);
  ar& BOOST_SERIALIZATION_NVP (start_);
  return;
}

}}}}      // namespace libs::ievents::runtime::video

BOOST_CLASS_EXPORT_IMPLEMENT (::libs::ievents::runtime::video::FaceDetect);
SERIALIZE_TYPE_TO_ARCHIVES (::libs::ievents::runtime::video::FaceDetect);
