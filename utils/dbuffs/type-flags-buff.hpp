﻿#pragma once
/**
\file       type-flags-buff.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       01.01.2017
\copyright  www.uuusoft.com
\project    uuu_dbuffs
\brief      Обявление признаков-флагов, относящихся к всему буферу.
*/

namespace utils { namespace dbuffs {
/**
\brief  Перечисление возможных типов признаков, которые связаны с буфером данных в целом.
*/
enum struct TypeFlagsBuff
{
  zero                = 0,      //< Отсутствие какого-либо признака, используется для полноты.
  fake                = 1,      //< Признак виртуальности кадра, т.е. кадр не содержит в себе данных (даже если они есть по другим признакам), а используется как призеак-событие. Deprecated.
  null                = 2,      //< Признак отсутствия памяти в буфере (как и соответственно данных в нем).
  empty               = 3,      //< Признак отсуттствия данных в буфере.
  convolution_support = 4,      //< Признак, что буфер выделен с учетом поддержки операции свертки над данными в нем.
  convolution_data    = 5,      //< Признак, что данных в буфере достаточно для операции свертки и очевидно буфер выделен с учетом поддержки операции "свертка".
  max_bound           = 8       //< Максимальное значение признака. Вспомогательное значение для проверок значений типа.
};

}}      // namespace utils::dbuffs
