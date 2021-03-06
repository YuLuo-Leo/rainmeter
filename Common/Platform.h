/* Copyright (C) 2013 Rainmeter Project Developers
 *
 * This Source Code Form is subject to the terms of the GNU General Public
 * License; either version 2 of the License, or (at your option) any later
 * version. If a copy of the GPL was not distributed with this file, You can
 * obtain one at <https://www.gnu.org/licenses/gpl-2.0.html>. */

#ifndef RM_COMMON_PLATFORM_H_
#define RM_COMMON_PLATFORM_H_

#include <string>

namespace Platform {

LPCWSTR GetPlatformName();
std::wstring GetPlatformFriendlyName();
std::wstring GetPlatformUserLanguage();
bool Is64BitWindows();

}  // namespace Platform

#endif
