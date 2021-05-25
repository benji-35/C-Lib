/*
** EPITECH PROJECT, 2021
** C-Lib
** File description:
** kutils
*/

#ifndef _KAP_UTILS_H
#define _KAP_UTILS_H

#include <stdio.h>
#include <unistd.h>

#ifndef _KAP_BOOL_
#define _KAP_BOOL_

typedef enum bool_e bool_t;
#define true 1
#define false 0

enum bool_e {
    FALSE = 0,
    TRUE
};

#endif /*_KAP_BOOL_*/

#ifndef _KAP_SIZE_
#define _KAP_SIZE_

typedef unsigned long kusize_t;
typedef unsigned long long kussize_t;
typedef long ksize_t;
typedef long long kssize_t;
typedef long double kdsize_t;

#endif /*_KAP_SIZE_*/

#ifndef _KAP_STR_TYPD_
#define _KAP_STR_TYPD_

typedef char ** text;
typedef char * string;
typedef char const * cstring;
typedef char const ** ctext;

#endif /*_KAP_STR_TYPD_*/

#ifndef KNULL
#define KNULL ((void *)0)
#endif /*KNULL*/

#ifndef OBJECT
#define OBJECT void *
#endif

#ifndef _KAP_FD_
#define _KAP_FD_

#define kstdin 0
#define kstdout 1
#define kstderr 2

#endif /*_KAP_FD_*/

#ifndef _KAP_UNUSED_
#define _KAP_UNUSED_

#define UNUSED __attribute__((unused))

#endif /*_KAP_UNUSED_*/

#ifndef _KAP_ASSERT_H_
#define _KAP_ASSERT_H_

#ifndef kASSERT_FUNCTION

#define kASSERT_FUNCTION KNULL

#endif /*kASSERT_FUNCTION*/

extern bool_t kassert_f(bool_t isfail, cstring __expr, cstring __fname, int __line);

#define kassert(__expr) kassert_f(__expr, #__expr, __FILE__, __LINE__)

#endif /* !_KAP_ASSERT_H_ */

bool_t can_open_file(string path);
string kopen_file(string path);
void kwrite_file(string path, string txt, bool_t append);
void kfree(void *__ptr);

#endif /* !_KAP_UTILS_H */
