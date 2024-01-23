![Workshop Logo](https://cdn.discordapp.com/attachments/1096720092374499338/1196472002207289364/workshop_white.png)

# Linux Terminal
## [Kali Linux](https://www.kali.org/)

On Windows we are used to navigating file systems through GUI (explorer.exe) while in Kali Linux we will live mostly in Terminal.

---
1. pwd - Print Working Directory, Prints current directory that terminal is open in, default case is _/root_
2. cd - Change Directory, Using CD we can change current working directory, It's same across all 3 major OS's (f.e Windows `cd /Downloads`), if we want change directory backwards, we type two dots (..) [linux]
3. ls - List, Used to reveal content of current folder. In Kali there also color code for the content of the folder depending on the permissions the content has. _adding -la to ls gives ability to reveal hidden folders_
4. mkdir - Make Directory, Self explanatory name.
5. rmdir - Remove Directory, Self explanatory name.
6. echo "x" > text.txt - echo is used to create text containing files with prewrote information in them, _("x") in > text.txt file_, To append something and not overwrite already existing information, we use _>>_ not _>_
7. cp - cp is used to move something to different directory, for example `cp text.txt Downloads/` _this will move text.txt to Downloads directory_
8. rm - Remove, used to remove something from a directory, f.e _`rm Downloads/text.txt`_
9. mv - Move, used to move something to different directory, f.e `mv text.txt Downloads/`
10. cat - prints out what text is in text file, `cat text.txt`
11. nano - Terminal Text Editor, `nano text.txt`, this will show new screen in terminal where you can edit, add, delete t=information containing inside the text file. **_gedit_** will open graphical text editor

Please remember everything in Linux is case sensitive.

**And never ever use  `sudo rm -rf /*` command**
