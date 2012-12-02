/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2012 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/**
 *  \file SDL_test_assert.h
 *  
 *  Include file for SDL test framework.
 *
 *  This code is a part of the SDL2_test library, not the main SDL library.
 */

/* 
 *
 * Assert API for test code and test cases
 *
 */

#ifndef _SDL_test_assert_h
#define _SDL_test_assert_h

#include "begin_code.h"
/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
/* *INDENT-OFF* */
extern "C" {
/* *INDENT-ON* */
#endif

/**
 * \brief Fails the assert.
 */
#define ASSERT_FAIL		0

/**
 * \brief Passes the assert.
 */
#define ASSERT_PASS		1

/**
 * \brief Assert that logs and break execution flow on failures.
 *
 * \param assertCondition Evaluated condition or variable to assert; fail (==0) or pass (!=0).
 * \param assertDescription Message to log with the assert describing it.
 */
void SDLTest_Assert(int assertCondition, char *assertDescription);

/**
 * \brief Assert for test cases that logs but does not break execution flow on failures.
 *
 * \param assertCondition Evaluated condition or variable to assert; fail (==0) or pass (!=0).
 * \param assertDescription Message to log with the assert describing it.
 *
 * \returns Returns the assertCondition so it can be used to externall to break execution flow if desired.
 */
int SDLTest_AssertCheck(int assertCondition, char *assertDescription);

/**
 * \brief Resets the assert summary counters to zero.
 */
void SDLTest_ResetAssertSummary();

/**
 * \brief Logs summary of all assertions (total, pass, fail) since last reset as INFO or ERROR.
 *
 */
void SDLTest_LogAssertSummary();

#ifdef __cplusplus
/* *INDENT-OFF* */
}
/* *INDENT-ON* */
#endif
#include "close_code.h"

#endif /* _SDL_test_assert_h */

/* vi: set ts=4 sw=4 expandtab: */