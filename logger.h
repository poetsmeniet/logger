/*
tcp_pthread_coban

Copyright (c) 2017 Thomas Wink <thomas@geenbs.nl>

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
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
#ifndef LOGGER_H_
#define LOGGER_H_

/* Log level enumerations */
enum {LOG_DEBUG, LOG_INFO, LOG_WARN, LOG_CRIT};

/* The first function to call */
void initLogr(const char * LOGFILE);

/* The actual logging function */
void logr(int sev, const char* msg, ...);

/* Always call after use of logger */
void termLogr();

#endif
