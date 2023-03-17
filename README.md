# CompilationErrors
Compilation errors in Visual Studio C++ compiler.

First error is literals used in module A are not recognized in module B when they are simply used internally in module A.
Adding `uses namespace` in module B makes a workaround.

Second error occurs when pch is used and a module is imported in its header. It seems related to template specializations.

The errors were tested in:
Microsoft Visual Studio Community 2022 (64-bit) - Current
Version 17.5.2
