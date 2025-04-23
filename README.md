# Reproduce project for llvm-project issue-136659

This is a small reproduce project for the [issue-136659](https://github.com/llvm/llvm-project/issues/136659)

## How to reproduce

Run `run-tidy` script with `clang 19.1.7` and `clang 20.1.2` environment.  

The following section shows my outputs. By comparing the `Enabled checks`, you may find `performance-*` checks are not displayed in the one with `clang 20.1.2`, which I expected to be same as the one in `clang 19.1.7`. Because of the lack of checks displayed, I think those checks begin with `performance` are not been executed.  

## Output of mine

with `clang 19.1.7`, the output of `run-tidy` is like

```shell
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is Clang 19.1.7
-- Detecting C compiler ABI info
...
-- Build files have been written to: <path to project root>/build
Enabled checks:
    clang-analyzer-apiModeling.Errno
    clang-analyzer-apiModeling.TrustNonnull
    ...
    clang-analyzer-webkit.UncountedLambdaCapturesChecker
    performance-faster-string-find
    performance-for-range-copy
    performance-implicit-conversion-in-loop
    performance-inefficient-algorithm
    performance-inefficient-string-concatenation
    performance-move-constructor-init
    performance-no-automatic-move
    performance-no-int-to-ptr
    performance-noexcept-move-constructor
    performance-trivially-destructible
    performance-type-promotion-in-math-fn

Running clang-tidy for 3 files out of 3 in compilation database ...
[1/3][0.0s] /usr/local/bin/clang-tidy -p=build --allow-no-checks <path to project root>/main.cpp
[1/3][0.0s] /usr/local/bin/clang-tidy -p=build --allow-no-checks <path to project root>/lib2/src/my-file-2.cpp
[1/3][0.0s] /usr/local/bin/clang-tidy -p=build --allow-no-checks <path to project root>/lib1/src/my-file-1.cpp
No checks enabled.
```

However, with `clang 20.1.2`, the output of `run-tidy` is like

```shell
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is Clang 20.1.2
-- Detecting C compiler ABI info
...
-- Build files have been written to: <path to project root>/build
Enabled checks:
    clang-analyzer-apiModeling.Errno
    clang-analyzer-apiModeling.TrustNonnull
    ...
    clang-analyzer-webkit.UncountedLambdaCapturesChecker

Running clang-tidy for 3 files out of 3 in compilation database ...
[1/3][0.0s] /usr/local/bin/clang-tidy -p=build --allow-no-checks <path to project root>/main.cpp
[1/3][0.0s] /usr/local/bin/clang-tidy -p=build --allow-no-checks <path to project root>/lib2/src/my-file-2.cpp
[1/3][0.0s] /usr/local/bin/clang-tidy -p=build --allow-no-checks <path to project root>/lib1/src/my-file-1.cpp
No checks enabled.
```