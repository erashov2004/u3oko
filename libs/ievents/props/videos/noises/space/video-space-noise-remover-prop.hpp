#pragma once
/**
\file       video-space-noise-remover-prop.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       01.01.2017
\copyright  www.uuusoft.com
\project    uuu_ievents
\brief    
*/

namespace libs { namespace ievents { namespace props { namespace videos { namespace noises { namespace space {
/**
  \brief  empty brief
  */
class VideoSpaceNoiseRemoverProp : public ievents::Event
{
  friend class boost::serialization::access;
  friend ::dlls::devents::impl::EventsImpl;
  friend struct RegisterHelper;

  protected:
  struct Acessor
  {
    explicit Acessor (int){};
  };

  public:
  //  ext types
  using source_buffs_type = std::vector<off_buff_type>;
  UUU_THIS_TYPE_HAS_POINTERS_TO_SELF (VideoSpaceNoiseRemoverProp);
  UUU_ADD_MAKE_SHARED_FUNCT2THIS_TYPE (VideoSpaceNoiseRemoverProp);
  UUU_DISABLE_ACOPY_TYPE (VideoSpaceNoiseRemoverProp);

  explicit VideoSpaceNoiseRemoverProp (const Acessor& = Acessor (0));

  virtual ~VideoSpaceNoiseRemoverProp ();

  static const IEvent::hid_type&
  gen_get_mid ()
  {
    static const std::string _ret = "libs/ievents/props/videos/noises/space/video-space-noise-remover-prop";
    return _ret;
  }

  std::string         name_impl_;               //< Имя реализации, которая будет использованя для фильтрации.
  source_buffs_type   buffs_;                   //< Список буферов, которые будут фильтроваться. Все настройки фильтрации идентичны для всех буферов.
  off_buff_type       indx_cond_buff_;          //< Опицональный индекс буфера условий. Буфер условий определяет размер ядра фильтрации (и вообще саму возможность фильтрации).
  bool                use_cond_buff_;           //< Флаг учета буфера условий при фильтрации.
  int                 dump_counter_frame_;      //< Вывода времени работы через заданное количество кадров. 0 - отключение вывода (по умолчанию).
  ievents::Event::ptr impl_info_;               //< Расширенные свойства, связанные с конкретной реализацией фильтрации.


  private:
  UUU_THIS_TYPE_HAS_SUPER_CLASS (ievents::Event);

  friend class boost::serialization::access;

  template <class Archive>
  void serialize (Archive& ar, const unsigned int /* file_version */);

  virtual ::libs::events::IEvent::ptr clone_int (const ::libs::events::DeepEventCloneType& _deep) const override;
  virtual void                        load_int (const base_functs::xml::itn& _node) override;
  virtual void                        copy_int (const IEvent::craw_ptr _src) override;
};

}}}}}}      // namespace libs::ievents::props::videos::noises::space

BOOST_CLASS_EXPORT_KEY (::libs::ievents::props::videos::noises::space::VideoSpaceNoiseRemoverProp);
