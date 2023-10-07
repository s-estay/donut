## Getting started
- Create new directory : `mkdir spinning-donut`
- Rename directory : `mv old-name new-name`
- Move into new folder : `cd spinning-donut`
- Check folder's directory : `pwd`
- Create readme file : `touch README.md`
- Delete file : `rm README.md`
- Check files in folder : `ls`
- Edit readme file in Vim : insert mode (i) : `vim README.md`
- Vim : Delete entire line : `dd`
- Vim : Undo : `u`
- Vim : Add line number : `:set number`
- Vim : Navigate to any line : `:3`
- Vim : Save & exit : normal mode (ESC) : `:wq` (write & quit)
- Open readme file directly in terminal : cat README.md
- Open current directory : `open .`
## Hello World program
```c
#include <stdio.h>
int main(void)
{
  printf("Hello, World!\n");
  return 0;
}
```
## Compile & run a c program
- `clang donut.c` & `./a.out`
- `clang donut.c -o output` & `./output`
