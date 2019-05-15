///////////////////////////////////////////////////////////////////////////////
// EAMainPrintf.h
//
// Copyright (c) 2012 Electronic Arts Inc.
///////////////////////////////////////////////////////////////////////////////

#ifndef EAMAIN_PRINTF_H
#define EAMAIN_PRINTF_H

#include <EAMain/internal/Version.h>

namespace EA
{
namespace EAMain
{
    class IChannel;

namespace Messages
{
    EAMAIN_API void Print(const char* pData);
}}}

#endif  // header include guard
