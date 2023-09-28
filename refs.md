# References (So That I won't need to Google Again and Again)

## Bash/Zsh

### folder/file Utils

- Create folder in each subfolder of present folder

```bash
for dir in */; do mkdir -- "$dir/tmp1"; done
```

- Create file in each subfolder of present folder

```bash
for dir in */; do touch -- "$dir/.gitkeep"; done
```

- Create Multiple Folders at once with Succeding Numbers

```bash
mkdir lab{1..10}
```

or

```bash
for i in {1..100}; do mkdir name$i; done
```

- Create Multiple Files at once with Succeding Numbers

```bash
touch filename{1..10}
```

or

```bash
for i in {1..100}; do touch filename$i.txt; done
```

- Create multiple Directories within a subdirectory
<!-- If you want to create multiple subdirectories within the parent directory, then you can use the below code, which will create a total of 25 directories, and each parent directory will contain 10 sub-directories. -->
``` bash
mkdir -p parent{1..25}/subdirectory{1..10}
```

## Others

- Regex for Empty line in VSCODE:      `\n\n`

- Extensions used: `ms-vscode.cpptools` , `danielpinto8zz6.c-cpp-compile-run` , `usernamehw.indent-one-space`

- Manually compile C++ Code

```bash
g++ -o output input.cpp
```
