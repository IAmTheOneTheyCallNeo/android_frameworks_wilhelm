/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/** \file OpenSLESUT.h OpenSL ES Utility Toolkit */

/** \brief Maximum result return code */

#define SLESUT_RESULT_MAX (SL_RESULT_CONTROL_LOST + 1)

#ifdef __cplusplus
extern "C" {
#endif

extern const char * const slesutResultStrings[SLESUT_RESULT_MAX];
extern void slesutPrintIID(SLInterfaceID iid);
extern const char *slesutResultToString(SLresult result);

#ifdef __cplusplus
}
#endif
