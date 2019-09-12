/*
 * Mini unit testing framework based on
 * http://www.jera.com/techinfo/jtns/jtn002.html
 * and extended by @ayellin
*/

#ifndef LIBTEST_MINUNIT_H
#define LIBTEST_MINUNIT_H

#ifdef WIN32   //WINDOWS
#define __FUNCTION_NAME__   __FUNCTION__
#else          //*NIX
	#define __FUNCTION_NAME__   __func__
#endif

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define BUF_SIZE 1024

extern int tests_run;
extern int tests_failed;

typedef char*(*f)(void);

void test_all(const char *msg, int n, ...);

char* make_full_msg(const char* msg, const char* msg2, const char* sep);

char* make_str_msg(char* message, const char* str1, const char* str2, const char* fname);

char* make_int_msg(char* message, int  i1, int i2, const char* fname);

char* make_flt_msg(char* message, double f1, double f2, const char* fname);

char* make_ui_msg(char* message, unsigned f1, unsigned f2, const char* fname);

#define mu_assert(message, test) do {if (!(test)) {return make_full_msg(message, __FUNCTION_NAME__, " -> ");} } while (0)
#define mu_run_test(test) do { char* message = test(); tests_run++; \
                          if (message) {tests_failed++; print_error(message); } } while(0)

#define mu_assert_str(message, s1, s2) do {if (strcmp(s1, s2) != 0) {return make_str_msg(message, s1, s2, __FUNCTION_NAME__); } } while (0)

#define mu_assert_i(message, i1, i2) do {if (i1 != i2) { return make_int_msg(message, i1, i2, __FUNCTION_NAME__);} } while(0)

#define mu_assert_f(message, f1, f2) do {if (f1 != f2) { return make_flt_msg(message, f1, f2, __FUNCTION_NAME__);} } while(0)

#define mu_assert_ui(message, f1, f2) do {if (f1 != f2) { return make_ui_msg(message, f1, f2, __FUNCTION_NAME__);} } while(0)

#endif //LIBTEST_MINUNIT_H
