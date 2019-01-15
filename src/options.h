#ifndef OPTIONS_H
#define OPTIONS_H

#if !defined(_UNICODE)
#define _UNICODE
#endif /* _UNICODE */

#if !defined(__TEXT)
#if defined(_UNICODE)
#define	__TEXT(q)	L##q
#else
#define	__TEXT(q)	q
#endif /* _UNICODE */
#endif /* __TEXT */

#if !defined(_T)
#define	_T(x)		__TEXT(x)
#endif /* _T */

#if !defined(TCHAR)
#if defined(_UNICODE)
typedef wchar_t TCHAR;
#else
typedef char TCHAR;
#endif /* _UNICODE */
#endif /* TCHAR */

#endif /* OPTIONS_H */