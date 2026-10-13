# C Cloud Demo

A tiny C program for trying Codex Cloud. It prints the sum from 1 to `count`.

## Build and run

```sh
cc -std=c11 -Wall -Wextra -Werror -o c-cloud-demo main.c
./c-cloud-demo 5
```

Expected output: `1 + 2 + 3 + 4 + 5 = 15`

Try another number from 1 to 20, for example `./c-cloud-demo 8`. On Windows, run `c-cloud-demo.exe 5` after building with a C compiler.

No third-party packages, accounts, secrets, or running service are required.
