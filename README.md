# Clang-Tidy Multi-Config Setup

This project demonstrates how to effectively use multiple clang-tidy configurations across different parts of your codebase.

## Project Layout

```text:project-layout.txt

.clang-tidy         # Base configuration (fallback, no checks)
├── lib1/
│   └── .clang-tidy  # Strict rules for lib1
├── lib2/       
│   └── .clang-tidy  # Relaxed rules for lib2

