#ifndef ADDER_H
#define ADDER_H

// If we are building/using a STATIC library, we do NOT use dllimport/dllexport
#ifdef maths_STATIC
  #define MATHSLIB_API
#else
  // Dynamic library (Windows): export from DLL or import into EXE
  #ifdef _WIN32
    #ifdef maths_EXPORTS
      #define MATHSLIB_API __declspec(dllexport)
    #else
      #define MATHSLIB_API __declspec(dllimport)
    #endif
  #else
    #define MATHSLIB_API
  #endif
#endif

MATHSLIB_API int add(int a, int b);

#endif

