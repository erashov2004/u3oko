#pragma once
/**
\file       ycb2rgb24.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       30.07.2018
\copyright  www.uuusoft.com
\project    uuu_doptim_dll
\brief      empty brief
*/

namespace dlls { namespace doptim { namespace impl { namespace algs {
/**
  \brief  empty brief
  */
class YCB2RgbAlg : public IOptimAlg
{
  public:
  static constexpr const char* val_key = "libs.optim.convert.ycb_rgb24";

  YCB2RgbAlg ()
  {
    update (::libs::optim::io::TInit ());
    sel_.set_text (val_key);
  }

  virtual ~YCB2RgbAlg ()
  {}

  protected:
  virtual void
  update_int (const ::libs::optim::io::TInit& _iinfo) override
  {
    switch (_iinfo.ext_)
      {
#if defined(UUU_CPU_X86)
      case ::libs::helpers::sys::cpu::TypeExtCpu::axv2:
      case ::libs::helpers::sys::cpu::TypeExtCpu::fma:
        sel_.set (::libs::optim::convert::ycb_rgb24::alu);
        break;
      case ::libs::helpers::sys::cpu::TypeExtCpu::avx1:
        sel_.set (::libs::optim::convert::ycb_rgb24::alu);
        break;
      case ::libs::helpers::sys::cpu::TypeExtCpu::sse4_2:
      case ::libs::helpers::sys::cpu::TypeExtCpu::sse4_1:
      //case ::libs::helpers::sys::cpu::TypeExtCpu::eecI64:
      case ::libs::helpers::sys::cpu::TypeExtCpu::sse3:
      case ::libs::helpers::sys::cpu::TypeExtCpu::sse2:
        sel_.set (::libs::optim::convert::ycb_rgb24::alu);
        break;
      case ::libs::helpers::sys::cpu::TypeExtCpu::sse1:
        sel_.set (::libs::optim::convert::ycb_rgb24::alu);
        break;
#endif
      case ::libs::helpers::sys::cpu::TypeExtCpu::alu:
        sel_.set (::libs::optim::convert::ycb_rgb24::alu);
        break;
      case ::libs::helpers::sys::cpu::TypeExtCpu::usual:
#if defined(UUU_CPU_X86)
        sel_.set (::libs::optim::convert::ycb_rgb24::alu);
#elif defined(UUU_CPU_ARM)
        sel_.set (::libs::optim::convert::ycb_rgb24::neon);
        //sel_.set( ::libs::optim::convert::ycb_rgb24::alu );
#else
        sel_.set (::libs::optim::convert::ycb_rgb24::alu);
#endif
        break;
#if defined(UUU_CPU_ARM)
      case ::libs::helpers::sys::cpu::TypeExtCpu::neon:
        sel_.set (::libs::optim::convert::ycb_rgb24::neon);
        //sel_.set( ::libs::optim::convert::ycb_rgb24::alu );
        break;
#endif
      default:
        UASSERT_SIGNAL ("failed");
        sel_.set (::libs::optim::convert::ycb_rgb24::alu);
        break;
      }
    return;
  }
};

}}}}      // namespace dlls::doptim::impl::algs
