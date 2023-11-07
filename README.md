## Getting started
- Create new directory : `mkdir donut`
- Rename directory : `mv old-name new-name`
- Move into new folder : `cd donut`
- Check folder's directory : `pwd`
- Create readme file : `touch README.md`
- Delete file : `rm README.md`
- Check files in folder : `ls`
- Open current directory : `open .`
## Add gitignore
- `touch .gitignore`
- `ls -a`
- `vim .gitignore`
- [More options](https://gist.github.com/octocat/9257657)
```
# OS generated files
.DS_Store
# Compiled source
*.out
```
## Create new local repository
- `git init`
- `git add .`
- `git commit -m "Initial commit"`
- `git branch` : `main`
## Create new remote repository
- GitHub : Create New : New Repository
- Repository name : donut
- Private
- Leave uncheck : Add a README file
- Create
- `git remote add origin git@github.com:s-estay/donut.git`
- `git push -u origin main`
- Update page : ⌘ + R
## Commit & push new changes
- Update README.md
- `git status`
- `git add README.md`
- `git push`
## Amend latest commit
- `git commit --amend --no-edit`
- `git push -f`
## Vim modes
- Normal : `ESC` : move cursor around
- Insert : `i/a` : insert code
- Visual : `v` : select with cursor
- Visual line mode : `V` : select entire line
- Command : `:` : type commands
## Vim motions (normal mode)
- `h` : left
- `j` : down
- `k` : up
- `l` : right
- `w` : jump to next word
- `b` : jump to previous word
- `:9` : jump to line 9
- `*` : jump to next ocurrence of word
- `#` : jump to previous ocurrence of word
## Vim custom motions (normal mode)
- `1` : jump to first non-blank character of line : default `^`
- `2` : jump to last non-blank character of line : default `g_`
## Vim count + motion (normal mode)
- `5j` : jump 5 lines down
- `3k` : jump 3 lines up
## Vim commands (normal mode)
- `d` : delete
- `dd` : delete entire line
- `u` : undo
## Vim command + count + motion (normal mode)
- `dw` : delete word (cursor on word's first character)
- `d2w` : delete 2 words
- `db` : delete previous word (cursor on word's first character)
- `d3j` : delete current line + 3 down below
## Vim insert mode
- `i` : insert text to left of cursor
- `a` : insert text to right of cursor
- `o` : insert new line below current line
- `O` : insert new line above current line
## Vim command mode
- `ESC` : enter command mode
- `:w` : save
- `:q` : quit
- `:q!` : force quit
- `:wq` : save & quit
## Vim visual mode
- **TODO**
## Edit file
- `vim donut.c`
- `:wq`
- `cat donut.c`
## Hello World program
```c
#include <stdio.h>
int main(void)
{
  printf("Hello, World!\n");
  return 0;
}
```
## Compile & run a C program
- `clang donut.c` & `./a.out`
- `clang donut.c -o output` & `./output`
## Compile with diagnostic flags
- `clang -Wall -Wextra donut.c` & `./a.out`
## Compile using different C versions
- C89 : `clang donut.c -std=c89`
- C99 : `clang donut.c -std=c99`
- C11 : `clang donut.c -std=c11`
## Makefile
- **TODO**
## Terminal commands
- `cat` : read and display the content of one or more files
- `cd` : change the directory you’re working in
- `chmod` : modify file or folder permissions
- `chown` : modify file or folder ownership
- `cp` : copy files
- `curl` : a tool for sending data to or from a web server
- `defaults` : read, write, and delete software preferences
- `echo` : return the result of a command to standard output
- `grep` : search a file for a given pattern
- `killall` : stop a running process or app
- `ls` : list the contents of a directory
- `man` : view the manual page for a command
- `mkdir` : create a new directory or folder
- `mv` : move one or more files or directories
- `pwd` : see the directory you’re currently working in
- `rm` : delete files
- `rmdir` : delete a directory
