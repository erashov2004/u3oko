//This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
/**
\file       leaf-module-catch-functs.cpp
\date       01.08.2017
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\copyright  www.uuusoft.com
\project    uuu_ilink
\brief      empty brief
*/
#include "mmedia/defines/defines.hpp"
#include "mmedia/defines/includes.hpp"
#include "../../includes_int.hpp"
#include "../includes_int.hpp"
#include "leaf-module.hpp"

namespace libs { namespace ilink { namespace appl { namespace leaf {

IEvent::ptr
LeafModule::default_catch_funct (IEvent::ptr _msg, bool _forward)
{
//LOGIT2LINK( std::string("leaf: warning, default catch msg, ") + _msg->get_mid(), text_id_module_ );
#if 0
    if( _forward )
    {
      //если сообщение уже пришло с транзакцией, значит это ответ на нашу.
      if (current_seq_.seq_)
      {
        UASSERT (current_seq_.answer_);
        return IEvent::ptr ();
      }

      UASSERT (!current_seq_.dest_);

      //Ищем модуль будет обрабатывать данное сообщение и, если модуль существует, помечаем сообщение для транзакции.
      if (::libs::iproperties::helpers::cast_event<::libs::ilog_events::events::BaseLogEvent>(_msg))
      {
        current_seq_.dest_ = links_.all2log_;
      }

      if (current_seq_.dest_)
      {
        current_seq_.seq_ = true;
        current_seq_.id_seq_ = boost::uuids::random_generator ()();
      }
      
      return IEvent::ptr();
    }
#endif
  return IEvent::ptr ();
}

}}}}      // namespace libs::ilink::appl::leaf
