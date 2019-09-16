/*
 * Mini unit testing framework based on
 * http://www.jera.com/techinfo/jtns/jtn002.html
 * and extended by @ayellin
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#include "minunit.h"

int tests_failed = 0;
int tests_run = 0;

char* make_full_msg(const char* msg, const char* fname, const char* sep) {
    char* full_msg = (char*)malloc(BUF_SIZE);
    sprintf(full_msg, "%s %s %s",  fname, sep, msg);
    return full_msg;
}

static void print_error(char* msg) {
    printf("%sERROR: %s\n", KRED, msg);
    free(msg);
}

void print_results() {
    if (tests_failed == 0)
   	{
        printf("%sALL TESTS PASSED\n", KGRN);
		return ;
	}	
	printf("%s~~~~RESULTS~~~~\n", KMAG);
    printf("%sTESTS_FAILED: %d\n",KRED, tests_failed);
    printf("%sTESTS_PASSED: %d\n",KGRN, tests_run - tests_failed);
    printf("%sTESTS_RUN: %d\n", KCYN, tests_run);
}

void test_all(const char *test_suite, int n, ...) {
    printf("%s~~~~TESTING_SUITE[%s] ~~~~\n", KMAG, test_suite);
    va_list funcs;
    va_start(funcs, n);
    for (int i = 0; i < n; i++) {
        mu_run_test(va_arg(funcs, f));
    }
    print_results();
}

char* make_str_msg(char* message, const char* str1, const char* str2, const char* fname) {
    char *full_msg;

    full_msg = (char *)malloc(BUF_SIZE);
    if (!full_msg)
        return (NULL);
    sprintf(full_msg, "%s -> %s: %s != %s",fname, message, str1, str2);
    return (full_msg);
}

char* make_int_msg(char* message, int  i1, int i2, const char* fname){
    char* msg = malloc(BUF_SIZE);
    sprintf (msg, "%s -> %s: %d != %d", fname, message, i1, i2);
    return msg;
}

char* make_flt_msg(char* message, double f1, double f2, const char* fname) {
    char* msg = malloc(BUF_SIZE);
    sprintf (msg, "%s -> %s: %.2f != %.2f", fname, message, f1, f2);
    return msg;
}

char* make_ui_msg(char* message, unsigned f1, unsigned f2, const char* fname) {
    char* msg = malloc(BUF_SIZE);
    sprintf (msg, "%s -> %s: %u != %u", fname, message, f1, f2);
    return msg;
}

