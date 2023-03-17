# CompilationErrors
Compilation errors in Visual Studio C++ compiler.

First error is literals used in module 1 are not recognized in module 2 when they are simply used internally in module 1.
Adding `uses namespace` fixes the issue, but this shouldn't be happening.

Second error occurs when pch is used and a module is imported in it. It seems related to template specializations.

Microsoft Visual Studio Community 2022 (64-bit) - Current
Version 17.5.2
