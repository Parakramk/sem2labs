# References (So That I won't need to Google Again and Again)

## Bash/Zsh

### Create folder/file in each subfolder of present folder

- Create folder in each subfolder of present folder

```bash
for dir in */; do mkdir -- "$dir/tmp1"; done
```

- Create folder in each subfolder of present folder

```bash
for dir in */; do touch -- "$dir/.gitkeep"; done
```

## Regex

- Regex for Empty line in VSCODE      ```\n\n```

- Extensions used `ms-vscode.cpptools` , `danielpinto8zz6.c-cpp-compile-run` , `usernamehw.indent-one-space`
