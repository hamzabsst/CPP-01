# CPP-01 — Memory, references, and pointers

Memory allocation, object lifetime, references, pointers to members, and switch statements. Part of my 42 C++ coursework.

## Exercises

Each directory is a separate program with its own Makefile and entry point.

| Directory | Focus | Executable |
| --- | --- | --- |
| [ex00](ex00/) | Zombie creation on the stack and heap | `braiiiiiiinnnzzzz` |
| [ex01](ex01/) | A dynamically allocated zombie horde | `moar_brainz` |
| [ex02](ex02/) | Pointers and references to a string | `hi_this_is_brain` |
| [ex03](ex03/) | Weapon references and pointers through HumanA and HumanB | `unnecessary_violence` |
| [ex04](ex04/) | File string replacement | `sed` |
| [ex05](ex05/) | Harl logging through member-function pointers | `harl` |
| [ex06](ex06/) | Harl log-level filtering | `harlFilter` |

Executable names above follow the current Makefiles, including names reused between exercises.

## Build and run

Requirements: Make and a C++ compiler supporting C++98. The Makefiles use `c++` with `-Wall -Wextra -Werror -std=c++98`.

From the repository root, build the first exercise:

```sh
make -C ex00
cd ex00
./braiiiiiiinnnzzzz
```

Return to the repository root to build another exercise by replacing `ex00` with its directory. Run it from that directory when it uses relative data files. Inspect its `main.cpp` (or `tests.cpp` / `src/main.cpp`) for the included examples and expected arguments.

```sh
make -C ex00 clean   # Remove object files
make -C ex00 fclean  # Remove object files and executable
make -C ex00 re      # Rebuild
```

## Study notes

These are learning exercises, not a general-purpose library. Read the class headers alongside the implementations, then use the supplied entry points to explore the behavior. This README documents the repository contents and build commands; it does not claim an official evaluation result.
