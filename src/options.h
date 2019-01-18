#ifndef OPTIONS_H
#define OPTIONS_H

#if !defined(_UNICODE)
#   define _UNICODE
#endif /* _UNICODE */

#if !defined(__TEXT)
#   if defined(_UNICODE)
#       define	__TEXT(q)	L##q
#   else
#       define	__TEXT(q)	q
#   endif /* _UNICODE */
#endif /* __TEXT */

#if !defined(_T)
#   define	_T(x)		__TEXT(x)
#endif /* _T */

#if !defined(TCHAR)
#   if defined(_UNICODE)
        typedef wchar_t TCHAR;

        /* IO streams */
        typedef std::wcin  tcin;
        typedef std::wcout tcout;
        typedef std::wcerr tcerr;
#   else
        typedef char TCHAR;

        /* IO streams */
        typedef std::cin  tcin;
        typedef std::cout tcout;
        typedef std::cerr tcerr;
#   endif /* _UNICODE */
#endif /* TCHAR */

#if !defined(INTERPRETER)
#   define INTERPRETER
#endif /* INTERPRETER */

#if !defined(INTERPRETER_STREAM)
#   define INTERPRETER_STREAM std::cin
#endif /* INTERPRETER_STREAM */

#endif /* OPTIONS_H */