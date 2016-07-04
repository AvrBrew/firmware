
#ifndef STRING_CONVERT_H
#define	STRING_CONVERT_H

#ifdef	__cplusplus
extern "C" {
#endif

//convert long to string
char *ltoa(long N, char *str, int base);

//convert unsigned long to string
char* ultoa_pad(unsigned long a, char* buffer, int radix, char pad=1);
char* ultoa(unsigned long a, char* buffer, int radix);

//convert unsigned int to string
char* utoa(unsigned a, char* buffer, int radix);

char* itoa(int a, char* buffer, int radix);




#ifdef	__cplusplus
}
#endif

#endif	/* STRING_CONVERT_H */

