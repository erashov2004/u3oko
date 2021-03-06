//This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
/**
\file       cat.cpp
\date       01.08.2017
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\copyright  www.uuusoft.com
\project    uuu_helpers
\brief      empty brief
*/
#include "mmedia/defines/defines.hpp"
#include "mmedia/defines/includes.hpp"
#include "../includes_int.hpp"
#include "cat.hpp"

namespace libs { namespace helpers { namespace uids { namespace cat {

const cuuid cat_video_device ({ 0x10, 0xB3, 0x0B, 0x86, 0x01, 0x5D, 0xd0, 0x11, 0xBD, 0x3B, 0x00, 0xA0, 0xC9, 0x11, 0xCE, 0x86 });
const cuuid audio_devices ({ 0x62, 0xa7, 0xd9, 0x33, 0xc8, 0x90, 0xd0, 0x11, 0xbd, 0x43, 0x0, 0xa0, 0xc9, 0x11, 0xce, 0x86 });
const cuuid audio_compressors ({ 0x61, 0xa7, 0xd9, 0x33, 0xc8, 0x90, 0xd0, 0x11, 0xbd, 0x43, 0x0, 0xa0, 0xc9, 0x11, 0xce, 0x86 });
const cuuid audio_renderers ({ 0xe1, 0x58, 0xf1, 0xe0, 0x04, 0xcb, 0xd0, 0x11, 0xbd, 0x4e, 0x0, 0xa0, 0xc9, 0x11, 0xce, 0x86 });
const cuuid legacy_am_filters ({ 0xF1, 0x63, 0x38, 0x08, 0xDE, 0x70, 0xd0, 0x11, 0xBD, 0x40, 0x00, 0xA0, 0xC9, 0x11, 0xCE, 0x86 });
const cuuid midi_renders ({ 0x52, 0x24, 0xfE, 0x4E, 0x8A, 0x16, 0xd1, 0x11, 0xBC, 0x76, 0x0, 0xc0, 0x4F, 0xB9, 0x45, 0x3B });
const cuuid video_compressors ({ 0x60, 0xa7, 0xd9, 0x33, 0xc8, 0x90, 0xd0, 0x11, 0xbd, 0x43, 0x0, 0xa0, 0xc9, 0x11, 0xce, 0x86 });

}}}}      // namespace libs::helpers::uids::cat
